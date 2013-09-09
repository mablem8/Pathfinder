//
//  constrainedMultiplicativeCostTest.h
//  Pathfinder
//
//  Created by Bradley Denby on 9/8/13.
//  Copyright (c) 2013 Bradley Denby. All rights reserved.
//

#ifndef Pathfinder_constrainedMultiplicativeCostTest_h
#define Pathfinder_constrainedMultiplicativeCostTest_h

#include "ConstrainedMultiplicativeCost.h"

void constrainedMultiplicativeCostTest() {

    /************ Test the ConstrainedMultiplicativeCost class ************/

    std::cout << std::endl
    << "****** Testing the ConstrainedMultiplicativeCost class ******" << std::endl
    << std::endl;

    /* Test the constructors */

    std::cout << "Testing the constructors:" << std::endl
              << std::endl;

    std::cout << "\tConstrainedMultiplicativeCost cmcost0;" << std::endl;
    ConstrainedMultiplicativeCost cmcost0;
    std::cout << "\tConstrainedMultiplicativeCost cmcost1(1.00);" << std::endl;
    ConstrainedMultiplicativeCost cmcost1(1.00);
    std::cout << "\tConstrainedMultiplicativeCost cmcost2(2.00, \"twos\");" << std::endl;
    ConstrainedMultiplicativeCost cmcost2(2.00, "twos");
    std::cout << "\tConstrainedMultiplicativeCost cmcost3(3.00, \"threes\", 9.00);" << std::endl;
    ConstrainedMultiplicativeCost cmcost3(3.00, "threes", 27.00);
    std::cout << "\tConstrainedMultiplicativeCost *pcmcost4 = new ConstrainedMultiplicativeCost;" << std::endl;
    ConstrainedMultiplicativeCost *pcmcost4 = new ConstrainedMultiplicativeCost;
    std::cout << "\tConstrainedMultiplicativeCost *pcmcost5 = new ConstrainedMultiplicativeCost(5.00);" << std::endl;
    ConstrainedMultiplicativeCost *pcmcost5 = new ConstrainedMultiplicativeCost(5.00);
    std::cout << "\tConstrainedMultiplicativeCost *pcmcost6 = new ConstrainedMultiplicativeCost(6.00, \"sixes\");" << std::endl;
    ConstrainedMultiplicativeCost *pcmcost6 = new ConstrainedMultiplicativeCost(6.00, "sixes");
    std::cout << "\tConstrainedMultiplicativeCost *pcmcost7 = new ConstrainedMultiplicativeCost(7.00, \"sevens\", 21.00);" << std::endl;
    ConstrainedMultiplicativeCost *pcmcost7 = new ConstrainedMultiplicativeCost(7.00, "sevens", 343.00);

    std::cout << std::endl
              << "\tConstrainedMultiplicativeCost copycmcost0(cmcost0);" << std::endl;
    ConstrainedMultiplicativeCost copycmcost0(cmcost0);
    std::cout << "\tConstrainedMultiplicativeCost copycmcost1(cmcost1);" << std::endl;
    ConstrainedMultiplicativeCost copycmcost1(cmcost1);
    std::cout << "\tConstrainedMultiplicativeCost copycmcost2(cmcost2);" << std::endl;
    ConstrainedMultiplicativeCost copycmcost2(cmcost2);
    std::cout << "\tConstrainedMultiplicativeCost copycmcost3(cmcost3);" << std::endl;
    ConstrainedMultiplicativeCost copycmcost3(cmcost3);
    std::cout << "\tConstrainedMultiplicativeCost copypcmcost4(*pcmcost4);" << std::endl;
    ConstrainedMultiplicativeCost copypcmcost4(*pcmcost4);
    std::cout << "\tConstrainedMultiplicativeCost copypcmcost5(*pcmcost5);" << std::endl;
    ConstrainedMultiplicativeCost copypcmcost5(*pcmcost5);
    std::cout << "\tConstrainedMultiplicativeCost copypcmcost6(*pcmcost6);" << std::endl;
    ConstrainedMultiplicativeCost copypcmcost6(*pcmcost6);
    std::cout << "\tConstrainedMultiplicativeCost copypcmcost7(*pcmcost7);" << std::endl;
    ConstrainedMultiplicativeCost copypcmcost7(*pcmcost7);

    std::cout << std::endl
              << "\tConstrainedMultiplicativeCost *pcopycmcost0 = new ConstrainedMultiplicativeCost(cmcost0);" << std::endl;
    ConstrainedMultiplicativeCost *pcopycmcost0 = new ConstrainedMultiplicativeCost(cmcost0);
    std::cout << "\tConstrainedMultiplicativeCost *pcopycmcost1 = new ConstrainedMultiplicativeCost(cmcost1);" << std::endl;
    ConstrainedMultiplicativeCost *pcopycmcost1 = new ConstrainedMultiplicativeCost(cmcost1);
    std::cout << "\tConstrainedMultiplicativeCost *pcopycmcost2 = new ConstrainedMultiplicativeCost(cmcost2);" << std::endl;
    ConstrainedMultiplicativeCost *pcopycmcost2 = new ConstrainedMultiplicativeCost(cmcost2);
    std::cout << "\tConstrainedMultiplicativeCost *pcopycmcost3 = new ConstrainedMultiplicativeCost(cmcost3);" << std::endl;
    ConstrainedMultiplicativeCost *pcopycmcost3 = new ConstrainedMultiplicativeCost(cmcost3);
    std::cout << "\tConstrainedMultiplicativeCost *pcopypcmcost4 = new ConstrainedMultiplicativeCost(*pcmcost4);" << std::endl;
    ConstrainedMultiplicativeCost *pcopypcmcost4 = new ConstrainedMultiplicativeCost(*pcmcost4);
    std::cout << "\tConstrainedMultiplicativeCost *pcopypcmcost5 = new ConstrainedMultiplicativeCost(*pcmcost5);" << std::endl;
    ConstrainedMultiplicativeCost *pcopypcmcost5 = new ConstrainedMultiplicativeCost(*pcmcost5);
    std::cout << "\tConstrainedMultiplicativeCost *pcopypcmcost6 = new ConstrainedMultiplicativeCost(*pcmcost6);" << std::endl;
    ConstrainedMultiplicativeCost *pcopypcmcost6 = new ConstrainedMultiplicativeCost(*pcmcost6);
    std::cout << "\tConstrainedMultiplicativeCost *pcopypcmcost7 = new ConstrainedMultiplicativeCost(*pcmcost7);" << std::endl;
    ConstrainedMultiplicativeCost *pcopypcmcost7 = new ConstrainedMultiplicativeCost(*pcmcost7);

    /* Test getCost() */

    std::cout << std::endl
              << "Testing getCost():" << std::endl
              << std::endl;

    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "cmcost0.getCost():\t\t\t"
              << cmcost0.getCost()
              << "\t\t\tCorrect output: "
              << cmcost0.DEFAULT_COST
              << ((cmcost0.getCost() == cmcost0.DEFAULT_COST) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "cmcost1.getCost():\t\t\t"
              << cmcost1.getCost()
              << "\t\t\tCorrect output: "
              << 1.00
              << ((cmcost1.getCost() == 1.00) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "cmcost2.getCost():\t\t\t"
              << cmcost2.getCost()
              << "\t\t\tCorrect output: "
              << 2.00
              << ((cmcost2.getCost() == 2.00) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "cmcost3.getCost():\t\t\t"
              << cmcost3.getCost()
              << "\t\t\tCorrect output: "
              << 3.00
              << ((cmcost3.getCost() == 3.00) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcmcost4->getCost():\t\t\t"
              << pcmcost4->getCost()
              << "\t\t\tCorrect output: "
              << pcmcost4->DEFAULT_COST
              << ((pcmcost4->getCost() == pcmcost4->DEFAULT_COST) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcmcost5->getCost():\t\t\t"
              << pcmcost5->getCost()
              << "\t\t\tCorrect output: "
              << 5.00
              << ((pcmcost5->getCost() == 5.00) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcmcost6->getCost():\t\t\t"
              << pcmcost6->getCost()
              << "\t\t\tCorrect output: "
              << 6.00
              << ((pcmcost6->getCost() == 6.00) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcmcost7->getCost():\t\t\t"
              << pcmcost7->getCost()
              << "\t\t\tCorrect output: "
              << 7.00
              << ((pcmcost7->getCost() == 7.00) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;

    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copycmcost0.getCost():\t\t\t"
              << copycmcost0.getCost()
              << "\t\t\tCorrect output: "
              << cmcost0.getCost()
              << ((copycmcost0.getCost() == cmcost0.getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copycmcost1.getCost():\t\t\t"
              << copycmcost1.getCost()
              << "\t\t\tCorrect output: "
              << cmcost1.getCost()
              << ((copycmcost1.getCost() == cmcost1.getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copycmcost2.getCost():\t\t\t"
              << copycmcost2.getCost()
              << "\t\t\tCorrect output: "
              << cmcost2.getCost()
              << ((copycmcost2.getCost() == cmcost2.getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copycmcost3.getCost():\t\t\t"
              << copycmcost3.getCost()
              << "\t\t\tCorrect output: "
              << cmcost3.getCost()
              << ((copycmcost3.getCost() == cmcost3.getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copypcmcost4.getCost():\t\t\t"
              << copypcmcost4.getCost()
              << "\t\t\tCorrect output: "
              << pcmcost4->getCost()
              << ((copypcmcost4.getCost() == pcmcost4->getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copypcmcost5.getCost():\t\t\t"
              << copypcmcost5.getCost()
              << "\t\t\tCorrect output: "
              << pcmcost5->getCost()
              << ((copypcmcost5.getCost() == pcmcost5->getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copypcmcost6.getCost():\t\t\t"
              << copypcmcost6.getCost()
              << "\t\t\tCorrect output: "
              << pcmcost6->getCost()
              << ((copypcmcost6.getCost() == pcmcost6->getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copypcmcost7.getCost():\t\t\t"
              << copypcmcost7.getCost()
              << "\t\t\tCorrect output: "
              << pcmcost7->getCost()
              << ((copypcmcost7.getCost() == pcmcost7->getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;

    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopycmcost0->getCost():\t\t"
              << pcopycmcost0->getCost()
              << "\t\t\tCorrect output: "
              << cmcost0.getCost()
              << ((pcopycmcost0->getCost() == cmcost0.getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopycmcost1->getCost():\t\t"
              << pcopycmcost1->getCost()
              << "\t\t\tCorrect output: "
              << cmcost1.getCost()
              << ((pcopycmcost1->getCost() == cmcost1.getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopycmcost2->getCost():\t\t"
              << pcopycmcost2->getCost()
              << "\t\t\tCorrect output: "
              << cmcost2.getCost()
              << ((pcopycmcost2->getCost() == cmcost2.getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopycmcost3->getCost():\t\t"
              << pcopycmcost3->getCost()
              << "\t\t\tCorrect output: "
              << cmcost3.getCost()
              << ((pcopycmcost3->getCost() == cmcost3.getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopypcmcost4->getCost():\t\t"
              << pcopypcmcost4->getCost()
              << "\t\t\tCorrect output: "
              << pcmcost4->getCost()
              << ((pcopypcmcost4->getCost() == pcmcost4->getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopypcmcost5->getCost():\t\t"
              << pcopypcmcost5->getCost()
              << "\t\t\tCorrect output: "
              << pcmcost5->getCost()
              << ((pcopypcmcost5->getCost() == pcmcost5->getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopypcmcost6->getCost():\t\t"
              << pcopypcmcost6->getCost()
              << "\t\t\tCorrect output: "
              << pcmcost6->getCost()
              << ((pcopypcmcost6->getCost() == pcmcost6->getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopypcmcost7->getCost():\t\t"
              << pcopypcmcost7->getCost()
              << "\t\t\tCorrect output: "
              << pcmcost7->getCost()
              << ((pcopypcmcost7->getCost() == pcmcost7->getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;

    /* Test getUnits() */

    std::cout << std::endl
              << "Testing getUnits():" << std::endl
              << std::endl;

    std::cout << "cmcost0.getUnits():\t\t\t"
              << cmcost0.getUnits()
              << "\t\t\tCorrect output: "
              << cmcost0.DEFAULT_UNITS
              << ((cmcost0.getUnits() == cmcost0.DEFAULT_UNITS) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cmcost1.getUnits():\t\t\t"
              << cmcost1.getUnits()
              << "\t\t\tCorrect output: "
              << cmcost1.DEFAULT_UNITS
              << ((cmcost1.getUnits() == cmcost1.DEFAULT_UNITS) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cmcost2.getUnits():\t\t\t"
              << cmcost2.getUnits()
              << "\t\t\tCorrect output: "
              << "twos"
              << ((cmcost2.getUnits() == "twos") ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cmcost3.getUnits():\t\t\t"
              << cmcost3.getUnits()
              << "\t\t\tCorrect output: "
              << "threes"
              << ((cmcost3.getUnits() == "threes") ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcmcost4->getUnits():\t\t\t"
              << pcmcost4->getUnits()
              << "\t\t\tCorrect output: "
              << pcmcost4->DEFAULT_UNITS
              << ((pcmcost4->getUnits() == pcmcost4->DEFAULT_UNITS) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcmcost5->getUnits():\t\t\t"
              << pcmcost5->getUnits()
              << "\t\t\tCorrect output: "
              << pcmcost5->DEFAULT_UNITS
              << ((pcmcost5->getUnits() == pcmcost5->DEFAULT_UNITS) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcmcost6->getUnits():\t\t\t"
              << pcmcost6->getUnits()
              << "\t\t\tCorrect output: "
              << "sixes"
              << ((pcmcost6->getUnits() == "sixes") ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcmcost7->getUnits():\t\t\t"
              << pcmcost7->getUnits()
              << "\t\t\tCorrect output: "
              << "sevens"
              << ((pcmcost7->getUnits() == "sevens") ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;

    std::cout << "copycmcost0.getUnits():\t\t\t"
              << copycmcost0.getUnits()
              << "\t\t\tCorrect output: "
              << cmcost0.getUnits()
              << ((copycmcost0.getUnits() == cmcost0.getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copycmcost1.getUnits():\t\t\t"
              << copycmcost1.getUnits()
              << "\t\t\tCorrect output: "
              << cmcost1.getUnits()
              << ((copycmcost1.getUnits() == cmcost1.getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copycmcost2.getUnits():\t\t\t"
              << copycmcost2.getUnits()
              << "\t\t\tCorrect output: "
              << cmcost2.getUnits()
              << ((copycmcost2.getUnits() == cmcost2.getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copycmcost3.getUnits():\t\t\t"
              << copycmcost3.getUnits()
              << "\t\t\tCorrect output: "
              << cmcost3.getUnits()
              << ((copycmcost3.getUnits() == cmcost3.getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypcmcost4.getUnits():\t\t"
              << copypcmcost4.getUnits()
              << "\t\t\tCorrect output: "
              << pcmcost4->getUnits()
              << ((copypcmcost4.getUnits() == pcmcost4->getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypcmcost5.getUnits():\t\t"
              << copypcmcost5.getUnits()
              << "\t\t\tCorrect output: "
              << pcmcost5->getUnits()
              << ((copypcmcost5.getUnits() == pcmcost5->getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypcmcost6.getUnits():\t\t"
              << copypcmcost6.getUnits()
              << "\t\t\tCorrect output: "
              << pcmcost6->getUnits()
              << ((copypcmcost6.getUnits() == pcmcost6->getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypcmcost7.getUnits():\t\t"
              << copypcmcost7.getUnits()
              << "\t\t\tCorrect output: "
              << pcmcost7->getUnits()
              << ((copypcmcost7.getUnits() == pcmcost7->getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;

    std::cout << "pcopycmcost0->getUnits():\t\t"
              << pcopycmcost0->getUnits()
              << "\t\t\tCorrect output: "
              << cmcost0.getUnits()
              << ((pcopycmcost0->getUnits() == cmcost0.getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopycmcost1->getUnits():\t\t"
              << pcopycmcost1->getUnits()
              << "\t\t\tCorrect output: "
              << cmcost1.getUnits()
              << ((pcopycmcost1->getUnits() == cmcost1.getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopycmcost2->getUnits():\t\t"
              << pcopycmcost2->getUnits()
              << "\t\t\tCorrect output: "
              << cmcost2.getUnits()
              << ((pcopycmcost2->getUnits() == cmcost2.getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopycmcost3->getUnits():\t\t"
              << pcopycmcost3->getUnits()
              << "\t\t\tCorrect output: "
              << cmcost3.getUnits()
              << ((pcopycmcost3->getUnits() == cmcost3.getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypcmcost4->getUnits():\t\t"
              << pcopypcmcost4->getUnits()
              << "\t\t\tCorrect output: "
              << pcmcost4->getUnits()
              << ((pcopypcmcost4->getUnits() == pcmcost4->getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypcmcost5->getUnits():\t\t"
              << pcopypcmcost5->getUnits()
              << "\t\t\tCorrect output: "
              << pcmcost5->getUnits()
              << ((pcopypcmcost5->getUnits() == pcmcost5->getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypcmcost6->getUnits():\t\t"
              << pcopypcmcost6->getUnits()
              << "\t\t\tCorrect output: "
              << pcmcost6->getUnits()
              << ((pcopypcmcost6->getUnits() == pcmcost6->getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypcmcost7->getUnits():\t\t"
              << pcopypcmcost7->getUnits()
              << "\t\t\tCorrect output: "
              << pcmcost7->getUnits()
              << ((pcopypcmcost7->getUnits() == pcmcost7->getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;

    /* Test getConstraint() */

    std::cout << std::endl
              << "Testing getConstraint():" << std::endl
              << std::endl;

    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "cmcost0.getConstraint():\t\t"
              << cmcost0.getConstraint()
              << "\t\t\tCorrect output: "
              << cmcost0.DEFAULT_COST
              << ((cmcost0.getConstraint() == cmcost0.DEFAULT_COST) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "cmcost1.getConstraint():\t\t"
              << cmcost1.getConstraint()
              << "\t\t\tCorrect output: "
              << cmcost1.DEFAULT_COST
              << ((cmcost1.getConstraint() == cmcost1.DEFAULT_COST) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "cmcost2.getConstraint():\t\t"
              << cmcost2.getConstraint()
              << "\t\t\tCorrect output: "
              << cmcost2.DEFAULT_COST
              << ((cmcost2.getConstraint() == cmcost2.DEFAULT_COST) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "cmcost3.getConstraint():\t\t"
              << cmcost3.getConstraint()
              << "\t\t\tCorrect output: "
              << 27.00
              << ((cmcost3.getConstraint() == 27.00) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcmcost4->getConstraint():\t\t"
              << pcmcost4->getConstraint()
              << "\t\t\tCorrect output: "
              << pcmcost4->DEFAULT_COST
              << ((pcmcost4->getConstraint() == pcmcost4->DEFAULT_COST) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcmcost5->getConstraint():\t\t"
              << pcmcost5->getConstraint()
              << "\t\t\tCorrect output: "
              << pcmcost5->DEFAULT_COST
              << ((pcmcost5->getConstraint() == pcmcost5->DEFAULT_COST) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcmcost6->getConstraint():\t\t"
              << pcmcost6->getConstraint()
              << "\t\t\tCorrect output: "
              << pcmcost6->DEFAULT_COST
              << ((pcmcost6->getConstraint() == pcmcost6->DEFAULT_COST) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcmcost7->getConstraint():\t\t"
              << pcmcost7->getConstraint()
              << "\t\tCorrect output: "
              << 343.00
              << ((pcmcost7->getConstraint() == 343.00) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;

    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copycmcost0.getConstraint():\t\t"
              << copycmcost0.getConstraint()
              << "\t\t\tCorrect output: "
              << cmcost0.getConstraint()
              << ((copycmcost0.getConstraint() == cmcost0.getConstraint()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copycmcost1.getConstraint():\t\t"
              << copycmcost1.getConstraint()
              << "\t\t\tCorrect output: "
              << cmcost1.getConstraint()
              << ((copycmcost1.getConstraint() == cmcost1.getConstraint()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copycmcost2.getConstraint():\t\t"
              << copycmcost2.getConstraint()
              << "\t\t\tCorrect output: "
              << cmcost2.getConstraint()
              << ((copycmcost2.getConstraint() == cmcost2.getConstraint()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copycmcost3.getConstraint():\t\t"
              << copycmcost3.getConstraint()
              << "\t\t\tCorrect output: "
              << cmcost3.getConstraint()
              << ((copycmcost3.getConstraint() == cmcost3.getConstraint()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copypcmcost4.getConstraint():\t\t"
              << copypcmcost4.getConstraint()
              << "\t\t\tCorrect output: "
              << pcmcost4->getConstraint()
              << ((copypcmcost4.getConstraint() == pcmcost4->getConstraint()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copypcmcost5.getConstraint():\t\t"
              << copypcmcost5.getConstraint()
              << "\t\t\tCorrect output: "
              << pcmcost5->getConstraint()
              << ((copypcmcost5.getConstraint() == pcmcost5->getConstraint()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copypcmcost6.getConstraint():\t\t"
              << copypcmcost6.getConstraint()
              << "\t\t\tCorrect output: "
              << pcmcost6->getConstraint()
              << ((copypcmcost6.getConstraint() == pcmcost6->getConstraint()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copypcmcost7.getConstraint():\t\t"
              << copypcmcost7.getConstraint()
              << "\t\tCorrect output: "
              << pcmcost7->getConstraint()
              << ((copypcmcost7.getConstraint() == pcmcost7->getConstraint()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;

    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopycmcost0->getConstraint():\t\t"
              << pcopycmcost0->getConstraint()
              << "\t\t\tCorrect output: "
              << cmcost0.getConstraint()
              << ((pcopycmcost0->getConstraint() == cmcost0.getConstraint()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopycmcost1->getConstraint():\t\t"
              << pcopycmcost1->getConstraint()
              << "\t\t\tCorrect output: "
              << cmcost1.getConstraint()
              << ((pcopycmcost1->getConstraint() == cmcost1.getConstraint()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopycmcost2->getConstraint():\t\t"
              << pcopycmcost2->getConstraint()
              << "\t\t\tCorrect output: "
              << cmcost2.getConstraint()
              << ((pcopycmcost2->getConstraint() == cmcost2.getConstraint()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopycmcost3->getConstraint():\t\t"
              << pcopycmcost3->getConstraint()
              << "\t\t\tCorrect output: "
              << cmcost3.getConstraint()
              << ((pcopycmcost3->getConstraint() == cmcost3.getConstraint()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopypcmcost4->getConstraint():\t\t"
              << pcopypcmcost4->getConstraint()
              << "\t\t\tCorrect output: "
              << pcmcost4->getConstraint()
              << ((pcopypcmcost4->getConstraint() == pcmcost4->getConstraint()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopypcmcost5->getConstraint():\t\t"
              << pcopypcmcost5->getConstraint()
              << "\t\t\tCorrect output: "
              << pcmcost5->getConstraint()
              << ((pcopypcmcost5->getConstraint() == pcmcost5->getConstraint()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopypcmcost6->getConstraint():\t\t"
              << pcopypcmcost6->getConstraint()
              << "\t\t\tCorrect output: "
              << pcmcost6->getConstraint()
              << ((pcopypcmcost6->getConstraint() == pcmcost6->getConstraint()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopypcmcost7->getConstraint():\t\t"
              << pcopypcmcost7->getConstraint()
              << "\t\tCorrect output: "
              << pcmcost7->getConstraint()
              << ((pcopypcmcost7->getConstraint() == pcmcost7->getConstraint()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;

    /* Test toString() */

    std::stringstream ss;
    ss << std::fixed << std::showpoint << std::setprecision(4);
    std::cout << std::endl
              << "Testing toString():" << std::endl
              << std::endl;

    ss << cmcost0.getCost() << " " << cmcost0.getUnits() << " of " << cmcost0.getConstraint();
    std::cout << "cmcost0.toString():\t\t\t"
              << cmcost0.toString()
              << "\tCorrect output: "
              << ss.str()
              << ((cmcost0.toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << cmcost1.getCost() << " " << cmcost1.getUnits() << " of " << cmcost1.getConstraint();
    std::cout << "cmcost1.toString():\t\t\t"
              << cmcost1.toString()
              << "\tCorrect output: "
              << ss.str()
              << ((cmcost1.toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << cmcost2.getCost() << " " << cmcost2.getUnits() << " of " << cmcost2.getConstraint();
    std::cout << "cmcost2.toString():\t\t\t"
              << cmcost2.toString()
              << "\tCorrect output: "
              << ss.str()
              << ((cmcost2.toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << cmcost3.getCost() << " " << cmcost3.getUnits() << " of " << cmcost3.getConstraint();
    std::cout << "cmcost3.toString():\t\t\t"
              << cmcost3.toString()
              << "Correct output: "
              << ss.str()
              << ((cmcost3.toString() == ss.str()) ? "OK" : "TEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcmcost4->getCost() << " " << pcmcost4->getUnits() << " of " << pcmcost4->getConstraint();
    std::cout << "pcmcost4->toString():\t\t\t"
              << pcmcost4->toString()
              << "\tCorrect output: "
              << ss.str()
              << ((pcmcost4->toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcmcost5->getCost() << " " << pcmcost5->getUnits() << " of " << pcmcost5->getConstraint();
    std::cout << "pcmcost5->toString():\t\t\t"
              << pcmcost5->toString()
              << "\tCorrect output: "
              << ss.str()
              << ((pcmcost5->toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcmcost6->getCost() << " " << pcmcost6->getUnits() << " of " << pcmcost6->getConstraint();
    std::cout << "pcmcost6->toString():\t\t\t"
              << pcmcost6->toString()
              << "\tCorrect output: "
              << ss.str()
              << ((pcmcost6->toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcmcost7->getCost() << " " << pcmcost7->getUnits() << " of " << pcmcost7->getConstraint();
    std::cout << "pcmcost7->toString():\t\t\t"
              << pcmcost7->toString()
              << "Correct output: "
              << ss.str()
              << ((pcmcost7->toString() == ss.str()) ? "OK" : "TEST FAILED")
              << std::endl;
    ss.str("");

    ss << copycmcost0.getCost() << " " << copycmcost0.getUnits() << " of " << copycmcost0.getConstraint();
    std::cout << "copycmcost0.toString():\t\t\t"
              << copycmcost0.toString()
              << "\tCorrect output: "
              << ss.str()
              << ((copycmcost0.toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << copycmcost1.getCost() << " " << copycmcost1.getUnits() << " of " << copycmcost1.getConstraint();
    std::cout << "copycmcost1.toString():\t\t\t"
              << copycmcost1.toString()
              << "\tCorrect output: "
              << ss.str()
              << ((copycmcost1.toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << copycmcost2.getCost() << " " << copycmcost2.getUnits() << " of " << copycmcost2.getConstraint();
    std::cout << "copycmcost2.toString():\t\t\t"
              << copycmcost2.toString()
              << "\tCorrect output: "
              << ss.str()
              << ((copycmcost2.toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << copycmcost3.getCost() << " " << copycmcost3.getUnits() << " of " << copycmcost3.getConstraint();
    std::cout << "copycmcost3.toString():\t\t\t"
              << copycmcost3.toString()
              << "Correct output: "
              << ss.str()
              << ((copycmcost3.toString() == ss.str()) ? "OK" : "TEST FAILED")
              << std::endl;
    ss.str("");
    ss << copypcmcost4.getCost() << " " << copypcmcost4.getUnits() << " of " << copypcmcost4.getConstraint();
    std::cout << "copypcmcost4.toString():\t\t"
              << copypcmcost4.toString()
              << "\tCorrect output: "
              << ss.str()
              << ((copypcmcost4.toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << copypcmcost5.getCost() << " " << copypcmcost5.getUnits() << " of " << copypcmcost5.getConstraint();
    std::cout << "copypcmcost5.toString():\t\t"
              << copypcmcost5.toString()
              << "\tCorrect output: "
              << ss.str()
              << ((copypcmcost5.toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << copypcmcost6.getCost() << " " << copypcmcost6.getUnits() << " of " << copypcmcost6.getConstraint();
    std::cout << "copypcmcost6.toString():\t\t"
              << copypcmcost6.toString()
              << "\tCorrect output: "
              << ss.str()
              << ((copypcmcost6.toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << copypcmcost7.getCost() << " " << copypcmcost7.getUnits() << " of " << copypcmcost7.getConstraint();
    std::cout << "copypcmcost7.toString():\t\t"
              << copypcmcost7.toString()
              << "Correct output: "
              << ss.str()
              << ((copypcmcost7.toString() == ss.str()) ? "OK" : "TEST FAILED")
              << std::endl;
    ss.str("");

    ss << pcopycmcost0->getCost() << " " << pcopycmcost0->getUnits() << " of " << pcopycmcost0->getConstraint();
    std::cout << "pcopycmcost0->toString():\t\t"
              << pcopycmcost0->toString()
              << "\tCorrect output: "
              << ss.str()
              << ((pcopycmcost0->toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcopycmcost1->getCost() << " " << pcopycmcost1->getUnits() << " of " << pcopycmcost1->getConstraint();
    std::cout << "pcopycmcost1->toString():\t\t"
              << pcopycmcost1->toString()
              << "\tCorrect output: "
              << ss.str()
              << ((pcopycmcost1->toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcopycmcost2->getCost() << " " << pcopycmcost2->getUnits() << " of " << pcopycmcost2->getConstraint();
    std::cout << "pcopycmcost2->toString():\t\t"
              << pcopycmcost2->toString()
              << "\tCorrect output: "
              << ss.str()
              << ((pcopycmcost2->toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcopycmcost3->getCost() << " " << pcopycmcost3->getUnits() << " of " << pcopycmcost3->getConstraint();
    std::cout << "pcopycmcost3->toString():\t\t"
              << pcopycmcost3->toString()
              << "Correct output: "
              << ss.str()
              << ((pcopycmcost3->toString() == ss.str()) ? "OK" : "TEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcopypcmcost4->getCost() << " " << pcopypcmcost4->getUnits() << " of " << pcopypcmcost4->getConstraint();
    std::cout << "pcopypcmcost4->toString():\t\t"
              << pcopypcmcost4->toString()
              << "\tCorrect output: "
              << ss.str()
              << ((pcopypcmcost4->toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcopypcmcost5->getCost() << " " << pcopypcmcost5->getUnits() << " of " << pcopypcmcost5->getConstraint();
    std::cout << "pcopypcmcost5->toString():\t\t"
              << pcopypcmcost5->toString()
              << "\tCorrect output: "
              << ss.str()
              << ((pcopypcmcost5->toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcopypcmcost6->getCost() << " " << pcopypcmcost6->getUnits() << " of " << pcopypcmcost6->getConstraint();
    std::cout << "pcopypcmcost6->toString():\t\t"
              << pcopypcmcost6->toString()
              << "\tCorrect output: "
              << ss.str()
              << ((pcopypcmcost6->toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcopypcmcost7->getCost() << " " << pcopypcmcost7->getUnits() << " of " << pcopypcmcost7->getConstraint();
    std::cout << "pcopypcmcost7->toString():\t\t"
              << pcopypcmcost7->toString()
              << "Correct output: "
              << ss.str()
              << ((pcopypcmcost7->toString() == ss.str()) ? "OK" : "TEST FAILED")
              << std::endl;
    ss.str("");

    /* Test operator<< */

    std::cout << std::endl
              << "Testing operator<<:" << std::endl
              << std::endl;

    std::cout << "cout << cmcost0:\t\t\t" << cmcost0
              << "\t[Expected:\t\t\t" << cmcost0.toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << cmcost1:\t\t\t" << cmcost1
              << "\t[Expected:\t\t\t" << cmcost1.toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << cmcost2:\t\t\t" << cmcost2
              << "\t[Expected:\t\t\t" << cmcost2.toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << cmcost3:\t\t\t" << cmcost3
              << "\t[Expected:\t\t\t" << cmcost3.toString() << "]"
              << std::endl << std::endl;
    std::cout << "cout << pcmcost4:\t\t\t" << *pcmcost4
              << "\t[Expected:\t\t\t" << pcmcost4->toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << pcmcost5:\t\t\t" << *pcmcost5
              << "\t[Expected:\t\t\t" << pcmcost5->toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << pcmcost6:\t\t\t" << *pcmcost6
              << "\t[Expected:\t\t\t" << pcmcost6->toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << pcmcost7:\t\t\t" << *pcmcost7
              << "\t[Expected:\t\t\t" << pcmcost7->toString() << "]"
              << std::endl << std::endl;

    std::cout << "cout << copycmcost0:\t\t\t" << copycmcost0
              << "\t[Expected:\t\t\t" << copycmcost0.toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << copycmcost1:\t\t\t" << copycmcost1
              << "\t[Expected:\t\t\t" << copycmcost1.toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << copycmcost2:\t\t\t" << copycmcost2
              << "\t[Expected:\t\t\t" << copycmcost2.toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << copycmcost3:\t\t\t" << copycmcost3
              << "\t[Expected:\t\t\t" << copycmcost3.toString() << "]"
              << std::endl << std::endl;
    std::cout << "cout << copypcmcost4:\t\t\t" << copypcmcost4
              << "\t[Expected:\t\t\t" << copypcmcost4.toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << copypcmcost5:\t\t\t" << copypcmcost5
              << "\t[Expected:\t\t\t" << copypcmcost5.toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << copypcmcost6:\t\t\t" << copypcmcost6
              << "\t[Expected:\t\t\t" << copypcmcost6.toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << copypcmcost7:\t\t\t" << copypcmcost7
              << "\t[Expected:\t\t\t" << copypcmcost7.toString() << "]"
              << std::endl << std::endl;

    std::cout << "cout << *pcopycmcost0:\t\t\t" << *pcopycmcost0
              << "\t[Expected:\t\t\t" << pcopycmcost0->toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << *pcopycmcost1:\t\t\t" << *pcopycmcost1
              << "\t[Expected:\t\t\t" << pcopycmcost1->toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << *pcopycmcost2:\t\t\t" << *pcopycmcost2
              << "\t[Expected:\t\t\t" << pcopycmcost2->toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << *pcopycmcost3:\t\t\t" << *pcopycmcost3
              << "\t[Expected:\t\t\t" << pcopycmcost3->toString() << "]"
              << std::endl << std::endl;
    std::cout << "cout << *pcopypcmcost4:\t\t\t" << *pcopypcmcost4
              << "\t[Expected:\t\t\t" << pcopypcmcost4->toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << *pcopypcmcost5:\t\t\t" << *pcopypcmcost5
              << "\t[Expected:\t\t\t" << pcopypcmcost5->toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << *pcopypcmcost6:\t\t\t" << *pcopypcmcost6
              << "\t[Expected:\t\t\t" << pcopypcmcost6->toString() << "\t]"
              << std::endl << std::endl;
    std::cout << "cout << *pcopypcmcost7:\t\t\t" << *pcopypcmcost7
              << "\t[Expected:\t\t\t" << pcopypcmcost7->toString() << "]"
              << std::endl;

    /* Test operator== */

    std::cout << std::endl
              << "Testing operator==:" << std::endl
              << std::endl;

    std::cout << "Check that a Constrained Multiplicative Cost object equals itself:" << std::endl;
    std::cout << "cmcost0 == cmcost0:\t\t\t"
              << ((cmcost0 == cmcost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((cmcost0 == cmcost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cmcost1 == cmcost1:\t\t\t"
              << ((cmcost1 == cmcost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((cmcost1 == cmcost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cmcost2 == cmcost2:\t\t\t"
              << ((cmcost2 == cmcost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((cmcost2 == cmcost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cmcost3 == cmcost3:\t\t\t"
              << ((cmcost3 == cmcost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((cmcost3 == cmcost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcmcost4 == *pcmcost4:\t\t\t"
              << ((*pcmcost4 == *pcmcost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcmcost4 == *pcmcost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcmcost5 == *pcmcost5:\t\t\t"
              << ((*pcmcost5 == *pcmcost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcmcost5 == *pcmcost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcmcost6 == *pcmcost6:\t\t\t"
              << ((*pcmcost6 == *pcmcost6) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcmcost6 == *pcmcost6) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcmcost7 == *pcmcost7:\t\t\t"
              << ((*pcmcost7 == *pcmcost7) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcmcost7 == *pcmcost7) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copycmcost0 == copycmcost0:\t\t"
              << ((copycmcost0 == copycmcost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copycmcost0 == copycmcost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copycmcost1 == copycmcost1:\t\t"
              << ((copycmcost1 == copycmcost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copycmcost1 == copycmcost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copycmcost2 == copycmcost2:\t\t"
              << ((copycmcost2 == copycmcost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copycmcost2 == copycmcost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copycmcost3 == copycmcost3:\t\t"
              << ((copycmcost3 == copycmcost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copycmcost3 == copycmcost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypcmcost4 == copypcmcost4:\t\t"
              << ((copypcmcost4 == copypcmcost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copypcmcost4 == copypcmcost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypcmcost5 == copypcmcost5:\t\t"
              << ((copypcmcost5 == copypcmcost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copypcmcost5 == copypcmcost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypcmcost6 == copypcmcost6:\t\t"
              << ((copypcmcost6 == copypcmcost6) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copypcmcost6 == copypcmcost6) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypcmcost7 == copypcmcost7:\t\t"
              << ((copypcmcost7 == copypcmcost7) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copypcmcost7 == copypcmcost7) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopycmcost0 == *pcopycmcost0:\t\t"
              << ((*pcopycmcost0 == *pcopycmcost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopycmcost0 == *pcopycmcost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopycmcost1 == *pcopycmcost1:\t\t"
              << ((*pcopycmcost1 == *pcopycmcost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopycmcost1 == *pcopycmcost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopycmcost2 == *pcopycmcost2:\t\t"
              << ((*pcopycmcost2 == *pcopycmcost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopycmcost2 == *pcopycmcost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopycmcost3 == *pcopycmcost3:\t\t"
              << ((*pcopycmcost3 == *pcopycmcost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopycmcost3 == *pcopycmcost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopypcmcost4 == *pcopypcmcost4:\t"
              << ((*pcopypcmcost4 == *pcopypcmcost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopypcmcost4 == *pcopypcmcost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopypcmcost5 == *pcopypcmcost5:\t"
              << ((*pcopypcmcost5 == *pcopypcmcost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopypcmcost5 == *pcopypcmcost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopypcmcost6 == *pcopypcmcost6:\t"
              << ((*pcopypcmcost6 == *pcopypcmcost6) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopypcmcost6 == *pcopypcmcost6) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopypcmcost7 == *pcopypcmcost7:\t"
              << ((*pcopypcmcost7 == *pcopypcmcost7) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopypcmcost7 == *pcopypcmcost7) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl << std::endl;

    std::cout << "Check that the address of a Constrained Multiplicative Cost object equals its own address:" << std::endl;
    std::cout << "&cmcost0 == &cmcost0:\t\t\t"
              << ((&cmcost0 == &cmcost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&cmcost0 == &cmcost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&cmcost1 == &cmcost1:\t\t\t"
              << ((&cmcost1 == &cmcost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&cmcost1 == &cmcost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&cmcost2 == &cmcost2:\t\t\t"
              << ((&cmcost2 == &cmcost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&cmcost2 == &cmcost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&cmcost3 == &cmcost3:\t\t\t"
              << ((&cmcost3 == &cmcost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&cmcost3 == &cmcost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcmcost4 == pcmcost4:\t\t\t"
              << ((pcmcost4 == pcmcost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcmcost4 == pcmcost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcmcost5 == pcmcost5:\t\t\t"
              << ((pcmcost5 == pcmcost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcmcost5 == pcmcost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcmcost6 == pcmcost6:\t\t\t"
              << ((pcmcost6 == pcmcost6) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcmcost6 == pcmcost6) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcmcost7 == pcmcost7:\t\t\t"
              << ((pcmcost7 == pcmcost7) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcmcost7 == pcmcost7) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copycmcost0 == &copycmcost0:\t\t"
              << ((&copycmcost0 == &copycmcost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copycmcost0 == &copycmcost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copycmcost1 == &copycmcost1:\t\t"
              << ((&copycmcost1 == &copycmcost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copycmcost1 == &copycmcost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copycmcost2 == &copycmcost2:\t\t"
              << ((&copycmcost2 == &copycmcost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copycmcost2 == &copycmcost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copycmcost3 == &copycmcost3:\t\t"
              << ((&copycmcost3 == &copycmcost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copycmcost3 == &copycmcost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copypcmcost4 == &copypcmcost4:\t\t"
              << ((&copypcmcost4 == &copypcmcost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copypcmcost4 == &copypcmcost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copypcmcost5 == &copypcmcost5:\t\t"
              << ((&copypcmcost5 == &copypcmcost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copypcmcost5 == &copypcmcost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copypcmcost6 == &copypcmcost6:\t\t"
              << ((&copypcmcost6 == &copypcmcost6) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copypcmcost6 == &copypcmcost6) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copypcmcost7 == &copypcmcost7:\t\t"
              << ((&copypcmcost7 == &copypcmcost7) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copypcmcost7 == &copypcmcost7) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopycmcost0 == pcopycmcost0:\t\t"
              << ((pcopycmcost0 == pcopycmcost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopycmcost0 == pcopycmcost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopycmcost1 == pcopycmcost1:\t\t"
              << ((pcopycmcost1 == pcopycmcost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopycmcost1 == pcopycmcost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopycmcost2 == pcopycmcost2:\t\t"
              << ((pcopycmcost2 == pcopycmcost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopycmcost2 == pcopycmcost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopycmcost3 == pcopycmcost3:\t\t"
              << ((pcopycmcost3 == pcopycmcost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopycmcost3 == pcopycmcost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypcmcost4 == pcopypcmcost4:\t\t"
              << ((pcopypcmcost4 == pcopypcmcost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopypcmcost4 == pcopypcmcost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypcmcost5 == pcopypcmcost5:\t\t"
              << ((pcopypcmcost5 == pcopypcmcost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopypcmcost5 == pcopypcmcost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypcmcost6 == pcopypcmcost6:\t\t"
              << ((pcopypcmcost6 == pcopypcmcost6) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopypcmcost6 == pcopypcmcost6) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypcmcost7 == pcopypcmcost7:\t\t"
              << ((pcopypcmcost7 == pcopypcmcost7) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopypcmcost7 == pcopypcmcost7) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl << std::endl;

    std::cout << "Check that a Constrained Multiplicative Cost object equals a copy, but that" << std::endl
              << "the addresses of a Constrained Multiplicative Cost object and a copy differ:" << std::endl;
    std::cout << "cmcost0 == copycmcost0:\t\t\t"
              << ((cmcost0 == copycmcost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((cmcost0 == copycmcost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&cmcost0 == &copycmcost0:\t\t"
              << ((&cmcost0 == &copycmcost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&cmcost0 == &copycmcost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cmcost0 == *pcopycmcost0:\t\t"
              << ((cmcost0 == *pcopycmcost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((cmcost0 == *pcopycmcost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&cmcost0 == pcopycmcost0:\t\t"
              << ((&cmcost0 == pcopycmcost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&cmcost0 == pcopycmcost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cmcost1 == copycmcost1:\t\t\t"
              << ((cmcost1 == copycmcost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((cmcost1 == copycmcost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&cmcost1 == &copycmcost1:\t\t"
              << ((&cmcost1 == &copycmcost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&cmcost1 == &copycmcost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cmcost1 == *pcopycmcost1:\t\t"
              << ((cmcost1 == *pcopycmcost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((cmcost1 == *pcopycmcost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&cmcost1 == pcopycmcost1:\t\t"
              << ((&cmcost1 == pcopycmcost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&cmcost1 == pcopycmcost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cmcost2 == copycmcost2:\t\t\t"
              << ((cmcost2 == copycmcost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((cmcost2 == copycmcost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&cmcost2 == &copycmcost2:\t\t"
              << ((&cmcost2 == &copycmcost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&cmcost2 == &copycmcost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cmcost2 == *pcopycmcost2:\t\t"
              << ((cmcost2 == *pcopycmcost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((cmcost2 == *pcopycmcost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&cmcost2 == pcopycmcost2:\t\t"
              << ((&cmcost2 == pcopycmcost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&cmcost2 == pcopycmcost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cmcost3 == copycmcost3:\t\t\t"
              << ((cmcost3 == copycmcost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((cmcost3 == copycmcost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&cmcost3 == &copycmcost3:\t\t"
              << ((&cmcost3 == &copycmcost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&cmcost3 == &copycmcost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cmcost3 == *pcopycmcost3:\t\t"
              << ((cmcost3 == *pcopycmcost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((cmcost3 == *pcopycmcost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&cmcost3 == pcopycmcost3:\t\t"
              << ((&cmcost3 == pcopycmcost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&cmcost2 == pcopycmcost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcmcost4 == copypcmcost4:\t\t"
              << ((*pcmcost4 == copypcmcost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcmcost4 == copypcmcost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcmcost4 == &copypcmcost4:\t\t"
              << ((pcmcost4 == &copypcmcost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pcmcost4 == &copypcmcost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcmcost4 == *pcopypcmcost4:\t\t"
              << ((*pcmcost4 == *pcopypcmcost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcmcost4 == *pcopypcmcost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcmcost4 == pcopypcmcost4:\t\t"
              << ((pcmcost4 == pcopypcmcost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pcmcost4 == pcopypcmcost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcmcost5 == copypcmcost5:\t\t"
              << ((*pcmcost5 == copypcmcost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcmcost5 == copypcmcost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcmcost5 == &copypcmcost5:\t\t"
              << ((pcmcost5 == &copypcmcost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pcmcost5 == &copypcmcost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcmcost5 == *pcopypcmcost5:\t\t"
              << ((*pcmcost5 == *pcopypcmcost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcmcost5 == *pcopypcmcost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcmcost5 == pcopypcmcost5:\t\t"
              << ((pcmcost5 == pcopypcmcost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pcmcost5 == pcopypcmcost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcmcost6 == copypcmcost6:\t\t"
              << ((*pcmcost6 == copypcmcost6) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcmcost6 == copypcmcost6) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcmcost6 == &copypcmcost6:\t\t"
              << ((pcmcost6 == &copypcmcost6) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pcmcost6 == &copypcmcost6) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcmcost6 == *pcopypcmcost6:\t\t"
              << ((*pcmcost6 == *pcopypcmcost6) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcmcost6 == *pcopypcmcost6) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcmcost6 == pcopypcmcost6:\t\t"
              << ((pcmcost6 == pcopypcmcost6) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pcmcost6 == pcopypcmcost6) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcmcost7 == copypcmcost7:\t\t"
              << ((*pcmcost7 == copypcmcost7) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcmcost7 == copypcmcost7) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcmcost7 == &copypcmcost7:\t\t"
              << ((pcmcost7 == &copypcmcost7) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pcmcost7 == &copypcmcost7) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcmcost7 == *pcopypcmcost7:\t\t"
              << ((*pcmcost7 == *pcopypcmcost7) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcmcost7 == *pcopypcmcost7) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcmcost7 == pcopypcmcost7:\t\t"
              << ((pcmcost7 == pcopypcmcost7) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pcmcost7 == pcopypcmcost7) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl << std::endl;

    std::cout << "Spot check that different Constrained Multiplicative Cost objects are not equal:" << std::endl;
    std::cout << "cmcost0 == cmcost1:\t\t\t"
              << ((cmcost0 == cmcost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(cmcost0 == cmcost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cmcost0 == cmcost2:\t\t\t"
              << ((cmcost0 == cmcost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(cmcost0 == cmcost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cmcost0 == cmcost3:\t\t\t"
              << ((cmcost0 == cmcost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(cmcost0 == cmcost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cmcost1 == cmcost2:\t\t\t"
              << ((cmcost1 == cmcost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(cmcost1 == cmcost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cmcost1 == cmcost3:\t\t\t"
              << ((cmcost1 == cmcost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(cmcost1 == cmcost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cmcost2 == cmcost3:\t\t\t"
              << ((cmcost2 == cmcost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(cmcost2 == cmcost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;

    /* Test operator* */

    ConstrainedMultiplicativeCost *constrainedProductCost;
    std::cout << std::endl
              << "Testing operator*:" << std::endl
              << std::endl;

    std::cout << "cmcost0*cmcost0:\t\t\t"
              << (cmcost0*cmcost0)->toString()
              << "\t\tCorrect output: "
              << INVALID_COST->toString()
              << ((cmcost0*cmcost0 == INVALID_COST) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "cmcost0*copycmcost0:\t\t\t"
              << (cmcost0*copycmcost0)->toString()
              << "\t\tCorrect output: "
              << (cmcost0*cmcost0)->toString()
              << ((cmcost0*copycmcost0 == cmcost0*cmcost0) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "cmcost0*(*pcopycmcost0):\t\t"
              << (cmcost0*(*pcopycmcost0))->toString()
              << "\t\tCorrect output: "
              << (cmcost0*cmcost0)->toString()
              << ((cmcost0*(*pcopycmcost0) == cmcost0*cmcost0) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "cmcost1*cmcost1:\t\t\t"
              << (cmcost1*cmcost1)->toString()
              << "\t\tCorrect output: "
              << INVALID_COST->toString()
              << ((cmcost1*cmcost1 == INVALID_COST) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "cmcost1*copycmcost1:\t\t\t"
              << (cmcost1*copycmcost1)->toString()
              << "\t\tCorrect output: "
              << (cmcost1*cmcost1)->toString()
              << ((cmcost1*copycmcost1 == cmcost1*cmcost1) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "cmcost1*(*pcopycmcost1):\t\t"
              << (cmcost1*(*pcopycmcost1))->toString()
              << "\t\tCorrect output: "
              << (cmcost1*cmcost1)->toString()
              << ((cmcost1*(*pcopycmcost1) == cmcost1*cmcost1) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "cmcost2*cmcost2:\t\t\t"
              << (cmcost2*cmcost2)->toString()
              << "\t\tCorrect output: "
              << INVALID_COST->toString()
              << ((cmcost2*cmcost2 == INVALID_COST) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "cmcost2*copycmcost2:\t\t\t"
              << (cmcost2*copycmcost2)->toString()
              << "\t\tCorrect output: "
              << (cmcost2*cmcost2)->toString()
              << ((cmcost2*copycmcost2 == cmcost2*cmcost2) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "cmcost2*(*pcopycmcost2):\t\t"
              << (cmcost2*(*pcopycmcost2))->toString()
              << "\t\tCorrect output: "
              << (cmcost2*cmcost2)->toString()
              << ((cmcost2*(*pcopycmcost2) == cmcost2*cmcost2) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    constrainedProductCost = new ConstrainedMultiplicativeCost(cmcost3.getCost()*cmcost3.getCost(),cmcost3.getUnits(),cmcost3.getConstraint());
    std::cout << "cmcost3*cmcost3:\t\t\t"
              << (cmcost3*cmcost3)->toString()
              << "Correct output: "
              << constrainedProductCost->toString()
              << ((*(cmcost3*cmcost3) == *constrainedProductCost) ? "OK" : "TEST FAILED")
              << std::endl;
    delete constrainedProductCost;
    std::cout << "cmcost3*copycmcost3:\t\t\t"
              << (cmcost3*copycmcost3)->toString()
              << "Correct output: "
              << (cmcost3*cmcost3)->toString()
              << ((*(cmcost3*copycmcost3) == *(cmcost3*cmcost3)) ? "OK" : "TEST FAILED")
              << std::endl;
    std::cout << "cmcost3*(*pcopycmcost3):\t\t"
              << (cmcost3*(*pcopycmcost3))->toString()
              << "Correct output: "
              << (cmcost3*cmcost3)->toString()
              << ((*(cmcost3*(*pcopycmcost3)) == *(cmcost3*cmcost3)) ? "OK" : "TEST FAILED")
              << std::endl;
    std::cout << "(*pcmcost4)*(*pcmcost4):\t\t"
              << ((*pcmcost4)*(*pcmcost4))->toString()
              << "\t\tCorrect output: "
              << INVALID_COST->toString()
              << (((*pcmcost4)*(*pcmcost4) == INVALID_COST) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pcmcost4)*copypcmcost4:\t\t"
              << ((*pcmcost4)*copypcmcost4)->toString()
              << "\t\tCorrect output: "
              << ((*pcmcost4)*(*pcmcost4))->toString()
              << (((*pcmcost4)*copypcmcost4 == (*pcmcost4)*(*pcmcost4)) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pcmcost4)*(*pcopypcmcost4):\t\t"
              << ((*pcmcost4)*(*pcopypcmcost4))->toString()
              << "\t\tCorrect output: "
              << ((*pcmcost4)*(*pcmcost4))->toString()
              << (((*pcmcost4)*(*pcopypcmcost4) == (*pcmcost4)*(*pcmcost4)) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pcmcost5)*(*pcmcost5):\t\t"
              << ((*pcmcost5)*(*pcmcost5))->toString()
              << "\t\tCorrect output: "
              << INVALID_COST->toString()
              << (((*pcmcost5)*(*pcmcost5) == INVALID_COST) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pcmcost5)*copypcmcost5:\t\t"
              << ((*pcmcost5)*copypcmcost5)->toString()
              << "\t\tCorrect output: "
              << ((*pcmcost5)*(*pcmcost5))->toString()
              << (((*pcmcost5)*copypcmcost5 == (*pcmcost5)*(*pcmcost5)) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pcmcost5)*(*pcopypcmcost5):\t\t"
              << ((*pcmcost5)*(*pcopypcmcost5))->toString()
              << "\t\tCorrect output: "
              << ((*pcmcost5)*(*pcmcost5))->toString()
              << (((*pcmcost5)*(*pcopypcmcost5) == (*pcmcost5)*(*pcmcost5)) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pcmcost6)*(*pcmcost6):\t\t"
              << ((*pcmcost6)*(*pcmcost6))->toString()
              << "\t\tCorrect output: "
              << INVALID_COST->toString()
              << (((*pcmcost6)*(*pcmcost6) == INVALID_COST) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pcmcost6)*copypcmcost6:\t\t"
              << ((*pcmcost6)*copypcmcost6)->toString()
              << "\t\tCorrect output: "
              << ((*pcmcost6)*(*pcmcost6))->toString()
              << (((*pcmcost6)*copypcmcost6 == (*pcmcost6)*(*pcmcost6)) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pcmcost6)*(*pcopypcmcost6):\t\t"
              << ((*pcmcost6)*(*pcopypcmcost6))->toString()
              << "\t\tCorrect output: "
              << ((*pcmcost6)*(*pcmcost6))->toString()
              << (((*pcmcost6)*(*pcopypcmcost6) == (*pcmcost6)*(*pcmcost6)) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    constrainedProductCost = new ConstrainedMultiplicativeCost(pcmcost7->getCost()*pcmcost7->getCost(),pcmcost7->getUnits(),pcmcost7->getConstraint());
    std::cout << "(*pcmcost7)*(*pcmcost7):\t\t"
              << ((*pcmcost7)*(*pcmcost7))->toString()
              << "Correct output: "
              << constrainedProductCost->toString()
              << ((*((*pcmcost7)*(*pcmcost7)) == *constrainedProductCost) ? "OK" : "TEST FAILED")
              << std::endl;
    delete constrainedProductCost;
    std::cout << "(*pcmcost7)*copypcmcost7:\t\t"
              << ((*pcmcost7)*copypcmcost7)->toString()
              << "Correct output: "
              << ((*pcmcost7)*(*pcmcost7))->toString()
              << ((*((*pcmcost7)*copypcmcost7) == *((*pcmcost7)*(*pcmcost7))) ? "OK" : "TEST FAILED")
              << std::endl;
    std::cout << "(*pcmcost7)*(*pcopypcmcost7):\t\t"
              << ((*pcmcost7)*(*pcopypcmcost7))->toString()
              << "Correct output: "
              << ((*pcmcost7)*(*pcmcost7))->toString()
              << ((*((*pcmcost7)*(*pcopypcmcost7)) == *((*pcmcost7)*(*pcmcost7))) ? "OK" : "TEST FAILED")
              << std::endl << std::endl;

    ConstrainedMultiplicativeCost cmcost3b(10.00, "threes", 27.00);
    std::cout << "ConstrainedMultiplicativeCost cmcost3b(10.00, \"threes\", 27.00);" << std::endl
              << "cmcost3*cmcost3b:\t\t\t"
              << (cmcost3*cmcost3b)->toString()
              << "\t\tCorrect output: "
              << INVALID_COST->toString()
              << ((cmcost3*cmcost3b == INVALID_COST) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;

    /* Test destructor */

    std::cout << std::endl
              << "Testing the destructor:" << std::endl
              << std::endl;

    std::cout << "\tdelete pcmcost4;" << std::endl;
    delete pcmcost4;
    std::cout << "\tdelete pcmcost5;" << std::endl;
    delete pcmcost5;
    std::cout << "\tdelete pcmcost6;" << std::endl;
    delete pcmcost6;
    std::cout << "\tdelete pcmcost7;" << std::endl;
    delete pcmcost7;
    std::cout << "\tdelete pcopycmcost0;" << std::endl;
    delete pcopycmcost0;
    std::cout << "\tdelete pcopycmcost1;" << std::endl;
    delete pcopycmcost1;
    std::cout << "\tdelete pcopycmcost2;" << std::endl;
    delete pcopycmcost2;
    std::cout << "\tdelete pcopycmcost3;" << std::endl;
    delete pcopycmcost3;
    std::cout << "\tdelete pcopypcmcost4;" << std::endl;
    delete pcopypcmcost4;
    std::cout << "\tdelete pcopypcmcost5;" << std::endl;
    delete pcopypcmcost5;
    std::cout << "\tdelete pcopypcmcost6;" << std::endl;
    delete pcopypcmcost6;
    std::cout << "\tdelete pcopypcmcost7;" << std::endl;
    delete pcopypcmcost7;

    std::cout << std::endl;

}

#endif
