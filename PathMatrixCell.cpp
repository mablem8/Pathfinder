//
//  PathMatrixCell.cpp
//  Pathfinder
//
//  Created by Bradley Denby on 11/10/13.
//  Copyright (c) 2013 Bradley Denby. All rights reserved.
//

#include "PathMatrixCell.h"
#include <iostream>

const std::vector<const Path*> PathMatrixCell::DEFAULT_PATHS = std::vector<const Path*>();

const PathMatrixCell* const INVALID_CELL = new PathMatrixCell();

PathMatrixCell::PathMatrixCell(const std::vector<const Path*>& paths) : __paths(paths) {}

PathMatrixCell::PathMatrixCell(const PathMatrixCell& cell) {
    for (int i=0; i<cell.getPaths().size(); i++) {
        const Path* pathi = cell.getPaths().at(i);
        __paths.push_back(pathi->clone());
        pathi = NULL;
    }
}

PathMatrixCell::~PathMatrixCell() {
    for (int i=0; i<__paths.size(); i++) {
        delete __paths.at(i);
        __paths.at(i) = NULL;
    }
    __paths.clear();
}

const std::vector<const Path*>& PathMatrixCell::getPaths() const {
    return __paths;
}

const PathMatrixCell* PathMatrixCell::clone() const {
    if (this != INVALID_CELL) {
        return new PathMatrixCell(*this);
    }
    else {
        return this;
    }
}

const PathMatrixCell* PathMatrixCell::cloneAndPrepend(const unsigned int vertex) const {
    if (this != INVALID_CELL) {
        std::vector<const Path*> prependedPaths;
        for (int i=0; i<__paths.size(); i++) {
            const Path* pathi = __paths.at(i);
            prependedPaths.push_back(pathi->cloneAndPrepend(vertex));
            pathi = NULL;
        }
        return new PathMatrixCell(prependedPaths);
    }
    else {
        return this;
    }
}

const PathMatrixCell* PathMatrixCell::operator+(const PathMatrixCell& cell) const {
    if (__paths.size()==0 && cell.getPaths().size()==0) {
        return INVALID_CELL;
    }
// unnecessary / redundant?
//    else if (__paths.size()==0 && cell.getPaths().size()!=0) {
//        return new PathMatrixCell(cell);
//    }
//    else if (__paths.size()!=0 && cell.getPaths().size()==0) {
//        return new PathMatrixCell(*this);
//    }
// end unnecessary / redundant
    else {
        std::vector<const Path*> result(__paths);
        result.insert(result.end(), cell.getPaths().begin(), cell.getPaths().end());
        return new PathMatrixCell(result);
    }
}

const PathMatrixCell* PathMatrixCell::operator*(const PathMatrixCell& cell) const {
    if (__paths.size()==0 || cell.getPaths().size()==0) {
        return INVALID_CELL;
    }
    else {
        std::vector<const Path*> result;
        for (int i=0; i<__paths.size(); i++) {
            for (int j=0; j<cell.getPaths().size(); j++) {
                const Path* product = (*(__paths.at(i)))*(*(cell.getPaths().at(j)));
                if (product != INVALID_PATH) {
                    result.push_back(product);
                }
                product = NULL;
            }
        }
        if (result.size() > 0) {
            return new PathMatrixCell(result);
        }
        return INVALID_CELL;
    }
}

std::string PathMatrixCell::toString() const {
    std::stringstream ss;
    ss << "{";
    for (int i=0; i<__paths.size(); i++) {
        ss << " " << __paths.at(i)->toString();
    }
    ss << " }";
    return ss.str();
}

std::vector<std::string> PathMatrixCell::toStringVector() const {
    //std::cout << "PathMatrixCell::toStringVector running" << std::endl;
    std::stringstream ss;
    std::vector<std::string> output;
    ss << "{";
    //std::cout << ss.str() << std::endl;
    if (__paths.size() == 1) {
        //std::cout << "__paths.size() == 1" << std::endl;
        ss << " " << __paths.at(0)->toString();
        //std::cout << ss.str() << std::endl;
    }
    else if (__paths.size() != 0) {
        //std::cout << "__paths.size() != 0" << std::endl;
        ss << " " << __paths.at(0)->toString();
        //std::cout << ss.str() << std::endl;
        output.push_back(ss.str());
        //std::cout << "output.push_back(" << output.back() << ")" << std::endl;
        ss.str("");
    }
    //std::cout << "Trying for loop" << std::endl;
    for (int i=1; i<(int(__paths.size())-1); i++) {
        ss << " +" << __paths.at(i)->toString();
        //std::cout << ss.str() << std::endl;
        output.push_back(ss.str());
        //std::cout << "output.push_back(" << output.back() << ")" << std::endl;
        ss.str("");
    }
    if (__paths.size() > 1) {
        //std::cout << "__paths.size() > 1" << std::endl;
        ss << " +" << __paths.at(__paths.size()-1)->toString();
        //std::cout << ss.str() << std::endl;
    }
    ss << " }";
    //std::cout << ss.str() << std::endl;
    output.push_back(ss.str());
    //std::cout << "output.push_back(" << output.back() << ")" << std::endl;
    ss.str("");
    //std::cout << "PathMatrixCell::toStringVector ran" << std::endl;
    return output;
}

std::ostream& operator<<(std::ostream& output, const PathMatrixCell& cell) {
    output << cell.toString();
    return output;
}