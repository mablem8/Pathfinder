//
//  AdditiveCost.cpp
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

#include "AdditiveCost.h"

/*
 * The AdditveCost constructor passes the cost and units arguments to
 * the Cost(const double cost, const std::string& units) parent
 * constructor. It uses fast instiation for only one trip to memory.
 */
AdditiveCost::AdditiveCost(const double cost, const std::string& units) : Cost(cost, units) {}

/*
 * Copy constructor
 */
AdditiveCost::AdditiveCost(const AdditiveCost& cost) : Cost(cost.getCost(), cost.getUnits()) {}

/*
 * There is nothing to delete in the AddiveCost class.
 */
AdditiveCost::~AdditiveCost() {}

const Cost* AdditiveCost::clone() const {
    if (this != INVALID_COST) {
        return new AdditiveCost(*this);
    }
    else {
        return this;
    }
}

/*
 * operator==
 */
bool AdditiveCost::operator==(const AdditiveCost& cost) const {
    return ((this->getCost() == cost.getCost())
            && (this->getUnits() == cost.getUnits()));
}

/*
 * The overloaded operator * returns a new AdditiveCost object whose
 * __cost field is the sum of the __cost field of the AdditiveCost
 * object being operated on and the __cost field of the AdditiveCost
 * object passed as the argument. Note that this overloaded operator *
 * assumes that the object passed as the argument is an AdditiveCost
 * object with a __units field that matches the AdditiveCost object
 * being operated on. No safety checks are carried out for performance
 * reasons. As dictated by the trailing const, the overloaded
 * operator * cannot modifiy the AdditiveCost object.
 */
const Cost* AdditiveCost::operator*(const Cost& cost) const {
    return new AdditiveCost(this->getCost() + cost.getCost(), this->getUnits());
} // problem: opping with INVALID_COST

/*
 * toString()
 */
std::string AdditiveCost::toString() const {
    std::stringstream ss;
    ss << std::fixed << std::showpoint << std::setprecision(4) << this->getCost() << " " << this->getUnits();
    return ss.str();
}