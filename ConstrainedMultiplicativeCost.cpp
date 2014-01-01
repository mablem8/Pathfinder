//
//  ConstrainedMultiplicativeCost.cpp
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

#include "ConstrainedMultiplicativeCost.h"

ConstrainedMultiplicativeCost::ConstrainedMultiplicativeCost(const double cost, const std::string& units, const double constraint) : Cost(cost, units), __constraint(constraint) {}

ConstrainedMultiplicativeCost::ConstrainedMultiplicativeCost(const ConstrainedMultiplicativeCost& cost) : Cost(cost.getCost(), cost.getUnits()), __constraint(cost.getConstraint()) {}

ConstrainedMultiplicativeCost::~ConstrainedMultiplicativeCost() {}

double ConstrainedMultiplicativeCost::getConstraint() const {
    return __constraint;
}

const Cost* ConstrainedMultiplicativeCost::clone() const {
    if (this != INVALID_COST) {
        return new ConstrainedMultiplicativeCost(*this);
    }
    else {
        return this;
    }
}

bool ConstrainedMultiplicativeCost::operator==(const ConstrainedMultiplicativeCost& cost) const {
    return ((this->getCost() == cost.getCost())
            && (this->getUnits() == cost.getUnits())
            && (this->getConstraint() == cost.getConstraint()));
}

const Cost* ConstrainedMultiplicativeCost::operator*(const Cost& cost) const {
    const Cost* result = INVALID_COST;
    double totalCost = this->getCost() * cost.getCost();
    /* Below: not a conditional, just a boolean; takes advantage of
     * short-circuiting in boolean expressions.
     * Equivalent if/then expression:
     * if(this != INVALID_COST && &cost != INVALID_COST && totalCost < __constraint) {
     *     product = new ConstrainedMultiplicativeCost(totalCost, this->getUnits(), __constraint);
     * }
     */
    (void)((this != INVALID_COST && &cost != INVALID_COST && totalCost < __constraint)
           && (result = new ConstrainedMultiplicativeCost(totalCost, this->getUnits(), __constraint)));
    return result;
}

std::string ConstrainedMultiplicativeCost::toString() const {
    std::stringstream ss;
    ss << std::fixed << std::showpoint << std::setprecision(4) << this->getCost() << " " << this->getUnits() << " of " << __constraint;
    return ss.str();
}