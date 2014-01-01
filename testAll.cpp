//
//  testAll.cpp
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

#include <iostream>

#include "costTest.h"
#include "additiveCostTest.h"
#include "constrainedAdditiveCostTest.h"
#include "multiplicativeCostTest.h"
#include "constrainedMultiplicativeCostTest.h"
#include "ConstrainedProbabilityCost.h"

#include "pathTest.h"
#include "pathWithoutCostsTest.h"
#include "pathWithCostsTest.h"

#include "pathMatrixCellTest.h"
#include "pathMatrixTest.h"
#include "pathRowVectorTest.h"

int main(int argc, const char * argv[])
{
    costTest();
    additiveCostTest();
    constrainedAdditiveCostTest();
    multiplicativeCostTest();
    constrainedMultiplicativeCostTest();
    
    pathTest();
    pathWithoutCostsTest();
    pathWithCostsTest();
    
    pathMatrixCellTest();
    pathMatrixTest();
    pathRowVectorTest();
        
    return 0;
}

