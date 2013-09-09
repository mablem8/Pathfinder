//
//  constrainedAdditiveCostTest.h
//  Pathfinder
//  
//
//  Created by Bradley Denby on 9/8/13.
//  Copyright (c) 2013 Bradley Denby. All rights reserved.
//

#ifndef Pathfinder_constrainedAdditiveCostTest_h
#define Pathfinder_constrainedAdditiveCostTest_h

#include "ConstrainedAdditiveCost.h"

void constrainedAdditiveCostTest() {
    
    /************ Test the ConstrainedAdditiveCost class ************/
    
    std::cout << std::endl
    << "****** Testing the ConstrainedAdditiveCost class ******" << std::endl
    << std::endl;
    
    /* Test the constructors */
    
    std::cout << "Testing the constructors:" << std::endl
              << std::endl;
    
    std::cout << "\tConstrainedAdditiveCost cacost0;" << std::endl;
    ConstrainedAdditiveCost cacost0;
    std::cout << "\tConstrainedAdditiveCost cacost1(1.00);" << std::endl;
    ConstrainedAdditiveCost cacost1(1.00);
    std::cout << "\tConstrainedAdditiveCost cacost2(2.00, \"twos\");" << std::endl;
    ConstrainedAdditiveCost cacost2(2.00, "twos");
    std::cout << "\tConstrainedAdditiveCost cacost3(3.00, \"threes\", 9.00);" << std::endl;
    ConstrainedAdditiveCost cacost3(3.00, "threes", 9.00);
    std::cout << "\tConstrainedAdditiveCost *pcacost4 = new ConstrainedAdditiveCost;" << std::endl;
    ConstrainedAdditiveCost *pcacost4 = new ConstrainedAdditiveCost;
    std::cout << "\tConstrainedAdditiveCost *pcacost5 = new ConstrainedAdditiveCost(5.00);" << std::endl;
    ConstrainedAdditiveCost *pcacost5 = new ConstrainedAdditiveCost(5.00);
    std::cout << "\tConstrainedAdditiveCost *pcacost6 = new ConstrainedAdditiveCost(6.00, \"sixes\");" << std::endl;
    ConstrainedAdditiveCost *pcacost6 = new ConstrainedAdditiveCost(6.00, "sixes");
    std::cout << "\tConstrainedAdditiveCost *pcacost7 = new ConstrainedAdditiveCost(7.00, \"sevens\", 21.00);" << std::endl;
    ConstrainedAdditiveCost *pcacost7 = new ConstrainedAdditiveCost(7.00, "sevens", 21.00);
    
    std::cout << std::endl
              << "\tConstrainedAdditiveCost copycacost0(cacost0);" << std::endl;
    ConstrainedAdditiveCost copycacost0(cacost0);
    std::cout << "\tConstrainedAdditiveCost copycacost1(cacost1);" << std::endl;
    ConstrainedAdditiveCost copycacost1(cacost1);
    std::cout << "\tConstrainedAdditiveCost copycacost2(cacost2);" << std::endl;
    ConstrainedAdditiveCost copycacost2(cacost2);
    std::cout << "\tConstrainedAdditiveCost copycacost3(cacost3);" << std::endl;
    ConstrainedAdditiveCost copycacost3(cacost3);
    std::cout << "\tConstrainedAdditiveCost copypcacost4(*pcacost4);" << std::endl;
    ConstrainedAdditiveCost copypcacost4(*pcacost4);
    std::cout << "\tConstrainedAdditiveCost copypcacost5(*pcacost5);" << std::endl;
    ConstrainedAdditiveCost copypcacost5(*pcacost5);
    std::cout << "\tConstrainedAdditiveCost copypcacost6(*pcacost6);" << std::endl;
    ConstrainedAdditiveCost copypcacost6(*pcacost6);
    std::cout << "\tConstrainedAdditiveCost copypcacost7(*pcacost7);" << std::endl;
    ConstrainedAdditiveCost copypcacost7(*pcacost7);
    
    std::cout << std::endl
              << "\tConstrainedAdditiveCost *pcopycacost0 = new ConstrainedAdditiveCost(cacost0);" << std::endl;
    ConstrainedAdditiveCost *pcopycacost0 = new ConstrainedAdditiveCost(cacost0);
    std::cout << "\tConstrainedAdditiveCost *pcopycacost1 = new ConstrainedAdditiveCost(cacost1);" << std::endl;
    ConstrainedAdditiveCost *pcopycacost1 = new ConstrainedAdditiveCost(cacost1);
    std::cout << "\tConstrainedAdditiveCost *pcopycacost2 = new ConstrainedAdditiveCost(cacost2);" << std::endl;
    ConstrainedAdditiveCost *pcopycacost2 = new ConstrainedAdditiveCost(cacost2);
    std::cout << "\tConstrainedAdditiveCost *pcopycacost3 = new ConstrainedAdditiveCost(cacost3);" << std::endl;
    ConstrainedAdditiveCost *pcopycacost3 = new ConstrainedAdditiveCost(cacost3);
    std::cout << "\tConstrainedAdditiveCost *pcopypcacost4 = new ConstrainedAdditiveCost(*pcacost4);" << std::endl;
    ConstrainedAdditiveCost *pcopypcacost4 = new ConstrainedAdditiveCost(*pcacost4);
    std::cout << "\tConstrainedAdditiveCost *pcopypcacost5 = new ConstrainedAdditiveCost(*pcacost5);" << std::endl;
    ConstrainedAdditiveCost *pcopypcacost5 = new ConstrainedAdditiveCost(*pcacost5);
    std::cout << "\tConstrainedAdditiveCost *pcopypcacost6 = new ConstrainedAdditiveCost(*pcacost6);" << std::endl;
    ConstrainedAdditiveCost *pcopypcacost6 = new ConstrainedAdditiveCost(*pcacost6);
    std::cout << "\tConstrainedAdditiveCost *pcopypcacost7 = new ConstrainedAdditiveCost(*pcacost7);" << std::endl;
    ConstrainedAdditiveCost *pcopypcacost7 = new ConstrainedAdditiveCost(*pcacost7);
    
    /* Test getCost() */
    
    std::cout << std::endl
              << "Testing getCost():" << std::endl
              << std::endl;

    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "cacost0.getCost():\t\t\t"
              << cacost0.getCost()
              << "\t\t\tCorrect output: "
              << cacost0.DEFAULT_COST
              << ((cacost0.getCost() == cacost0.DEFAULT_COST) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "cacost1.getCost():\t\t\t"
              << cacost1.getCost()
              << "\t\t\tCorrect output: "
              << 1.00
              << ((cacost1.getCost() == 1.00) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "cacost2.getCost():\t\t\t"
              << cacost2.getCost()
              << "\t\t\tCorrect output: "
              << 2.00
              << ((cacost2.getCost() == 2.00) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "cacost3.getCost():\t\t\t"
              << cacost3.getCost()
              << "\t\t\tCorrect output: "
              << 3.00
              << ((cacost3.getCost() == 3.00) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcacost4->getCost():\t\t\t"
              << pcacost4->getCost()
              << "\t\t\tCorrect output: "
              << pcacost4->DEFAULT_COST
              << ((pcacost4->getCost() == pcacost4->DEFAULT_COST) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcacost5->getCost():\t\t\t"
              << pcacost5->getCost()
              << "\t\t\tCorrect output: "
              << 5.00
              << ((pcacost5->getCost() == 5.00) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcacost6->getCost():\t\t\t"
              << pcacost6->getCost()
              << "\t\t\tCorrect output: "
              << 6.00
              << ((pcacost6->getCost() == 6.00) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcacost7->getCost():\t\t\t"
              << pcacost7->getCost()
              << "\t\t\tCorrect output: "
              << 7.00
              << ((pcacost7->getCost() == 7.00) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copycacost0.getCost():\t\t\t"
              << copycacost0.getCost()
              << "\t\t\tCorrect output: "
              << cacost0.getCost()
              << ((copycacost0.getCost() == cacost0.getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copycacost1.getCost():\t\t\t"
              << copycacost1.getCost()
              << "\t\t\tCorrect output: "
              << cacost1.getCost()
              << ((copycacost1.getCost() == cacost1.getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copycacost2.getCost():\t\t\t"
              << copycacost2.getCost()
              << "\t\t\tCorrect output: "
              << cacost2.getCost()
              << ((copycacost2.getCost() == cacost2.getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copycacost3.getCost():\t\t\t"
              << copycacost3.getCost()
              << "\t\t\tCorrect output: "
              << cacost3.getCost()
              << ((copycacost3.getCost() == cacost3.getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copypcacost4.getCost():\t\t\t"
              << copypcacost4.getCost()
              << "\t\t\tCorrect output: "
              << pcacost4->getCost()
              << ((copypcacost4.getCost() == pcacost4->getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copypcacost5.getCost():\t\t\t"
              << copypcacost5.getCost()
              << "\t\t\tCorrect output: "
              << pcacost5->getCost()
              << ((copypcacost5.getCost() == pcacost5->getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copypcacost6.getCost():\t\t\t"
              << copypcacost6.getCost()
              << "\t\t\tCorrect output: "
              << pcacost6->getCost()
              << ((copypcacost6.getCost() == pcacost6->getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copypcacost7.getCost():\t\t\t"
              << copypcacost7.getCost()
              << "\t\t\tCorrect output: "
              << pcacost7->getCost()
              << ((copypcacost7.getCost() == pcacost7->getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;

    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopycacost0->getCost():\t\t"
              << pcopycacost0->getCost()
              << "\t\t\tCorrect output: "
              << cacost0.getCost()
              << ((pcopycacost0->getCost() == cacost0.getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopycacost1->getCost():\t\t"
              << pcopycacost1->getCost()
              << "\t\t\tCorrect output: "
              << cacost1.getCost()
              << ((pcopycacost1->getCost() == cacost1.getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopycacost2->getCost():\t\t"
              << pcopycacost2->getCost()
              << "\t\t\tCorrect output: "
              << cacost2.getCost()
              << ((pcopycacost2->getCost() == cacost2.getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopycacost3->getCost():\t\t"
              << pcopycacost3->getCost()
              << "\t\t\tCorrect output: "
              << cacost3.getCost()
              << ((pcopycacost3->getCost() == cacost3.getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopypcacost4->getCost():\t\t"
              << pcopypcacost4->getCost()
              << "\t\t\tCorrect output: "
              << pcacost4->getCost()
              << ((pcopypcacost4->getCost() == pcacost4->getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopypcacost5->getCost():\t\t"
              << pcopypcacost5->getCost()
              << "\t\t\tCorrect output: "
              << pcacost5->getCost()
              << ((pcopypcacost5->getCost() == pcacost5->getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopypcacost6->getCost():\t\t"
              << pcopypcacost6->getCost()
              << "\t\t\tCorrect output: "
              << pcacost6->getCost()
              << ((pcopypcacost6->getCost() == pcacost6->getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopypcacost7->getCost():\t\t"
              << pcopypcacost7->getCost()
              << "\t\t\tCorrect output: "
              << pcacost7->getCost()
              << ((pcopypcacost7->getCost() == pcacost7->getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    
    /* Test getUnits() */

    std::cout << std::endl
              << "Testing getUnits():" << std::endl
              << std::endl;

    std::cout << "cacost0.getUnits():\t\t\t"
              << cacost0.getUnits()
              << "\t\t\tCorrect output: "
              << cacost0.DEFAULT_UNITS
              << ((cacost0.getUnits() == cacost0.DEFAULT_UNITS) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cacost1.getUnits():\t\t\t"
              << cacost1.getUnits()
              << "\t\t\tCorrect output: "
              << cacost1.DEFAULT_UNITS
              << ((cacost1.getUnits() == cacost1.DEFAULT_UNITS) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cacost2.getUnits():\t\t\t"
              << cacost2.getUnits()
              << "\t\t\tCorrect output: "
              << "twos"
              << ((cacost2.getUnits() == "twos") ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cacost3.getUnits():\t\t\t"
              << cacost3.getUnits()
              << "\t\t\tCorrect output: "
              << "threes"
              << ((cacost3.getUnits() == "threes") ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcacost4->getUnits():\t\t\t"
              << pcacost4->getUnits()
              << "\t\t\tCorrect output: "
              << pcacost4->DEFAULT_UNITS
              << ((pcacost4->getUnits() == pcacost4->DEFAULT_UNITS) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcacost5->getUnits():\t\t\t"
              << pcacost5->getUnits()
              << "\t\t\tCorrect output: "
              << pcacost5->DEFAULT_UNITS
              << ((pcacost5->getUnits() == pcacost5->DEFAULT_UNITS) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcacost6->getUnits():\t\t\t"
              << pcacost6->getUnits()
              << "\t\t\tCorrect output: "
              << "sixes"
              << ((pcacost6->getUnits() == "sixes") ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcacost7->getUnits():\t\t\t"
              << pcacost7->getUnits()
              << "\t\t\tCorrect output: "
              << "sevens"
              << ((pcacost7->getUnits() == "sevens") ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;

    std::cout << "copycacost0.getUnits():\t\t\t"
              << copycacost0.getUnits()
              << "\t\t\tCorrect output: "
              << cacost0.getUnits()
              << ((copycacost0.getUnits() == cacost0.getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copycacost1.getUnits():\t\t\t"
              << copycacost1.getUnits()
              << "\t\t\tCorrect output: "
              << cacost1.getUnits()
              << ((copycacost1.getUnits() == cacost1.getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copycacost2.getUnits():\t\t\t"
              << copycacost2.getUnits()
              << "\t\t\tCorrect output: "
              << cacost2.getUnits()
              << ((copycacost2.getUnits() == cacost2.getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copycacost3.getUnits():\t\t\t"
              << copycacost3.getUnits()
              << "\t\t\tCorrect output: "
              << cacost3.getUnits()
              << ((copycacost3.getUnits() == cacost3.getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypcacost4.getUnits():\t\t"
              << copypcacost4.getUnits()
              << "\t\t\tCorrect output: "
              << pcacost4->getUnits()
              << ((copypcacost4.getUnits() == pcacost4->getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypcacost5.getUnits():\t\t"
              << copypcacost5.getUnits()
              << "\t\t\tCorrect output: "
              << pcacost5->getUnits()
              << ((copypcacost5.getUnits() == pcacost5->getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypcacost6.getUnits():\t\t"
              << copypcacost6.getUnits()
              << "\t\t\tCorrect output: "
              << pcacost6->getUnits()
              << ((copypcacost6.getUnits() == pcacost6->getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypcacost7.getUnits():\t\t"
              << copypcacost7.getUnits()
              << "\t\t\tCorrect output: "
              << pcacost7->getUnits()
              << ((copypcacost7.getUnits() == pcacost7->getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;

    std::cout << "pcopycacost0->getUnits():\t\t"
              << pcopycacost0->getUnits()
              << "\t\t\tCorrect output: "
              << cacost0.getUnits()
              << ((pcopycacost0->getUnits() == cacost0.getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopycacost1->getUnits():\t\t"
              << pcopycacost1->getUnits()
              << "\t\t\tCorrect output: "
              << cacost1.getUnits()
              << ((pcopycacost1->getUnits() == cacost1.getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopycacost2->getUnits():\t\t"
              << pcopycacost2->getUnits()
              << "\t\t\tCorrect output: "
              << cacost2.getUnits()
              << ((pcopycacost2->getUnits() == cacost2.getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopycacost3->getUnits():\t\t"
              << pcopycacost3->getUnits()
              << "\t\t\tCorrect output: "
              << cacost3.getUnits()
              << ((pcopycacost3->getUnits() == cacost3.getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypcacost4->getUnits():\t\t"
              << pcopypcacost4->getUnits()
              << "\t\t\tCorrect output: "
              << pcacost4->getUnits()
              << ((pcopypcacost4->getUnits() == pcacost4->getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypcacost5->getUnits():\t\t"
              << pcopypcacost5->getUnits()
              << "\t\t\tCorrect output: "
              << pcacost5->getUnits()
              << ((pcopypcacost5->getUnits() == pcacost5->getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypcacost6->getUnits():\t\t"
              << pcopypcacost6->getUnits()
              << "\t\t\tCorrect output: "
              << pcacost6->getUnits()
              << ((pcopypcacost6->getUnits() == pcacost6->getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypcacost7->getUnits():\t\t"
              << pcopypcacost7->getUnits()
              << "\t\t\tCorrect output: "
              << pcacost7->getUnits()
              << ((pcopypcacost7->getUnits() == pcacost7->getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    
    /* Test getConstraint() */

    std::cout << std::endl
              << "Testing getConstraint():" << std::endl
              << std::endl;

    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "cacost0.getConstraint():\t\t"
              << cacost0.getConstraint()
              << "\t\t\tCorrect output: "
              << cacost0.DEFAULT_COST
              << ((cacost0.getConstraint() == cacost0.DEFAULT_COST) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "cacost1.getConstraint():\t\t"
              << cacost1.getConstraint()
              << "\t\t\tCorrect output: "
              << cacost1.DEFAULT_COST
              << ((cacost1.getConstraint() == cacost1.DEFAULT_COST) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "cacost2.getConstraint():\t\t"
              << cacost2.getConstraint()
              << "\t\t\tCorrect output: "
              << cacost2.DEFAULT_COST
              << ((cacost2.getConstraint() == cacost2.DEFAULT_COST) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "cacost3.getConstraint():\t\t"
              << cacost3.getConstraint()
              << "\t\t\tCorrect output: "
              << 9.00
              << ((cacost3.getConstraint() == 9.00) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcacost4->getConstraint():\t\t"
              << pcacost4->getConstraint()
              << "\t\t\tCorrect output: "
              << pcacost4->DEFAULT_COST
              << ((pcacost4->getConstraint() == pcacost4->DEFAULT_COST) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcacost5->getConstraint():\t\t"
              << pcacost5->getConstraint()
              << "\t\t\tCorrect output: "
              << pcacost5->DEFAULT_COST
              << ((pcacost5->getConstraint() == pcacost5->DEFAULT_COST) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcacost6->getConstraint():\t\t"
              << pcacost6->getConstraint()
              << "\t\t\tCorrect output: "
              << pcacost6->DEFAULT_COST
              << ((pcacost6->getConstraint() == pcacost6->DEFAULT_COST) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcacost7->getConstraint():\t\t"
              << pcacost7->getConstraint()
              << "\t\t\tCorrect output: "
              << 21.00
              << ((pcacost7->getConstraint() == 21.00) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;

    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copycacost0.getConstraint():\t\t"
              << copycacost0.getConstraint()
              << "\t\t\tCorrect output: "
              << cacost0.getConstraint()
              << ((copycacost0.getConstraint() == cacost0.getConstraint()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copycacost1.getConstraint():\t\t"
              << copycacost1.getConstraint()
              << "\t\t\tCorrect output: "
              << cacost1.getConstraint()
              << ((copycacost1.getConstraint() == cacost1.getConstraint()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copycacost2.getConstraint():\t\t"
              << copycacost2.getConstraint()
              << "\t\t\tCorrect output: "
              << cacost2.getConstraint()
              << ((copycacost2.getConstraint() == cacost2.getConstraint()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copycacost3.getConstraint():\t\t"
              << copycacost3.getConstraint()
              << "\t\t\tCorrect output: "
              << cacost3.getConstraint()
              << ((copycacost3.getConstraint() == cacost3.getConstraint()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copypcacost4.getConstraint():\t\t"
              << copypcacost4.getConstraint()
              << "\t\t\tCorrect output: "
              << pcacost4->getConstraint()
              << ((copypcacost4.getConstraint() == pcacost4->getConstraint()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copypcacost5.getConstraint():\t\t"
              << copypcacost5.getConstraint()
              << "\t\t\tCorrect output: "
              << pcacost5->getConstraint()
              << ((copypcacost5.getConstraint() == pcacost5->getConstraint()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copypcacost6.getConstraint():\t\t"
              << copypcacost6.getConstraint()
              << "\t\t\tCorrect output: "
              << pcacost6->getConstraint()
              << ((copypcacost6.getConstraint() == pcacost6->getConstraint()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copypcacost7.getConstraint():\t\t"
              << copypcacost7.getConstraint()
              << "\t\t\tCorrect output: "
              << pcacost7->getConstraint()
              << ((copypcacost7.getConstraint() == pcacost7->getConstraint()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;

    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopycacost0->getConstraint():\t\t"
              << pcopycacost0->getConstraint()
              << "\t\t\tCorrect output: "
              << cacost0.getConstraint()
              << ((pcopycacost0->getConstraint() == cacost0.getConstraint()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopycacost1->getConstraint():\t\t"
              << pcopycacost1->getConstraint()
              << "\t\t\tCorrect output: "
              << cacost1.getConstraint()
              << ((pcopycacost1->getConstraint() == cacost1.getConstraint()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopycacost2->getConstraint():\t\t"
              << pcopycacost2->getConstraint()
              << "\t\t\tCorrect output: "
              << cacost2.getConstraint()
              << ((pcopycacost2->getConstraint() == cacost2.getConstraint()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopycacost3->getConstraint():\t\t"
              << pcopycacost3->getConstraint()
              << "\t\t\tCorrect output: "
              << cacost3.getConstraint()
              << ((pcopycacost3->getConstraint() == cacost3.getConstraint()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopypcacost4->getConstraint():\t\t"
              << pcopypcacost4->getConstraint()
              << "\t\t\tCorrect output: "
              << pcacost4->getConstraint()
              << ((pcopypcacost4->getConstraint() == pcacost4->getConstraint()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopypcacost5->getConstraint():\t\t"
              << pcopypcacost5->getConstraint()
              << "\t\t\tCorrect output: "
              << pcacost5->getConstraint()
              << ((pcopypcacost5->getConstraint() == pcacost5->getConstraint()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopypcacost6->getConstraint():\t\t"
              << pcopypcacost6->getConstraint()
              << "\t\t\tCorrect output: "
              << pcacost6->getConstraint()
              << ((pcopypcacost6->getConstraint() == pcacost6->getConstraint()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopypcacost7->getConstraint():\t\t"
              << pcopypcacost7->getConstraint()
              << "\t\t\tCorrect output: "
              << pcacost7->getConstraint()
              << ((pcopypcacost7->getConstraint() == pcacost7->getConstraint()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;

    /* Test toString() */

    std::stringstream ss;
    ss << std::fixed << std::showpoint << std::setprecision(4);
    std::cout << std::endl
              << "Testing toString():" << std::endl
              << std::endl;

    ss << cacost0.getCost() << " " << cacost0.getUnits() << " of " << cacost0.getConstraint();
    std::cout << "cacost0.toString():\t\t\t"
              << cacost0.toString()
              << "\tCorrect output: "
              << ss.str()
              << ((cacost0.toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << cacost1.getCost() << " " << cacost1.getUnits() << " of " << cacost1.getConstraint();
    std::cout << "cacost1.toString():\t\t\t"
              << cacost1.toString()
              << "\tCorrect output: "
              << ss.str()
              << ((cacost1.toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << cacost2.getCost() << " " << cacost2.getUnits() << " of " << cacost2.getConstraint();
    std::cout << "cacost2.toString():\t\t\t"
              << cacost2.toString()
              << "\tCorrect output: "
              << ss.str()
              << ((cacost2.toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << cacost3.getCost() << " " << cacost3.getUnits() << " of " << cacost3.getConstraint();
    std::cout << "cacost3.toString():\t\t\t"
              << cacost3.toString()
              << "\tCorrect output: "
              << ss.str()
              << ((cacost3.toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcacost4->getCost() << " " << pcacost4->getUnits() << " of " << pcacost4->getConstraint();
    std::cout << "pcacost4->toString():\t\t\t"
              << pcacost4->toString()
              << "\tCorrect output: "
              << ss.str()
              << ((pcacost4->toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcacost5->getCost() << " " << pcacost5->getUnits() << " of " << pcacost5->getConstraint();
    std::cout << "pcacost5->toString():\t\t\t"
              << pcacost5->toString()
              << "\tCorrect output: "
              << ss.str()
              << ((pcacost5->toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcacost6->getCost() << " " << pcacost6->getUnits() << " of " << pcacost6->getConstraint();
    std::cout << "pcacost6->toString():\t\t\t"
              << pcacost6->toString()
              << "\tCorrect output: "
              << ss.str()
              << ((pcacost6->toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcacost7->getCost() << " " << pcacost7->getUnits() << " of " << pcacost7->getConstraint();
    std::cout << "pcacost7->toString():\t\t\t"
              << pcacost7->toString()
              << "Correct output: "
              << ss.str()
              << ((pcacost7->toString() == ss.str()) ? "OK" : "TEST FAILED")
              << std::endl;
    ss.str("");

    ss << copycacost0.getCost() << " " << copycacost0.getUnits() << " of " << copycacost0.getConstraint();
    std::cout << "copycacost0.toString():\t\t\t"
              << copycacost0.toString()
              << "\tCorrect output: "
              << ss.str()
              << ((copycacost0.toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << copycacost1.getCost() << " " << copycacost1.getUnits() << " of " << copycacost1.getConstraint();
    std::cout << "copycacost1.toString():\t\t\t"
              << copycacost1.toString()
              << "\tCorrect output: "
              << ss.str()
              << ((copycacost1.toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << copycacost2.getCost() << " " << copycacost2.getUnits() << " of " << copycacost2.getConstraint();
    std::cout << "copycacost2.toString():\t\t\t"
              << copycacost2.toString()
              << "\tCorrect output: "
              << ss.str()
              << ((copycacost2.toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << copycacost3.getCost() << " " << copycacost3.getUnits() << " of " << copycacost3.getConstraint();
    std::cout << "copycacost3.toString():\t\t\t"
              << copycacost3.toString()
              << "\tCorrect output: "
              << ss.str()
              << ((copycacost3.toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << copypcacost4.getCost() << " " << copypcacost4.getUnits() << " of " << copypcacost4.getConstraint();
    std::cout << "copypcacost4.toString():\t\t"
              << copypcacost4.toString()
              << "\tCorrect output: "
              << ss.str()
              << ((copypcacost4.toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << copypcacost5.getCost() << " " << copypcacost5.getUnits() << " of " << copypcacost5.getConstraint();
    std::cout << "copypcacost5.toString():\t\t"
              << copypcacost5.toString()
              << "\tCorrect output: "
              << ss.str()
              << ((copypcacost5.toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << copypcacost6.getCost() << " " << copypcacost6.getUnits() << " of " << copypcacost6.getConstraint();
    std::cout << "copypcacost6.toString():\t\t"
              << copypcacost6.toString()
              << "\tCorrect output: "
              << ss.str()
              << ((copypcacost6.toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << copypcacost7.getCost() << " " << copypcacost7.getUnits() << " of " << copypcacost7.getConstraint();
    std::cout << "copypcacost7.toString():\t\t"
              << copypcacost7.toString()
              << "Correct output: "
              << ss.str()
              << ((copypcacost7.toString() == ss.str()) ? "OK" : "TEST FAILED")
              << std::endl;
    ss.str("");

    ss << pcopycacost0->getCost() << " " << pcopycacost0->getUnits() << " of " << pcopycacost0->getConstraint();
    std::cout << "pcopycacost0->toString():\t\t"
              << pcopycacost0->toString()
              << "\tCorrect output: "
              << ss.str()
              << ((pcopycacost0->toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcopycacost1->getCost() << " " << pcopycacost1->getUnits() << " of " << pcopycacost1->getConstraint();
    std::cout << "pcopycacost1->toString():\t\t"
              << pcopycacost1->toString()
              << "\tCorrect output: "
              << ss.str()
              << ((pcopycacost1->toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcopycacost2->getCost() << " " << pcopycacost2->getUnits() << " of " << pcopycacost2->getConstraint();
    std::cout << "pcopycacost2->toString():\t\t"
              << pcopycacost2->toString()
              << "\tCorrect output: "
              << ss.str()
              << ((pcopycacost2->toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcopycacost3->getCost() << " " << pcopycacost3->getUnits() << " of " << pcopycacost3->getConstraint();
    std::cout << "pcopycacost3->toString():\t\t"
              << pcopycacost3->toString()
              << "\tCorrect output: "
              << ss.str()
              << ((pcopycacost3->toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcopypcacost4->getCost() << " " << pcopypcacost4->getUnits() << " of " << pcopypcacost4->getConstraint();
    std::cout << "pcopypcacost4->toString():\t\t"
              << pcopypcacost4->toString()
              << "\tCorrect output: "
              << ss.str()
              << ((pcopypcacost4->toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcopypcacost5->getCost() << " " << pcopypcacost5->getUnits() << " of " << pcopypcacost5->getConstraint();
    std::cout << "pcopypcacost5->toString():\t\t"
              << pcopypcacost5->toString()
              << "\tCorrect output: "
              << ss.str()
              << ((pcopypcacost5->toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcopypcacost6->getCost() << " " << pcopypcacost6->getUnits() << " of " << pcopypcacost6->getConstraint();
    std::cout << "pcopypcacost6->toString():\t\t"
              << pcopypcacost6->toString()
              << "\tCorrect output: "
              << ss.str()
              << ((pcopypcacost6->toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcopypcacost7->getCost() << " " << pcopypcacost7->getUnits() << " of " << pcopypcacost7->getConstraint();
    std::cout << "pcopypcacost7->toString():\t\t"
              << pcopypcacost7->toString()
              << "Correct output: "
              << ss.str()
              << ((pcopypcacost7->toString() == ss.str()) ? "OK" : "TEST FAILED")
              << std::endl;
    ss.str("");

    /* Test operator<< */

    std::cout << std::endl
              << "Testing operator<<:" << std::endl
              << std::endl;

    std::cout << "cout << cacost0:\t\t\t" << cacost0
              << "\t[Expected:\t\t\t" << cacost0.toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << cacost1:\t\t\t" << cacost1
              << "\t[Expected:\t\t\t" << cacost1.toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << cacost2:\t\t\t" << cacost2
              << "\t[Expected:\t\t\t" << cacost2.toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << cacost3:\t\t\t" << cacost3
              << "\t[Expected:\t\t\t" << cacost3.toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << pcacost4:\t\t\t" << *pcacost4
              << "\t[Expected:\t\t\t" << pcacost4->toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << pcacost5:\t\t\t" << *pcacost5
              << "\t[Expected:\t\t\t" << pcacost5->toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << pcacost6:\t\t\t" << *pcacost6
              << "\t[Expected:\t\t\t" << pcacost6->toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << pcacost7:\t\t\t" << *pcacost7
              << "\t[Expected:\t\t\t" << pcacost7->toString() << "]"
              << std::endl << std::endl;

    std::cout << "cout << copycacost0:\t\t\t" << copycacost0
              << "\t[Expected:\t\t\t" << copycacost0.toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << copycacost1:\t\t\t" << copycacost1
              << "\t[Expected:\t\t\t" << copycacost1.toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << copycacost2:\t\t\t" << copycacost2
              << "\t[Expected:\t\t\t" << copycacost2.toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << copycacost3:\t\t\t" << copycacost3
              << "\t[Expected:\t\t\t" << copycacost3.toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << copypcacost4:\t\t\t" << copypcacost4
              << "\t[Expected:\t\t\t" << copypcacost4.toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << copypcacost5:\t\t\t" << copypcacost5
              << "\t[Expected:\t\t\t" << copypcacost5.toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << copypcacost6:\t\t\t" << copypcacost6
              << "\t[Expected:\t\t\t" << copypcacost6.toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << copypcacost7:\t\t\t" << copypcacost7
              << "\t[Expected:\t\t\t" << copypcacost7.toString() << "]"
              << std::endl << std::endl;

    std::cout << "cout << *pcopycacost0:\t\t\t" << *pcopycacost0
              << "\t[Expected:\t\t\t" << pcopycacost0->toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << *pcopycacost1:\t\t\t" << *pcopycacost1
              << "\t[Expected:\t\t\t" << pcopycacost1->toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << *pcopycacost2:\t\t\t" << *pcopycacost2
              << "\t[Expected:\t\t\t" << pcopycacost2->toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << *pcopycacost3:\t\t\t" << *pcopycacost3
              << "\t[Expected:\t\t\t" << pcopycacost3->toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << *pcopypcacost4:\t\t\t" << *pcopypcacost4
              << "\t[Expected:\t\t\t" << pcopypcacost4->toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << *pcopypcacost5:\t\t\t" << *pcopypcacost5
              << "\t[Expected:\t\t\t" << pcopypcacost5->toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << *pcopypcacost6:\t\t\t" << *pcopypcacost6
              << "\t[Expected:\t\t\t" << pcopypcacost6->toString() << "\t]"
              << std::endl;
    std::cout << "cout << *pcopypcacost7:\t\t\t" << *pcopypcacost7
              << "\t[Expected:\t\t\t" << pcopypcacost7->toString() << "]"
              << std::endl;

    /* Test operator== */

    std::cout << std::endl
              << "Testing operator==:" << std::endl
              << std::endl;

    std::cout << "Check that a Constrained Additive Cost object equals itself:" << std::endl;
    std::cout << "cacost0 == cacost0:\t\t\t"
              << ((cacost0 == cacost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((cacost0 == cacost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cacost1 == cacost1:\t\t\t"
              << ((cacost1 == cacost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((cacost1 == cacost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cacost2 == cacost2:\t\t\t"
              << ((cacost2 == cacost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((cacost2 == cacost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cacost3 == cacost3:\t\t\t"
              << ((cacost3 == cacost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((cacost3 == cacost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcacost4 == *pcacost4:\t\t\t"
              << ((*pcacost4 == *pcacost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcacost4 == *pcacost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcacost5 == *pcacost5:\t\t\t"
              << ((*pcacost5 == *pcacost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcacost5 == *pcacost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcacost6 == *pcacost6:\t\t\t"
              << ((*pcacost6 == *pcacost6) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcacost6 == *pcacost6) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcacost7 == *pcacost7:\t\t\t"
              << ((*pcacost7 == *pcacost7) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcacost7 == *pcacost7) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copycacost0 == copycacost0:\t\t"
              << ((copycacost0 == copycacost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copycacost0 == copycacost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copycacost1 == copycacost1:\t\t"
              << ((copycacost1 == copycacost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copycacost1 == copycacost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copycacost2 == copycacost2:\t\t"
              << ((copycacost2 == copycacost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copycacost2 == copycacost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copycacost3 == copycacost3:\t\t"
              << ((copycacost3 == copycacost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copycacost3 == copycacost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypcacost4 == copypcacost4:\t\t"
              << ((copypcacost4 == copypcacost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copypcacost4 == copypcacost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypcacost5 == copypcacost5:\t\t"
              << ((copypcacost5 == copypcacost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copypcacost5 == copypcacost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypcacost6 == copypcacost6:\t\t"
              << ((copypcacost6 == copypcacost6) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copypcacost6 == copypcacost6) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypcacost7 == copypcacost7:\t\t"
              << ((copypcacost7 == copypcacost7) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copypcacost7 == copypcacost7) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopycacost0 == *pcopycacost0:\t\t"
              << ((*pcopycacost0 == *pcopycacost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopycacost0 == *pcopycacost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopycacost1 == *pcopycacost1:\t\t"
              << ((*pcopycacost1 == *pcopycacost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopycacost1 == *pcopycacost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopycacost2 == *pcopycacost2:\t\t"
              << ((*pcopycacost2 == *pcopycacost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopycacost2 == *pcopycacost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopycacost3 == *pcopycacost3:\t\t"
              << ((*pcopycacost3 == *pcopycacost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopycacost3 == *pcopycacost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopypcacost4 == *pcopypcacost4:\t"
              << ((*pcopypcacost4 == *pcopypcacost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopypcacost4 == *pcopypcacost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopypcacost5 == *pcopypcacost5:\t"
              << ((*pcopypcacost5 == *pcopypcacost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopypcacost5 == *pcopypcacost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopypcacost6 == *pcopypcacost6:\t"
              << ((*pcopypcacost6 == *pcopypcacost6) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopypcacost6 == *pcopypcacost6) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopypcacost7 == *pcopypcacost7:\t"
              << ((*pcopypcacost7 == *pcopypcacost7) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopypcacost7 == *pcopypcacost7) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl << std::endl;

    std::cout << "Check that the address of a Constrained Additive Cost object equals its own address:" << std::endl;
    std::cout << "&cacost0 == &cacost0:\t\t\t"
              << ((&cacost0 == &cacost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&cacost0 == &cacost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&cacost1 == &cacost1:\t\t\t"
              << ((&cacost1 == &cacost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&cacost1 == &cacost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&cacost2 == &cacost2:\t\t\t"
              << ((&cacost2 == &cacost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&cacost2 == &cacost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&cacost3 == &cacost3:\t\t\t"
              << ((&cacost3 == &cacost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&cacost3 == &cacost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcacost4 == pcacost4:\t\t\t"
              << ((pcacost4 == pcacost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcacost4 == pcacost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcacost5 == pcacost5:\t\t\t"
              << ((pcacost5 == pcacost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcacost5 == pcacost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcacost6 == pcacost6:\t\t\t"
              << ((pcacost6 == pcacost6) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcacost6 == pcacost6) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcacost7 == pcacost7:\t\t\t"
              << ((pcacost7 == pcacost7) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcacost7 == pcacost7) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copycacost0 == &copycacost0:\t\t"
              << ((&copycacost0 == &copycacost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copycacost0 == &copycacost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copycacost1 == &copycacost1:\t\t"
              << ((&copycacost1 == &copycacost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copycacost1 == &copycacost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copycacost2 == &copycacost2:\t\t"
              << ((&copycacost2 == &copycacost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copycacost2 == &copycacost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copycacost3 == &copycacost3:\t\t"
              << ((&copycacost3 == &copycacost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copycacost3 == &copycacost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copypcacost4 == &copypcacost4:\t\t"
              << ((&copypcacost4 == &copypcacost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copypcacost4 == &copypcacost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copypcacost5 == &copypcacost5:\t\t"
              << ((&copypcacost5 == &copypcacost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copypcacost5 == &copypcacost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copypcacost6 == &copypcacost6:\t\t"
              << ((&copypcacost6 == &copypcacost6) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copypcacost6 == &copypcacost6) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copypcacost7 == &copypcacost7:\t\t"
              << ((&copypcacost7 == &copypcacost7) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copypcacost7 == &copypcacost7) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopycacost0 == pcopycacost0:\t\t"
              << ((pcopycacost0 == pcopycacost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopycacost0 == pcopycacost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopycacost1 == pcopycacost1:\t\t"
              << ((pcopycacost1 == pcopycacost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopycacost1 == pcopycacost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopycacost2 == pcopycacost2:\t\t"
              << ((pcopycacost2 == pcopycacost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopycacost2 == pcopycacost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopycacost3 == pcopycacost3:\t\t"
              << ((pcopycacost3 == pcopycacost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopycacost3 == pcopycacost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypcacost4 == pcopypcacost4:\t\t"
              << ((pcopypcacost4 == pcopypcacost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopypcacost4 == pcopypcacost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypcacost5 == pcopypcacost5:\t\t"
              << ((pcopypcacost5 == pcopypcacost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopypcacost5 == pcopypcacost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypcacost6 == pcopypcacost6:\t\t"
              << ((pcopypcacost6 == pcopypcacost6) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopypcacost6 == pcopypcacost6) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypcacost7 == pcopypcacost7:\t\t"
              << ((pcopypcacost7 == pcopypcacost7) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopypcacost7 == pcopypcacost7) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl << std::endl;

    std::cout << "Check that a Constrained Additive Cost object equals a copy, but that" << std::endl
              << "the addresses of a Constrained Additive Cost object and a copy differ:" << std::endl;
    std::cout << "cacost0 == copycacost0:\t\t\t"
              << ((cacost0 == copycacost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((cacost0 == copycacost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&cacost0 == &copycacost0:\t\t"
              << ((&cacost0 == &copycacost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&cacost0 == &copycacost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cacost0 == *pcopycacost0:\t\t"
              << ((cacost0 == *pcopycacost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((cacost0 == *pcopycacost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&cacost0 == pcopycacost0:\t\t"
              << ((&cacost0 == pcopycacost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&cacost0 == pcopycacost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cacost1 == copycacost1:\t\t\t"
              << ((cacost1 == copycacost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((cacost1 == copycacost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&cacost1 == &copycacost1:\t\t"
              << ((&cacost1 == &copycacost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&cacost1 == &copycacost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cacost1 == *pcopycacost1:\t\t"
              << ((cacost1 == *pcopycacost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((cacost1 == *pcopycacost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&cacost1 == pcopycacost1:\t\t"
              << ((&cacost1 == pcopycacost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&cacost1 == pcopycacost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cacost2 == copycacost2:\t\t\t"
              << ((cacost2 == copycacost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((cacost2 == copycacost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&cacost2 == &copycacost2:\t\t"
              << ((&cacost2 == &copycacost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&cacost2 == &copycacost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cacost2 == *pcopycacost2:\t\t"
              << ((cacost2 == *pcopycacost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((cacost2 == *pcopycacost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&cacost2 == pcopycacost2:\t\t"
              << ((&cacost2 == pcopycacost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&cacost2 == pcopycacost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cacost3 == copycacost3:\t\t\t"
              << ((cacost3 == copycacost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((cacost3 == copycacost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&cacost3 == &copycacost3:\t\t"
              << ((&cacost3 == &copycacost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&cacost3 == &copycacost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cacost3 == *pcopycacost3:\t\t"
              << ((cacost3 == *pcopycacost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((cacost3 == *pcopycacost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&cacost3 == pcopycacost3:\t\t"
              << ((&cacost3 == pcopycacost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&cacost2 == pcopycacost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcacost4 == copypcacost4:\t\t"
              << ((*pcacost4 == copypcacost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcacost4 == copypcacost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcacost4 == &copypcacost4:\t\t"
              << ((pcacost4 == &copypcacost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pcacost4 == &copypcacost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcacost4 == *pcopypcacost4:\t\t"
              << ((*pcacost4 == *pcopypcacost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcacost4 == *pcopypcacost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcacost4 == pcopypcacost4:\t\t"
              << ((pcacost4 == pcopypcacost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pcacost4 == pcopypcacost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcacost5 == copypcacost5:\t\t"
              << ((*pcacost5 == copypcacost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcacost5 == copypcacost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcacost5 == &copypcacost5:\t\t"
              << ((pcacost5 == &copypcacost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pcacost5 == &copypcacost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcacost5 == *pcopypcacost5:\t\t"
              << ((*pcacost5 == *pcopypcacost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcacost5 == *pcopypcacost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcacost5 == pcopypcacost5:\t\t"
              << ((pcacost5 == pcopypcacost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pcacost5 == pcopypcacost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcacost6 == copypcacost6:\t\t"
              << ((*pcacost6 == copypcacost6) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcacost6 == copypcacost6) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcacost6 == &copypcacost6:\t\t"
              << ((pcacost6 == &copypcacost6) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pcacost6 == &copypcacost6) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcacost6 == *pcopypcacost6:\t\t"
              << ((*pcacost6 == *pcopypcacost6) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcacost6 == *pcopypcacost6) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcacost6 == pcopypcacost6:\t\t"
              << ((pcacost6 == pcopypcacost6) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pcacost6 == pcopypcacost6) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcacost7 == copypcacost7:\t\t"
              << ((*pcacost7 == copypcacost7) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcacost7 == copypcacost7) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcacost7 == &copypcacost7:\t\t"
              << ((pcacost7 == &copypcacost7) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pcacost7 == &copypcacost7) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcacost7 == *pcopypcacost7:\t\t"
              << ((*pcacost7 == *pcopypcacost7) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcacost7 == *pcopypcacost7) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcacost7 == pcopypcacost7:\t\t"
              << ((pcacost7 == pcopypcacost7) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pcacost7 == pcopypcacost7) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl << std::endl;

    std::cout << "Spot check that different Constrained Additive Cost objects are not equal:" << std::endl;
    std::cout << "cacost0 == cacost1:\t\t\t"
              << ((cacost0 == cacost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(cacost0 == cacost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cacost0 == cacost2:\t\t\t"
              << ((cacost0 == cacost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(cacost0 == cacost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cacost0 == cacost3:\t\t\t"
              << ((cacost0 == cacost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(cacost0 == cacost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cacost1 == cacost2:\t\t\t"
              << ((cacost1 == cacost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(cacost1 == cacost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cacost1 == cacost3:\t\t\t"
              << ((cacost1 == cacost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(cacost1 == cacost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cacost2 == cacost3:\t\t\t"
              << ((cacost2 == cacost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(cacost2 == cacost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;

    /* Test operator* */

    ConstrainedAdditiveCost *constrainedSumCost;
    std::cout << std::endl
              << "Testing operator*:" << std::endl
              << std::endl;

    std::cout << "cacost0*cacost0:\t\t\t"
              << (cacost0*cacost0)->toString()
              << "\t\tCorrect output: "
              << INVALID_COST->toString()
              << ((cacost0*cacost0 == INVALID_COST) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "cacost0*copycacost0:\t\t\t"
              << (cacost0*copycacost0)->toString()
              << "\t\tCorrect output: "
              << (cacost0*cacost0)->toString()
              << ((cacost0*copycacost0 == cacost0*cacost0) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "cacost0*(*pcopycacost0):\t\t"
              << (cacost0*(*pcopycacost0))->toString()
              << "\t\tCorrect output: "
              << (cacost0*cacost0)->toString()
              << ((cacost0*(*pcopycacost0) == cacost0*cacost0) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "cacost1*cacost1:\t\t\t"
              << (cacost1*cacost1)->toString()
              << "\t\tCorrect output: "
              << INVALID_COST->toString()
              << ((cacost1*cacost1 == INVALID_COST) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "cacost1*copycacost1:\t\t\t"
              << (cacost1*copycacost1)->toString()
              << "\t\tCorrect output: "
              << (cacost1*cacost1)->toString()
              << ((cacost1*copycacost1 == cacost1*cacost1) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "cacost1*(*pcopycacost1):\t\t"
              << (cacost1*(*pcopycacost1))->toString()
              << "\t\tCorrect output: "
              << (cacost1*cacost1)->toString()
              << ((cacost1*(*pcopycacost1) == cacost1*cacost1) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "cacost2*cacost2:\t\t\t"
              << (cacost2*cacost2)->toString()
              << "\t\tCorrect output: "
              << INVALID_COST->toString()
              << ((cacost2*cacost2 == INVALID_COST) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "cacost2*copycacost2:\t\t\t"
              << (cacost2*copycacost2)->toString()
              << "\t\tCorrect output: "
              << (cacost2*cacost2)->toString()
              << ((cacost2*copycacost2 == cacost2*cacost2) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "cacost2*(*pcopycacost2):\t\t"
              << (cacost2*(*pcopycacost2))->toString()
              << "\t\tCorrect output: "
              << (cacost2*cacost2)->toString()
              << ((cacost2*(*pcopycacost2) == cacost2*cacost2) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    constrainedSumCost = new ConstrainedAdditiveCost(cacost3.getCost()+cacost3.getCost(),cacost3.getUnits(),cacost3.getConstraint());
    std::cout << "cacost3*cacost3:\t\t\t"
              << (cacost3*cacost3)->toString()
              << "\tCorrect output: "
              << constrainedSumCost->toString()
              << ((*(cacost3*cacost3) == *constrainedSumCost) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    delete constrainedSumCost;
    std::cout << "cacost3*copycacost3:\t\t\t"
              << (cacost3*copycacost3)->toString()
              << "\tCorrect output: "
              << (cacost3*cacost3)->toString()
              << ((*(cacost3*copycacost3) == *(cacost3*cacost3)) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    std::cout << "cacost3*(*pcopycacost3):\t\t"
              << (cacost3*(*pcopycacost3))->toString()
              << "\tCorrect output: "
              << (cacost3*cacost3)->toString()
              << ((*(cacost3*(*pcopycacost3)) == *(cacost3*cacost3)) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    std::cout << "(*pcacost4)*(*pcacost4):\t\t"
              << ((*pcacost4)*(*pcacost4))->toString()
              << "\t\tCorrect output: "
              << INVALID_COST->toString()
              << (((*pcacost4)*(*pcacost4) == INVALID_COST) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pcacost4)*copypcacost4:\t\t"
              << ((*pcacost4)*copypcacost4)->toString()
              << "\t\tCorrect output: "
              << ((*pcacost4)*(*pcacost4))->toString()
              << (((*pcacost4)*copypcacost4 == (*pcacost4)*(*pcacost4)) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pcacost4)*(*pcopypcacost4):\t\t"
              << ((*pcacost4)*(*pcopypcacost4))->toString()
              << "\t\tCorrect output: "
              << ((*pcacost4)*(*pcacost4))->toString()
              << (((*pcacost4)*(*pcopypcacost4) == (*pcacost4)*(*pcacost4)) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pcacost5)*(*pcacost5):\t\t"
              << ((*pcacost5)*(*pcacost5))->toString()
              << "\t\tCorrect output: "
              << INVALID_COST->toString()
              << (((*pcacost5)*(*pcacost5) == INVALID_COST) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pcacost5)*copypcacost5:\t\t"
              << ((*pcacost5)*copypcacost5)->toString()
              << "\t\tCorrect output: "
              << ((*pcacost5)*(*pcacost5))->toString()
              << (((*pcacost5)*copypcacost5 == (*pcacost5)*(*pcacost5)) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pcacost5)*(*pcopypcacost5):\t\t"
              << ((*pcacost5)*(*pcopypcacost5))->toString()
              << "\t\tCorrect output: "
              << ((*pcacost5)*(*pcacost5))->toString()
              << (((*pcacost5)*(*pcopypcacost5) == (*pcacost5)*(*pcacost5)) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pcacost6)*(*pcacost6):\t\t"
              << ((*pcacost6)*(*pcacost6))->toString()
              << "\t\tCorrect output: "
              << INVALID_COST->toString()
              << (((*pcacost6)*(*pcacost6) == INVALID_COST) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pcacost6)*copypcacost6:\t\t"
              << ((*pcacost6)*copypcacost6)->toString()
              << "\t\tCorrect output: "
              << ((*pcacost6)*(*pcacost6))->toString()
              << (((*pcacost6)*copypcacost6 == (*pcacost6)*(*pcacost6)) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pcacost6)*(*pcopypcacost6):\t\t"
              << ((*pcacost6)*(*pcopypcacost6))->toString()
              << "\t\tCorrect output: "
              << ((*pcacost6)*(*pcacost6))->toString()
              << (((*pcacost6)*(*pcopypcacost6) == (*pcacost6)*(*pcacost6)) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    constrainedSumCost = new ConstrainedAdditiveCost(pcacost7->getCost()+pcacost7->getCost(),pcacost7->getUnits(),pcacost7->getConstraint());
    std::cout << "(*pcacost7)*(*pcacost7):\t\t"
              << ((*pcacost7)*(*pcacost7))->toString()
              << "Correct output: "
              << constrainedSumCost->toString()
              << ((*((*pcacost7)*(*pcacost7)) == *constrainedSumCost) ? "OK" : "TEST FAILED")
              << std::endl;
    delete constrainedSumCost;
    std::cout << "(*pcacost7)*copypcacost7:\t\t"
              << ((*pcacost7)*copypcacost7)->toString()
              << "Correct output: "
              << ((*pcacost7)*(*pcacost7))->toString()
              << ((*((*pcacost7)*copypcacost7) == *((*pcacost7)*(*pcacost7))) ? "OK" : "TEST FAILED")
              << std::endl;
    std::cout << "(*pcacost7)*(*pcopypcacost7):\t\t"
              << ((*pcacost7)*(*pcopypcacost7))->toString()
              << "Correct output: "
              << ((*pcacost7)*(*pcacost7))->toString()
              << ((*((*pcacost7)*(*pcopypcacost7)) == *((*pcacost7)*(*pcacost7))) ? "OK" : "TEST FAILED")
              << std::endl << std::endl;

    ConstrainedAdditiveCost cacost3b(7.00, "threes", 9.00);
    std::cout << "ConstrainedAdditiveCost cacost3b(7.00, \"threes\", 9.00);" << std::endl
              << "cacost3*cacost3b:\t\t\t"
              << (cacost3*cacost3b)->toString()
              << "\t\tCorrect output: "
              << INVALID_COST->toString()
              << ((cacost3*cacost3b == INVALID_COST) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;

    /* Test destructor */
    
    std::cout << std::endl
              << "Testing the destructor:" << std::endl
              << std::endl;

    std::cout << "\tdelete pcacost4;" << std::endl;
    delete pcacost4;
    std::cout << "\tdelete pcacost5;" << std::endl;
    delete pcacost5;
    std::cout << "\tdelete pcacost6;" << std::endl;
    delete pcacost6;
    std::cout << "\tdelete pcacost7;" << std::endl;
    delete pcacost7;
    std::cout << "\tdelete pcopycacost0;" << std::endl;
    delete pcopycacost0;
    std::cout << "\tdelete pcopycacost1;" << std::endl;
    delete pcopycacost1;
    std::cout << "\tdelete pcopycacost2;" << std::endl;
    delete pcopycacost2;
    std::cout << "\tdelete pcopycacost3;" << std::endl;
    delete pcopycacost3;
    std::cout << "\tdelete pcopypcacost4;" << std::endl;
    delete pcopypcacost4;
    std::cout << "\tdelete pcopypcacost5;" << std::endl;
    delete pcopypcacost5;
    std::cout << "\tdelete pcopypcacost6;" << std::endl;
    delete pcopypcacost6;
    std::cout << "\tdelete pcopypcacost7;" << std::endl;
    delete pcopypcacost7;
    
    std::cout << std::endl;
    
}

#endif
