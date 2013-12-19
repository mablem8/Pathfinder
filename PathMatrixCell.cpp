//
//  PathMatrixCell.cpp
//  Pathfinder
//
//  Created by Bradley Denby on 11/10/13.
//  Copyright (c) 2013 Bradley Denby. All rights reserved.
//

#include "PathMatrixCell.h"

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

const PathMatrixCell* PathMatrixCell::operator+(const PathMatrixCell& cell) const {
    if (__paths.size()==0 && cell.getPaths().size()==0) {
        return INVALID_CELL;
    }
// unnecessary / redundant?
    else if (__paths.size()==0 && cell.getPaths().size()!=0) {
        return new PathMatrixCell(cell);
    }
    else if (__paths.size()!=0 && cell.getPaths().size()==0) {
        return new PathMatrixCell(*this);
    }
// end unnecessary / redundant
    else {
        std::vector<const Path*> result(__paths);
        result.insert(result.end(), cell.getPaths().begin(), cell.getPaths().end());
        return new PathMatrixCell(result);
    }
}

// some memory management issues here
const PathMatrixCell* PathMatrixCell::operator*(const PathMatrixCell& cell) const {
    if (__paths.size()==0 || cell.getPaths().size()==0) {
        return INVALID_CELL;
    }
    else {
        std::vector<const Path*> result;
        for (int i=0; i<__paths.size(); i++) {
            for (int j=0; j<cell.getPaths().size(); j++) {
                const Path* product = (*(__paths.at(i)))*(*(cell.getPaths().at(j)));
                if (product == INVALID_PATH) {
                    return INVALID_CELL;
                }
                else {
                    result.push_back(product);
                }
            }
        }
        return new PathMatrixCell(result);
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

std::ostream& operator<<(std::ostream& output, const PathMatrixCell& cell) {
    output << cell.toString();
    return output;
}