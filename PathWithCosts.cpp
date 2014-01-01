//
//  PathWithCosts.cpp
//
//  Pathfinder, an optimal path finding program for graphs with
//  multi-weighted edges under specified constraints.
//
//  Copyright (c) 2013 Bradley Denby.
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see {http://www.gnu.org/licenses/}.
//

#include "PathWithCosts.h"
#include <iostream>

const std::vector<const Cost*> PathWithCosts::DEFAULT_COSTS = std::vector<const Cost*>();

PathWithCosts::PathWithCosts(const std::vector<unsigned int>& path, const std::vector<const Cost*>& costs) : Path(path), __costs(costs) {}

PathWithCosts::PathWithCosts(const PathWithCosts& path) : Path(path.getPath()) {
    for (int i=0; i<path.getCosts().size(); i++) {
        const Cost* costi = path.getCosts().at(i);
        __costs.push_back(costi->clone());
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

const Path* PathWithCosts::clone() const {
    if (this != INVALID_PATH) {
        return new PathWithCosts(*this);
    }
    else {
        return this;
    }
}

const Path* PathWithCosts::cloneAndPrepend(const unsigned int vertex) const {
    if (this != INVALID_PATH) {
        std::vector<unsigned int> prependedPath(this->getPath());
        prependedPath.insert(prependedPath.begin(), vertex);
        std::vector<const Cost*> costsClone;
        for (int i=0; i<__costs.size(); i++) {
            const Cost* costi = __costs.at(i);
            costsClone.push_back(costi->clone());
            costi = NULL;
        }
        return new PathWithCosts(prependedPath, costsClone);
    }
    else {
        return this;
    }
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
const Path* PathWithCosts::operator*(const Path& path) const {
    if (this->getPath().size()==0 || path.getPath().size()==0) {
        return INVALID_PATH;
    }
    else {
        std::vector<const Cost*> newCosts;
        //std::cout << "Path " << this->getPath().at(0) << " costs vector size: " << __costs.size() << std::endl;
        for (int i=0; i<__costs.size(); i++) {
            newCosts.push_back( (*(__costs.at(i))) * (*(dynamic_cast<const PathWithCosts&>(path).getCosts().at(i))) );
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