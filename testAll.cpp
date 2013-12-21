//
//  testAll.cpp
//  Pathfinder
//
//  Created by Bradley Denby on 7/23/13.
//  Copyright (c) 2013 Bradley Denby. All rights reserved.
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

