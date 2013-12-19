//
//  Path.cpp
//  Pathfinder
//
//  Created by Bradley Denby on 9/14/13.
//  Copyright (c) 2013 Bradley Denby. All rights reserved.
//

#include "Path.h"

const std::vector<unsigned int> Path::DEFAULT_PATH = std::vector<unsigned int>();

const Path* const INVALID_PATH = new Path();

Path::Path(const std::vector<unsigned int>& path) : __path(path) {}

Path::Path(const Path& path) : __path(path.getPath()) {}

Path::~Path() {}

const std::vector<unsigned int>& Path::getPath() const {
    return __path;
}

const Path* Path::clone() const {
    return new Path(*this);
}

bool Path::operator==(const Path& path) const {
    return (this->getPath() == path.getPath());
}

const Path* Path::operator*(const Path& path) const {
    return INVALID_PATH;
}

std::string Path::toString() const {
    std::stringstream ss;
    ss << "[";
    for (int i=0; i<__path.size(); i++) {
        ss << " " << __path.at(i);
    }
    ss << " ]";
    return ss.str();
}

std::ostream& operator<<(std::ostream& output, const Path& path) {
    output << path.toString();
    return output;
}