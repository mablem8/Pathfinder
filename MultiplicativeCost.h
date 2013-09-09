//
//  MultiplicativeCost.h
//  Pathfinder
//
//  Created by Bradley Denby on 9/8/13.
//  Copyright (c) 2013 Bradley Denby. All rights reserved.
//

#ifndef Pathfinder_MultiplicativeCost_h
#define Pathfinder_MultiplicativeCost_h

#include "Cost.h"

class MultiplicativeCost : public Cost {
public:
    
    MultiplicativeCost(const double cost=DEFAULT_COST, const std::string& units=DEFAULT_UNITS);
    MultiplicativeCost(const MultiplicativeCost& cost);
    virtual ~MultiplicativeCost();
    
    virtual bool operator==(const MultiplicativeCost& cost) const;
    virtual const Cost* operator*(const MultiplicativeCost& cost) const;
    virtual std::string toString() const;
    
};

#endif
