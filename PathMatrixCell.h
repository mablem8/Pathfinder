//
//  PathMatrixCell.h
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

#ifndef Pathfinder_PathMatrixCell_h
#define Pathfinder_PathMatrixCell_h

#include "Path.h"

class PathMatrixCell {
private:
    
    std::vector<const Path*> __paths;
    
public:
    
    static const std::vector<const Path*> DEFAULT_PATHS;
    
    PathMatrixCell(const std::vector<const Path*>& paths=DEFAULT_PATHS);
    PathMatrixCell(const PathMatrixCell& cell);
    virtual ~PathMatrixCell();
    
    const std::vector<const Path*>& getPaths() const;
    
    virtual const PathMatrixCell* clone() const;
    virtual const PathMatrixCell* cloneAndPrepend(const unsigned int vertex) const;
    virtual const PathMatrixCell* operator+(const PathMatrixCell& cell) const;
    virtual const PathMatrixCell* operator*(const PathMatrixCell& cell) const;
    virtual std::string toString() const;
    virtual std::vector<std::string> toStringVector() const;
    
};

extern const PathMatrixCell* const INVALID_CELL;
std::ostream& operator<<(std::ostream& output, const PathMatrixCell& cell);

#endif
