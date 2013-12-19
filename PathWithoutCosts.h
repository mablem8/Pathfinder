//
//  PathWithoutCosts.h
//  Pathfinder
//
//  Created by Bradley Denby on 10/12/13.
//  Copyright (c) 2013 Bradley Denby. All rights reserved.
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
    virtual bool operator==(const PathWithoutCosts& path) const;
    virtual const Path* operator*(const Path& path) const;
    virtual std::string toString() const;
    
};

#endif
