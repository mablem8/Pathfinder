//
//  PathMatrix.h
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

#ifndef Pathfinder_PathMatrix_h
#define Pathfinder_PathMatrix_h

#include "PathMatrixCell.h"

class PathMatrix {
private:
    
    // the order of an n-by-n square matrix is n
    unsigned int __order;
    std::vector<const PathMatrixCell*> __matrix;
    
public:
    
    PathMatrix(const std::vector<const PathMatrixCell*>& pathMatrix, const unsigned int numberOfVertices);
    PathMatrix(const PathMatrix& pathMatrix);
    virtual ~PathMatrix();
    
    const std::vector<const PathMatrixCell*>& getPathMatrix() const;
    const unsigned int getNumberOfVertices() const;
    
    virtual const PathMatrix* operator*(const PathMatrix& pathMatrix) const;
    virtual std::string toString() const;
    
};

extern const PathMatrix* const INVALID_MATRIX;
std::ostream& operator<<(std::ostream& output, const PathMatrix& pathMatrix);

#endif
