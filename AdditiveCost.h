//
//  AdditiveCost.h
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
