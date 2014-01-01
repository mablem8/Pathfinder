//
//  MultiplicativeCost.h
//
//  Pathfinder, an optimal path finding program for graphs with
//  multi-weighted edges under specified constraints.
//
//  Copyright (c) 2013 Bradley Denby.
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see {http://www.gnu.org/licenses/}.
//

#ifndef Pathfinder_MultiplicativeCost_h
#define Pathfinder_MultiplicativeCost_h

#include "Cost.h"

class MultiplicativeCost : public Cost {
public:
    
    MultiplicativeCost(const double cost=DEFAULT_COST, const std::string& units=DEFAULT_UNITS);
    MultiplicativeCost(const MultiplicativeCost& cost);
    virtual ~MultiplicativeCost();
    
    virtual const Cost* clone() const;
    virtual bool operator==(const MultiplicativeCost& cost) const;
    virtual const Cost* operator*(const Cost& cost) const;
    virtual std::string toString() const;
    
};

#endif
