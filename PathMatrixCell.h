//
//  PathMatrixCell.h
//  Pathfinder
//
//  Created by Bradley Denby on 11/10/13.
//  Copyright (c) 2013 Bradley Denby. All rights reserved.
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
