//
//  PathWithCosts.cpp
//  Pathfinder
//
//  Created by Bradley Denby on 10/13/13.
//  Copyright (c) 2013 Bradley Denby. All rights reserved.
//

#include "PathWithCosts.h"
#include <iostream>

const std::vector<const Cost*> PathWithCosts::DEFAULT_COSTS = std::vector<const Cost*>();

PathWithCosts::PathWithCosts(const std::vector<unsigned int>& path, const std::vector<const Cost*>& costs) : Path(path), __costs(costs) {}

PathWithCosts::PathWithCosts(const PathWithCosts& path) : Path(path.getPath()) {
    for (int i=0; i<path.getCosts().size(); i++) {
        const Cost* costi = new Cost(*(path.getCosts().at(i)));
        __costs.push_back(costi);
        costi = NULL;
    }
}

PathWithCosts::~PathWithCosts() {
    for (int i=0; i<__costs.size(); i++) {
        delete __costs.at(i);
        __costs.at(i) = NULL;
    }
    __costs.clear();
}

const std::vector<const Cost*>& PathWithCosts::getCosts() const {
    return __costs;
}

bool PathWithCosts::operator==(const PathWithCosts& path) const {
    if (this->getPath() == path.getPath()) {
        for (int i=0; i<__costs.size(); i++) {
            if (!(*(this->getCosts().at(i)) == *(path.getCosts().at(i)))) {
                return false;
            }
        }
        return true;
    }
    else {
        return false;
    }
}

// assuming the lengths of the cost vectors are the same and that they are nonzero
const Path* PathWithCosts::operator*(const PathWithCosts& path) const {
    if (this->getPath().size()==0 || path.getPath().size()==0) {
        return INVALID_PATH;
    }
    else {
        std::vector<const Cost*> newCosts;
        //std::cout << "Path " << this->getPath().at(0) << " costs vector size: " << __costs.size() << std::endl;
        for (int i=0; i<__costs.size(); i++) {
            newCosts.push_back( (*(__costs.at(i))) * (*(path.getCosts().at(i))) );
            //std::cout << newCosts.at(i)->toString() << std::endl;
            if (newCosts.at(i) == INVALID_COST) {
                return INVALID_PATH;//this->getCosts().at(i)
            }
        }
        std::vector<unsigned int> newPath(this->getPath());
        for (int i=0; i<path.getPath().size(); i++) {
            newPath.push_back(path.getPath().at(i));
            int j=0;
            while (newPath.at(j) != path.getPath().at(i)) {
                j++;
            }
            if (j != newPath.size()-1) {
                return INVALID_PATH;
            }
        }
        return new PathWithCosts(newPath, newCosts);
    }
}

std::string PathWithCosts::toString() const {
    std::stringstream ss;
    ss << "[";
    for (int i=0; i<this->getPath().size(); i++) {
        ss << " " << this->getPath().at(i);
    }
    ss << " ]:[";
    for (int i=0; i<__costs.size(); i++) {
        ss << " " << __costs.at(i)->toString();
    }
    ss << " ]";
    return ss.str();
}