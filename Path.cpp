//
//  Path.cpp
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
    if (this != INVALID_PATH) {
        return new Path(*this);
    }
    else {
        return this;
    }
}

const Path* Path::cloneAndPrepend(const unsigned int vertex) const {
    if (this != INVALID_PATH) {
        std::vector<unsigned int> prependedPath(__path);
        prependedPath.insert(prependedPath.begin(), vertex);
        return new Path(prependedPath);
    }
    else {
        return this;
    }
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