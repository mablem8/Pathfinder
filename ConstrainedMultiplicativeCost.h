//
//  ConstrainedMultiplicativeCost.h
//  Pathfinder
//
//  Created by Bradley Denby on 9/8/13.
//  Copyright (c) 2013 Bradley Denby. All rights reserved.
//

#ifndef Pathfinder_ConstrainedMultiplicativeCost_h
#define Pathfinder_ConstrainedMultiplicativeCost_h

#include "Cost.h"

class ConstrainedMultiplicativeCost : public Cost {
private:
    
    double __constraint;
    
public:
    
    ConstrainedMultiplicativeCost(const double cost=DEFAULT_COST, const std::string& units=DEFAULT_UNITS, const double constraint=DEFAULT_COST);
    ConstrainedMultiplicativeCost(const ConstrainedMultiplicativeCost& cost);
    virtual ~ConstrainedMultiplicativeCost();
    
    double getConstraint() const;
    
    virtual const Cost* clone() const;
    virtual bool operator==(const ConstrainedMultiplicativeCost& cost) const;
    virtual const Cost* operator*(const Cost& cost) const;
    virtual std::string toString() const;
    
};

#endif
