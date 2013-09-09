//
//  MultiplicativeCost.cpp
//  Pathfinder
//
//  Created by Bradley Denby on 9/8/13.
//  Copyright (c) 2013 Bradley Denby. All rights reserved.
//

#include "MultiplicativeCost.h"

MultiplicativeCost::MultiplicativeCost(const double cost, const std::string& units) : Cost(cost, units) {}

MultiplicativeCost::MultiplicativeCost(const MultiplicativeCost& cost) : Cost(cost.getCost(), cost.getUnits()) {}

MultiplicativeCost::~MultiplicativeCost() {}

bool MultiplicativeCost::operator==(const MultiplicativeCost& cost) const {
    return ((this->getCost() == cost.getCost())
            && (this->getUnits() == cost.getUnits()));
}

const Cost* MultiplicativeCost::operator*(const MultiplicativeCost& cost) const {
    return new MultiplicativeCost(this->getCost() * cost.getCost(), this->getUnits());
}

std::string MultiplicativeCost::toString() const {
    std::stringstream ss;
    ss << std::fixed << std::showpoint << std::setprecision(4) << this->getCost() << " " << this->getUnits();
    return ss.str();
}