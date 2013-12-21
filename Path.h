//
//  Path.h
//  Pathfinder
//
//  Created by Bradley Denby on 9/14/13.
//  Copyright (c) 2013 Bradley Denby. All rights reserved.
//

#ifndef Pathfinder_Path_h
#define Pathfinder_Path_h

#include <sstream>
#include <vector>

class Path {
private:
    
    std::vector<unsigned int> __path;
    
public:
    
    static const std::vector<unsigned int> DEFAULT_PATH;
    
    Path(const std::vector<unsigned int>& path=DEFAULT_PATH);
    Path(const Path& path);
    virtual ~Path();
    
    const std::vector<unsigned int>& getPath() const;
    
    virtual const Path* clone() const;
    virtual const Path* cloneAndPrepend(const unsigned int vertex) const;
    virtual bool operator==(const Path& path) const;
    virtual const Path* operator*(const Path& path) const;
    virtual std::string toString() const;
    
};

extern const Path* const INVALID_PATH;
std::ostream& operator<<(std::ostream& output, const Path& path);

#endif
