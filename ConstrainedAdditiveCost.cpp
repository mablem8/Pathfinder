//
//  ConstrainedAdditiveCost.cpp
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

#include "ConstrainedAdditiveCost.h"

/*
 * The ConstrainedAdditiveCost constructor passes the cost and units
 * arguments to the Cost(const double cost, const std::string& units)
 * parent constructor and sets the __constraint field to constraint. It
 * uses fast instiation for only one trip to memory.
 */
ConstrainedAdditiveCost::ConstrainedAdditiveCost(const double cost, const std::string& units, const double constraint) : Cost(cost, units), __constraint(constraint) {}

ConstrainedAdditiveCost::ConstrainedAdditiveCost(const ConstrainedAdditiveCost& cost) : Cost(cost.getCost(), cost.getUnits()), __constraint(cost.getConstraint()) {}

/*
 * There is nothing to delete in the ConstrainedAdditiveCost class.
 */
ConstrainedAdditiveCost::~ConstrainedAdditiveCost() {}

/*
 * Returns the double __constraint of the ConstrainedAdditiveCost
 * object. Cannot modify the ConstrainedAdditiveCost object.
 */
double ConstrainedAdditiveCost::getConstraint() const {
    return __constraint;
}

const Cost* ConstrainedAdditiveCost::clone() const {
    if (this != INVALID_COST) {
        return new ConstrainedAdditiveCost(*this);
    }
    else {
        return this;
    }
}

bool ConstrainedAdditiveCost::operator==(const ConstrainedAdditiveCost& cost) const {
    return ((this->getCost() == cost.getCost())
            && (this->getUnits() == cost.getUnits())
            && (this->getConstraint() == cost.getConstraint()));
}

/*
 * The overloaded operator * returns a new ConstrainedAdditiveCost
 * object constructed according to the following rules:
 *     IF this __cost + argument __cost < __constraint
 *         new __cost = this __cost + argument __cost
 *     OTHERWISE
 *         return INVALID_COST
 * This overloaded operator * assumes two things:
 *     this __units == argument __units
 *     this __constraint == argument __constraint
 * No safety checks are carried out for performance reasons. As
 * dictated by the trailing const, the overloaded operator * cannot
 * modifiy the ConstrainedAdditiveCost object.
 */
const Cost* ConstrainedAdditiveCost::operator*(const Cost& cost) const {
    const Cost* result = INVALID_COST;
    double totalCost = this->getCost() + cost.getCost();
    /* Below: not a conditional, just a boolean; takes advantage of
     * short-circuiting in boolean expressions.
     * Equivalent if/then expression:
     * if(this != INVALID_COST && &cost != INVALID_COST && totalCost < __constraint) {
     *     product = new ConstrainedAdditiveCost(totalCost, this->getUnits(), __constraint);
     * }
     */
    (void)((this != INVALID_COST && &cost != INVALID_COST && totalCost < __constraint)
           && (result = new ConstrainedAdditiveCost(totalCost, this->getUnits(), __constraint)));
    return result;
}

/*
 * Returns a formatted string that represents the
 * ConstrainedAdditiveCost object calling toString. Cannot modify the
 * ConstrainedAdditiveCost object.
 */
std::string ConstrainedAdditiveCost::toString() const {
    std::stringstream ss;
    ss << std::fixed << std::showpoint << std::setprecision(4) << this->getCost() << " " << this->getUnits() << " of " << __constraint;
    return ss.str();
}