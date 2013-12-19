//
//  ConstrainedProbabilityCost.cpp
//  Pathfinder
//
//  Created by Bradley Denby on 12/19/13.
//  Copyright (c) 2013 Bradley Denby. All rights reserved.
//

#include "ConstrainedProbabilityCost.h"

ConstrainedProbabilityCost::ConstrainedProbabilityCost(const double cost, const std::string& units, const double constraint) : Cost(cost, units), __constraint(constraint) {}

ConstrainedProbabilityCost::ConstrainedProbabilityCost(const ConstrainedProbabilityCost& cost) : Cost(cost.getCost(), cost.getUnits()), __constraint(cost.getConstraint()) {}

ConstrainedProbabilityCost::~ConstrainedProbabilityCost() {}

double ConstrainedProbabilityCost::getConstraint() const {
    return __constraint;
}

const Cost* ConstrainedProbabilityCost::clone() const {
    return new ConstrainedProbabilityCost(*this);
}

bool ConstrainedProbabilityCost::operator==(const ConstrainedProbabilityCost& cost) const {
    return ((this->getCost() == cost.getCost())
            && (this->getUnits() == cost.getUnits())
            && (this->getConstraint() == cost.getConstraint()));
}

const Cost* ConstrainedProbabilityCost::operator*(const Cost& cost) const {
    const Cost* result = INVALID_COST;
    double totalCost = this->getCost() * cost.getCost();
    /* Below: not a conditional, just a boolean; takes advantage of
     * short-circuiting in boolean expressions.
     * Equivalent if/then expression:
     * if(this != INVALID_COST && &cost != INVALID_COST && totalCost < __constraint) {
     *     product = new ConstrainedMultiplicativeCost(totalCost, this->getUnits(), __constraint);
     * }
     */
    (void)((this != INVALID_COST && &cost != INVALID_COST && totalCost > __constraint)
           && (result = new ConstrainedProbabilityCost(totalCost, this->getUnits(), __constraint)));
    return result;
}

std::string ConstrainedProbabilityCost::toString() const {
    std::stringstream ss;
    ss << std::fixed << std::showpoint << std::setprecision(4) << this->getCost() << " " << this->getUnits() << " of " << __constraint;
    return ss.str();
}