//
//  PathWithCosts.h
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

#ifndef _PathWithCosts_h
#define _PathWithCosts_h

#include "Path.h"
#include "Cost.h"

class PathWithCosts : public Path {
private:
    
    std::vector<const Cost*> __costs;
    
public:
    
    static const std::vector<const Cost*> DEFAULT_COSTS;
    
    PathWithCosts(const std::vector<unsigned int>& path=DEFAULT_PATH, const std::vector<const Cost*>& costs=DEFAULT_COSTS);
    PathWithCosts(const PathWithCosts& path);
    virtual ~PathWithCosts();
    
    const std::vector<const Cost*>& getCosts() const;
    
    virtual const Path* clone() const;
    virtual const Path* cloneAndPrepend(const unsigned int vertex) const;
    virtual bool operator==(const PathWithCosts& path) const;
    virtual const Path* operator*(const Path& path) const;
    virtual std::string toString() const;
    
};

#endif
