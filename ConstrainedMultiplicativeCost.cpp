//
//  ConstrainedMultiplicativeCost.cpp
//  Pathfinder
//
//  Created by Bradley Denby on 9/8/13.
//  Copyright (c) 2013 Bradley Denby. All rights reserved.
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