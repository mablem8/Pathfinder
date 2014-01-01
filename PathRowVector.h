//
//  PathRowVector.h
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

#ifndef Pathfinder_PathRowVector_h
#define Pathfinder_PathRowVector_h

#include "PathMatrix.h"

class PathRowVector {
private:
    
    unsigned int __rowNumber;
    std::vector<const PathMatrixCell*> __rowVector;
    
public:
    
    PathRowVector(const PathMatrix& pathMatrix, const unsigned int rowNumber);
    PathRowVector(const std::vector<const PathMatrixCell*>& rowVector, const unsigned int rowNumber);
    PathRowVector(const PathRowVector& pathRowVector);
    virtual ~PathRowVector();
    
    const std::vector<const PathMatrixCell*>& getRowVector() const;
    const unsigned int getRowNumber() const;
    
    virtual const PathRowVector* prependDepartureVertex() const;
    virtual const PathRowVector* operator*(const PathMatrix& pathMatrix) const;
    virtual std::string toString() const;
    
};

extern const PathRowVector* const INVALID_ROW;
std::ostream& operator<<(std::ostream& output, const PathRowVector& pathRowVector);

#endif
