//
//  AdditiveCost.cpp
//  Pathfinder
//
//  Created by Bradley Denby on 8/1/13.
//  Copyright (c) 2013 Bradley Denby. All rights reserved.
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
const Cost* AdditiveCost::operator*(const AdditiveCost& cost) const {
    return new AdditiveCost(this->getCost() + cost.getCost(), this->getUnits());
}

/*
 * toString()
 */
std::string AdditiveCost::toString() const {
    std::stringstream ss;
    ss << std::fixed << std::showpoint << std::setprecision(4) << this->getCost() << " " << this->getUnits();
    return ss.str();
}