//
//  AdditiveCost.h
//  Pathfinder
//
//  Created by Bradley Denby on 8/1/13.
//  Copyright (c) 2013 Bradley Denby. All rights reserved.
//

#ifndef Pathfinder_AdditiveCost_h
#define Pathfinder_AdditiveCost_h

#include "Cost.h"

class AdditiveCost : public Cost {
public:
    
    AdditiveCost(const double cost=DEFAULT_COST, const std::string& units=DEFAULT_UNITS);
    AdditiveCost(const AdditiveCost& cost);
    virtual ~AdditiveCost();
    
    virtual const Cost* clone() const;
    virtual bool operator==(const AdditiveCost& cost) const;
    virtual const Cost* operator*(const Cost& cost) const;
    virtual std::string toString() const;
    
};

#endif
