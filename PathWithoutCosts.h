//
//  PathWithoutCosts.h
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

#ifndef _PathWithoutCosts_h
#define _PathWithoutCosts_h

#include "Path.h"

class PathWithoutCosts : public Path {
public:
    
    PathWithoutCosts(const std::vector<unsigned int>& path=DEFAULT_PATH);
    PathWithoutCosts(const PathWithoutCosts& path);
    virtual ~PathWithoutCosts();
    
    virtual const Path* clone() const;
    virtual const Path* cloneAndPrepend(const unsigned int vertex) const;
    virtual bool operator==(const PathWithoutCosts& path) const;
    virtual const Path* operator*(const Path& path) const;
    virtual std::string toString() const;
    
};

#endif
