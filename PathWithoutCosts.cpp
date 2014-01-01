//
//  PathWithoutCosts.cpp
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

#include "PathWithoutCosts.h"

PathWithoutCosts::PathWithoutCosts(const std::vector<unsigned int>& path) : Path(path) {}
PathWithoutCosts::PathWithoutCosts(const PathWithoutCosts& path) : Path(path.getPath()) {}
PathWithoutCosts::~PathWithoutCosts() {}

const Path* PathWithoutCosts::clone() const {
    if (this != INVALID_PATH) {
        return new PathWithoutCosts(*this);
    }
    else {
        return this;
    }
}

const Path* PathWithoutCosts::cloneAndPrepend(const unsigned int vertex) const {
    if (this != INVALID_PATH) {
        std::vector<unsigned int> prependedPath(this->getPath());
        prependedPath.insert(prependedPath.begin(), vertex);
        return new PathWithoutCosts(prependedPath);
    }
    else {
        return this;
    }
}

bool PathWithoutCosts::operator==(const PathWithoutCosts& path) const {
    return (this->getPath() == path.getPath());
}

const Path* PathWithoutCosts::operator*(const Path& path) const {
    if (this->getPath().size()==0 || path.getPath().size()==0) {
        return INVALID_PATH;
    }
    else {
        std::vector<unsigned int> result(this->getPath());
        for (int i=0; i<path.getPath().size(); i++) {
            result.push_back(path.getPath().at(i));
            int j=0;
            while (result.at(j) != path.getPath().at(i)) {
                j++;
            }
            if (j != result.size()-1) {
                return INVALID_PATH;
            }
        }
        return new PathWithoutCosts(result);
    }
}

std::string PathWithoutCosts::toString() const {
    std::stringstream ss;
    ss << "[";
    for (int i=0; i<this->getPath().size(); i++) {
        ss << " " << this->getPath().at(i);
    }
    ss << " ]";
    return ss.str();
}