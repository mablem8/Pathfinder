//
//  Cost.cpp
//  Pathfinder
//
//  Created by Bradley Denby on 7/29/13.
//  Copyright (c) 2013 Bradley Denby. All rights reserved.
//

#include "Cost.h"

/*
 * DEFAULT_COST = 0.0
 */
const double Cost::DEFAULT_COST = 0.0;
/*
 * DEFAULT_UNITS = "none"
 */
const std::string Cost::DEFAULT_UNITS = "none";
/*
 * A pointer to the same Cost object constructed from the default
 * constructor is available to all classes that include Cost.h. This
 * object is known as the INVALID_COST
 */
const Cost* const INVALID_COST = new Cost();

/*
 * The Cost constructor sets the __cost field to cost and the __units
 * field to units. It uses fast instiation for only one trip to memory.
 */
Cost::Cost(const double cost, const std::string& units) : __cost(cost), __units(units) {}

/*
 * The Cost copy constructor sets the __cost field and the __units field
 * to the values of the passed Cost object. It uses fast instiation.
 */
Cost::Cost(const Cost::Cost& cost) : __cost(cost.getCost()), __units(cost.getUnits()) {}

/*
 * There is nothing to delete in the Cost class. The only time new is
 * called is to instantiate the static INVALID_COST, and INVALID_COST
 * should not be deleted when a Cost object is deleted.
 */
Cost::~Cost() {}

/*
 * Returns the double __cost of the Cost object. Cannot modify the Cost
 * object.
 */
double Cost::getCost() const {
    return __cost;
}

/*
 * Return the string __units of the Cost object. Cannot modify the Cost
 * object.
 */
std::string Cost::getUnits() const {
    return __units;
}

const Cost* Cost::clone() const {
    if (this != INVALID_COST) {
        return new Cost(*this);
    }
    else {
        return this;
    }
}

bool Cost::operator==(const Cost& cost) const {
    return ((this->getCost() == cost.getCost())
            && (this->getUnits() == cost.getUnits()));
}

/*
 * The Cost class is not virtual and non-trivial Cost object may be
 * constructed. However, the overloaded operator * automatically
 * returns INVALID_COST regardless of the Cost objects being operated
 * on. Cannot modifiy the Cost object.
 */
const Cost* Cost::operator*(const Cost& cost) const {
    return INVALID_COST;
}

/*
 * Returns a formatted string that represents the Cost object calling
 * toString. Cannot modify the Cost object.
 */
std::string Cost::toString() const {
    std::stringstream ss;
    ss << std::fixed << std::showpoint << std::setprecision(4) << this->getCost() << " " << this->getUnits();
    return ss.str();
}

/*
 * The operator << for sending output to the cout object exists outside
 * the Cost class. Allows the use of just the operator << when
 * outputting a text representation of a Cost object.
 */
std::ostream& operator<<(std::ostream& output, const Cost& cost) {
    output << cost.toString() << std::endl;
    return output;
}