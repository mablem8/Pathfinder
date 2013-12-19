//
//  PathMatrix.h
//  Pathfinder
//
//  Created by Bradley Denby on 11/11/13.
//  Copyright (c) 2013 Bradley Denby. All rights reserved.
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
