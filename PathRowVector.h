//
//  PathRowVector.h
//  Pathfinder
//
//  Created by Bradley Denby on 12/19/13.
//  Copyright (c) 2013 Bradley Denby. All rights reserved.
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
