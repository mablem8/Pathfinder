//
//  PathWithoutCosts.cpp
//  Pathfinder
//
//  Created by Bradley Denby on 10/12/13.
//  Copyright (c) 2013 Bradley Denby. All rights reserved.
//

#include "PathWithoutCosts.h"

PathWithoutCosts::PathWithoutCosts(const std::vector<unsigned int>& path) : Path(path) {}
PathWithoutCosts::PathWithoutCosts(const PathWithoutCosts& path) : Path(path.getPath()) {}
PathWithoutCosts::~PathWithoutCosts() {}

const Path* PathWithoutCosts::clone() const {
    return new PathWithoutCosts(*this);
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