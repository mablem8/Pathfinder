//
//  ConstrainedProbabilityCost.h
//  Pathfinder
//
//  Created by Bradley Denby on 12/19/13.
//  Copyright (c) 2013 Bradley Denby. All rights reserved.
//

#ifndef Pathfinder_ConstrainedProbabilityCost_h
#define Pathfinder_ConstrainedProbabilityCost_h

#include "Cost.h"

class ConstrainedProbabilityCost : public Cost {
private:
    
    double __constraint;
    
public:
    
    ConstrainedProbabilityCost(const double cost=DEFAULT_COST, const std::string& units=DEFAULT_UNITS, const double constraint=DEFAULT_COST);
    ConstrainedProbabilityCost(const ConstrainedProbabilityCost& cost);
    virtual ~ConstrainedProbabilityCost();
    
    double getConstraint() const;
    
    virtual const Cost* clone() const;
    virtual bool operator==(const ConstrainedProbabilityCost& cost) const;
    virtual const Cost* operator*(const Cost& cost) const;
    virtual std::string toString() const;
    
};

#endif
