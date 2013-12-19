//
//  PathWithCosts.h
//  Pathfinder
//
//  Created by Bradley Denby on 10/13/13.
//  Copyright (c) 2013 Bradley Denby. All rights reserved.
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
    virtual bool operator==(const PathWithCosts& path) const;
    virtual const Path* operator*(const Path& path) const;
    virtual std::string toString() const;
    
};

#endif
