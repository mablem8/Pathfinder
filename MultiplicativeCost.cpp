//
//  MultiplicativeCost.cpp
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

#include "MultiplicativeCost.h"

MultiplicativeCost::MultiplicativeCost(const double cost, const std::string& units) : Cost(cost, units) {}

MultiplicativeCost::MultiplicativeCost(const MultiplicativeCost& cost) : Cost(cost.getCost(), cost.getUnits()) {}

MultiplicativeCost::~MultiplicativeCost() {}

const Cost* MultiplicativeCost::clone() const {
    if (this != INVALID_COST) {
        return new MultiplicativeCost(*this);
    }
    else {
        return this;
    }
}

bool MultiplicativeCost::operator==(const MultiplicativeCost& cost) const {
    return ((this->getCost() == cost.getCost())
            && (this->getUnits() == cost.getUnits()));
}

const Cost* MultiplicativeCost::operator*(const Cost& cost) const {
    return new MultiplicativeCost(this->getCost() * cost.getCost(), this->getUnits());
} // problem opping with INVALID_COST

std::string MultiplicativeCost::toString() const {
    std::stringstream ss;
    ss << std::fixed << std::showpoint << std::setprecision(4) << this->getCost() << " " << this->getUnits();
    return ss.str();
}