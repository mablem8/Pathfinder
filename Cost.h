//
//  Cost.h
//  Pathfinder
//
//  Created by Bradley Denby on 7/29/13.
//  Copyright (c) 2013 Bradley Denby. All rights reserved.
//

#ifndef Pathfinder_Cost_h
#define Pathfinder_Cost_h

#include <iomanip>
#include <sstream>

class Cost {
private:
    
    double __cost;
    std::string __units;
    
public:
    
    static const double DEFAULT_COST;
    static const std::string DEFAULT_UNITS;
    
    Cost(const double cost=DEFAULT_COST, const std::string& units=DEFAULT_UNITS);
    Cost(const Cost& cost);
    virtual ~Cost();
    
    double getCost() const;
    std::string getUnits() const;
    
    virtual const Cost* clone() const;
    virtual bool operator==(const Cost& cost) const;
    virtual const Cost* operator*(const Cost& cost) const;
    virtual std::string toString() const;
    
};

extern const Cost* const INVALID_COST;
std::ostream& operator<<(std::ostream& output, const Cost& cost);

#endif
