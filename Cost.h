//
//  Cost.h
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
