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

int main(int argc, const char * argv[])
{
    costTest();
    additiveCostTest();
    constrainedAdditiveCostTest();
    multiplicativeCostTest();
    constrainedMultiplicativeCostTest();
        
    return 0;
}

