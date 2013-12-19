//
//  ConstrainedAdditiveCost.h
//  Pathfinder
//
//  Created by Bradley Denby on 8/1/13.
//  Copyright (c) 2013 Bradley Denby. All rights reserved.
//

#ifndef Pathfinder_ConstrainedAdditiveCost_h
#define Pathfinder_ConstrainedAdditiveCost_h

#include "Cost.h"

class ConstrainedAdditiveCost : public Cost {
private:
    
    double __constraint;
    
public:
    
    ConstrainedAdditiveCost(const double cost=DEFAULT_COST, const std::string& units=DEFAULT_UNITS, const double constraint=DEFAULT_COST);
    ConstrainedAdditiveCost(const ConstrainedAdditiveCost& cost);
    virtual ~ConstrainedAdditiveCost();
    
    double getConstraint() const;
    
    virtual const Cost* clone() const;
    virtual bool operator==(const ConstrainedAdditiveCost& cost) const;
    virtual const Cost* operator*(const Cost& cost) const;
    virtual std::string toString() const;
    
};

#endif
