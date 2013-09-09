//
//  multiplicativeCostTest.h
//  Pathfinder
//
//  Created by Bradley Denby on 9/8/13.
//  Copyright (c) 2013 Bradley Denby. All rights reserved.
//

#ifndef Pathfinder_multiplicativeCostTest_h
#define Pathfinder_multiplicativeCostTest_h

#include "MultiplicativeCost.h"

void multiplicativeCostTest() {

    /************ Test the MultiplicativeCost class ************/

    std::cout << std::endl
              << "****** Testing the MultiplicativeCost class ******" << std::endl
              << std::endl;

    /* Test the constructors */

    std::cout << "Testing the constructors:" << std::endl
              << std::endl;

    std::cout << "\tMultiplicativeCost mcost0;" << std::endl;
    MultiplicativeCost mcost0;
    std::cout << "\tMultiplicativeCost mcost1(1.00);" << std::endl;
    MultiplicativeCost mcost1(1.00);
    std::cout << "\tMultiplicativeCost mcost2(2.00, \"twos\");" << std::endl;
    MultiplicativeCost mcost2(2.00, "twos");
    std::cout << "\tMultiplicativeCost *pmcost3 = new MultiplicativeCost;" << std::endl;
    MultiplicativeCost *pmcost3 = new MultiplicativeCost;
    std::cout << "\tMultiplicativeCost *pmcost4 = new MultiplicativeCost(4.00);" << std::endl;
    MultiplicativeCost *pmcost4 = new MultiplicativeCost(4.00);
    std::cout << "\tMultiplicativeCost *pmcost5 = new MultiplicativeCost(5.00, \"fives\");" << std::endl;
    MultiplicativeCost *pmcost5 = new MultiplicativeCost(5.00, "fives");

    std::cout << std::endl
              << "\tMultiplicativeCost copymcost0(mcost0);" << std::endl;
    MultiplicativeCost copymcost0(mcost0);
    std::cout << "\tMultiplicativeCost copymcost1(mcost1);" << std::endl;
    MultiplicativeCost copymcost1(mcost1);
    std::cout << "\tMultiplicativeCost copymcost2(mcost2);" << std::endl;
    MultiplicativeCost copymcost2(mcost2);
    std::cout << "\tMultiplicativeCost copypmcost3(*pmcost3);" << std::endl;
    MultiplicativeCost copypmcost3(*pmcost3);
    std::cout << "\tMultiplicativeCost copypmcost4(*pmcost4);" << std::endl;
    MultiplicativeCost copypmcost4(*pmcost4);
    std::cout << "\tMultiplicativeCost copypmcost5(*pmcost5);" << std::endl;
    MultiplicativeCost copypmcost5(*pmcost5);

    std::cout << std::endl
              << "\tMultiplicativeCost *pcopymcost0 = new MultiplicativeCost(mcost0);" << std::endl;
    MultiplicativeCost *pcopymcost0 = new MultiplicativeCost(mcost0);
    std::cout << "\tMultiplicativeCost *pcopymcost1 = new MultiplicativeCost(mcost1);" << std::endl;
    MultiplicativeCost *pcopymcost1 = new MultiplicativeCost(mcost1);
    std::cout << "\tMultiplicativeCost *pcopymcost2 = new MultiplicativeCost(mcost2);" << std::endl;
    MultiplicativeCost *pcopymcost2 = new MultiplicativeCost(mcost2);
    std::cout << "\tMultiplicativeCost *pcopypmcost3 = new MultiplicativeCost(*pmcost3);" << std::endl;
    MultiplicativeCost *pcopypmcost3 = new MultiplicativeCost(*pmcost3);
    std::cout << "\tMultiplicativeCost *pcopypmcost4 = new MultiplicativeCost(*pmcost4);" << std::endl;
    MultiplicativeCost *pcopypmcost4 = new MultiplicativeCost(*pmcost4);
    std::cout << "\tMultiplicativeCost *pcopypmcost5 = new MultiplicativeCost(*pmcost5);" << std::endl;
    MultiplicativeCost *pcopypmcost5 = new MultiplicativeCost(*pmcost5);

    /* Test getCost() */

    std::cout << std::endl
              << "Testing getCost():" << std::endl
              << std::endl;

    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "mcost0.getCost():\t\t\t"
              << mcost0.getCost()
              << "\t\t\tCorrect output: "
              << mcost0.DEFAULT_COST
              << ((mcost0.getCost() == mcost0.DEFAULT_COST) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "mcost1.getCost():\t\t\t"
              << mcost1.getCost()
              << "\t\t\tCorrect output: "
              << 1.00
              << ((mcost1.getCost() == 1.00) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "mcost2.getCost():\t\t\t"
              << mcost2.getCost()
              << "\t\t\tCorrect output: "
              << 2.00
              << ((mcost2.getCost() == 2.00) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pmcost3->getCost():\t\t\t"
              << pmcost3->getCost()
              << "\t\t\tCorrect output: "
              << pmcost3->DEFAULT_COST
              << ((pmcost3->getCost() == pmcost3->DEFAULT_COST) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pmcost4->getCost():\t\t\t"
              << pmcost4->getCost()
              << "\t\t\tCorrect output: "
              << 4.00
              << ((pmcost4->getCost() == 4.00) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pmcost5->getCost():\t\t\t"
              << pmcost5->getCost()
              << "\t\t\tCorrect output: "
              << 5.00
              << ((pmcost5->getCost() == 5.00) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;

    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copymcost0.getCost():\t\t\t"
              << copymcost0.getCost()
              << "\t\t\tCorrect output: "
              << mcost0.getCost()
              << ((copymcost0.getCost() == mcost0.getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copymcost1.getCost():\t\t\t"
              << copymcost1.getCost()
              << "\t\t\tCorrect output: "
              << mcost1.getCost()
              << ((copymcost1.getCost() == mcost1.getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copymcost2.getCost():\t\t\t"
              << copymcost2.getCost()
              << "\t\t\tCorrect output: "
              << mcost2.getCost()
              << ((copymcost2.getCost() == mcost2.getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copypmcost3.getCost():\t\t\t"
              << copypmcost3.getCost()
              << "\t\t\tCorrect output: "
              << pmcost3->getCost()
              << ((copypmcost3.getCost() == pmcost3->getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copypmcost4.getCost():\t\t\t"
              << copypmcost4.getCost()
              << "\t\t\tCorrect output: "
              << pmcost4->getCost()
              << ((copypmcost4.getCost() == pmcost4->getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copypmcost5.getCost():\t\t\t"
              << copypmcost5.getCost()
              << "\t\t\tCorrect output: "
              << pmcost5->getCost()
              << ((copypmcost5.getCost() == pmcost5->getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;

    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopymcost0->getCost():\t\t\t"
              << pcopymcost0->getCost()
              << "\t\t\tCorrect output: "
              << mcost0.getCost()
              << ((pcopymcost0->getCost() == mcost0.getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopymcost1->getCost():\t\t\t"
              << pcopymcost1->getCost()
              << "\t\t\tCorrect output: "
              << mcost1.getCost()
              << ((pcopymcost1->getCost() == mcost1.getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopymcost2->getCost():\t\t\t"
              << pcopymcost2->getCost()
              << "\t\t\tCorrect output: "
              << mcost2.getCost()
              << ((pcopymcost2->getCost() == mcost2.getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopypmcost3->getCost():\t\t"
              << pcopypmcost3->getCost()
              << "\t\t\tCorrect output: "
              << pmcost3->getCost()
              << ((pcopypmcost3->getCost() == pmcost3->getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopypmcost4->getCost():\t\t"
              << pcopypmcost4->getCost()
              << "\t\t\tCorrect output: "
              << pmcost4->getCost()
              << ((pcopypmcost4->getCost() == pmcost4->getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopypmcost5->getCost():\t\t"
              << pcopypmcost5->getCost()
              << "\t\t\tCorrect output: "
              << pmcost5->getCost()
              << ((pcopypmcost5->getCost() == pmcost5->getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;

    /* Test getUnits() */

    std::cout << std::endl
              << "Testing getUnits():" << std::endl
              << std::endl;

    std::cout << "mcost0.getUnits():\t\t\t"
              << mcost0.getUnits()
              << "\t\t\tCorrect output: "
              << mcost0.DEFAULT_UNITS
              << ((mcost0.getUnits() == mcost0.DEFAULT_UNITS) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "mcost1.getUnits():\t\t\t"
              << mcost1.getUnits()
              << "\t\t\tCorrect output: "
              << mcost1.DEFAULT_UNITS
              << ((mcost1.getUnits() == mcost1.DEFAULT_UNITS) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "mcost2.getUnits():\t\t\t"
              << mcost2.getUnits()
              << "\t\t\tCorrect output: "
              << "twos"
              << ((mcost2.getUnits() == "twos") ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pmcost3->getUnits():\t\t\t"
              << pmcost3->getUnits()
              << "\t\t\tCorrect output: "
              << pmcost3->DEFAULT_UNITS
              << ((pmcost3->getUnits() == pmcost3->DEFAULT_UNITS) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pmcost4->getUnits():\t\t\t"
              << pmcost4->getUnits()
              << "\t\t\tCorrect output: "
              << pmcost4->DEFAULT_UNITS
              << ((pmcost4->getUnits() == pmcost4->DEFAULT_UNITS) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pmcost5->getUnits():\t\t\t"
              << pmcost5->getUnits()
              << "\t\t\tCorrect output: "
              << "fives"
              << ((pmcost5->getUnits() == "fives") ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;

    std::cout << "copymcost0.getUnits():\t\t\t"
              << copymcost0.getUnits()
              << "\t\t\tCorrect output: "
              << mcost0.getUnits()
              << ((copymcost0.getUnits() == mcost0.getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copymcost1.getUnits():\t\t\t"
              << copymcost1.getUnits()
              << "\t\t\tCorrect output: "
              << mcost1.getUnits()
              << ((copymcost1.getUnits() == mcost1.getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copymcost2.getUnits():\t\t\t"
              << copymcost2.getUnits()
              << "\t\t\tCorrect output: "
              << mcost2.getUnits()
              << ((copymcost2.getUnits() == mcost2.getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypmcost3.getUnits():\t\t\t"
              << copypmcost3.getUnits()
              << "\t\t\tCorrect output: "
              << pmcost3->getUnits()
              << ((copypmcost3.getUnits() == pmcost3->getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypmcost4.getUnits():\t\t\t"
              << copypmcost4.getUnits()
              << "\t\t\tCorrect output: "
              << pmcost4->getUnits()
              << ((copypmcost4.getUnits() == pmcost4->getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypmcost5.getUnits():\t\t\t"
              << copypmcost5.getUnits()
              << "\t\t\tCorrect output: "
              << pmcost5->getUnits()
              << ((copypmcost5.getUnits() == pmcost5->getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;

    std::cout << "pcopymcost0->getUnits():\t\t"
              << pcopymcost0->getUnits()
              << "\t\t\tCorrect output: "
              << mcost0.getUnits()
              << ((pcopymcost0->getUnits() == mcost0.getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopymcost1->getUnits():\t\t"
              << pcopymcost1->getUnits()
              << "\t\t\tCorrect output: "
              << mcost1.getUnits()
              << ((pcopymcost1->getUnits() == mcost1.getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopymcost2->getUnits():\t\t"
              << pcopymcost2->getUnits()
              << "\t\t\tCorrect output: "
              << mcost2.getUnits()
              << ((pcopymcost2->getUnits() == mcost2.getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypmcost3->getUnits():\t\t"
              << pcopypmcost3->getUnits()
              << "\t\t\tCorrect output: "
              << pmcost3->getUnits()
              << ((pcopypmcost3->getUnits() == pmcost3->getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypmcost4->getUnits():\t\t"
              << pcopypmcost4->getUnits()
              << "\t\t\tCorrect output: "
              << pmcost4->getUnits()
              << ((pcopypmcost4->getUnits() == pmcost4->getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypmcost5->getUnits():\t\t"
              << pcopypmcost5->getUnits()
              << "\t\t\tCorrect output: "
              << pmcost5->getUnits()
              << ((pcopypmcost5->getUnits() == pmcost5->getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;

    /* Test toString() */

    std::stringstream ss;
    ss << std::fixed << std::showpoint << std::setprecision(4);
    std::cout << std::endl
              << "Testing toString():" << std::endl
              << std::endl;

    ss << mcost0.getCost() << " " << mcost0.getUnits();
    std::cout << "mcost0.toString():\t\t\t"
              << mcost0.toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((mcost0.toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << mcost1.getCost() << " " << mcost1.getUnits();
    std::cout << "mcost1.toString():\t\t\t"
              << mcost1.toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((mcost1.toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << mcost2.getCost() << " " << mcost2.getUnits();
    std::cout << "mcost2.toString():\t\t\t"
              << mcost2.toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((mcost2.toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pmcost3->getCost() << " " << pmcost3->getUnits();
    std::cout << "pmcost3->toString():\t\t\t"
              << pmcost3->toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((pmcost3->toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pmcost4->getCost() << " " << pmcost4->getUnits();
    std::cout << "pmcost4->toString():\t\t\t"
              << pmcost4->toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((pmcost4->toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pmcost5->getCost() << " " << pmcost5->getUnits();
    std::cout << "pmcost5->toString():\t\t\t"
              << pmcost5->toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((pmcost5->toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");

    ss << copymcost0.getCost() << " " << copymcost0.getUnits();
    std::cout << "copymcost0.toString():\t\t\t"
              << copymcost0.toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((copymcost0.toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << copymcost1.getCost() << " " << copymcost1.getUnits();
    std::cout << "copymcost1.toString():\t\t\t"
              << copymcost1.toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((copymcost1.toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << copymcost2.getCost() << " " << copymcost2.getUnits();
    std::cout << "copymcost2.toString():\t\t\t"
              << copymcost2.toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((copymcost2.toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << copypmcost3.getCost() << " " << copypmcost3.getUnits();
    std::cout << "copypmcost3.toString():\t\t\t"
              << copypmcost3.toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((copypmcost3.toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << copypmcost4.getCost() << " " << copypmcost4.getUnits();
    std::cout << "copypmcost4.toString():\t\t\t"
              << copypmcost4.toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((copypmcost4.toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << copypmcost5.getCost() << " " << copypmcost5.getUnits();
    std::cout << "copypmcost5.toString():\t\t\t"
              << copypmcost5.toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((copypmcost5.toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");

    ss << pcopymcost0->getCost() << " " << pcopymcost0->getUnits();
    std::cout << "pcopymcost0->toString():\t\t"
              << pcopymcost0->toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((pcopymcost0->toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcopymcost1->getCost() << " " << pcopymcost1->getUnits();
    std::cout << "pcopymcost1->toString():\t\t"
              << pcopymcost1->toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((pcopymcost1->toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcopymcost2->getCost() << " " << pcopymcost2->getUnits();
    std::cout << "pcopymcost2->toString():\t\t"
              << pcopymcost2->toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((pcopymcost2->toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcopypmcost3->getCost() << " " << pcopypmcost3->getUnits();
    std::cout << "pcopypmcost3->toString():\t\t"
              << pcopypmcost3->toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((pcopypmcost3->toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcopypmcost4->getCost() << " " << pcopypmcost4->getUnits();
    std::cout << "pcopypmcost4->toString():\t\t"
              << pcopypmcost4->toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((pcopypmcost4->toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcopypmcost5->getCost() << " " << pcopypmcost5->getUnits();
    std::cout << "pcopypmcost5->toString():\t\t"
              << pcopypmcost5->toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((pcopypmcost5->toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");

    /* Test operator<< */

    std::cout << std::endl
              << "Testing operator<<:" << std::endl
              << std::endl;

    std::cout << "cout << mcost0:\t\t\t\t" << mcost0
              << "\t[Expected:\t\t\t" << mcost0.toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << mcost1:\t\t\t\t" << mcost1
              << "\t[Expected:\t\t\t" << mcost1.toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << mcost2:\t\t\t\t" << mcost2
              << "\t[Expected:\t\t\t" << mcost2.toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << pmcost3:\t\t\t" << *pmcost3
              << "\t[Expected:\t\t\t" << pmcost3->toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << pmcost4:\t\t\t" << *pmcost4
              << "\t[Expected:\t\t\t" << pmcost4->toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << pmcost5:\t\t\t" << *pmcost5
              << "\t[Expected:\t\t\t" << pmcost5->toString() << "\t\t]"
              << std::endl << std::endl;

    std::cout << "cout << copymcost0:\t\t\t" << copymcost0
              << "\t[Expected:\t\t\t" << copymcost0.toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << copymcost1:\t\t\t" << copymcost1
              << "\t[Expected:\t\t\t" << copymcost1.toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << copymcost2:\t\t\t" << copymcost2
              << "\t[Expected:\t\t\t" << copymcost2.toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << copypmcost3:\t\t\t" << copypmcost3
              << "\t[Expected:\t\t\t" << copypmcost3.toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << copypmcost4:\t\t\t" << copypmcost4
              << "\t[Expected:\t\t\t" << copypmcost4.toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << copypmcost5:\t\t\t" << copypmcost5
              << "\t[Expected:\t\t\t" << copypmcost5.toString() << "\t\t]"
              << std::endl << std::endl;

    std::cout << "cout << *pcopymcost0:\t\t\t" << *pcopymcost0
              << "\t[Expected:\t\t\t" << pcopymcost0->toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << *pcopymcost1:\t\t\t" << *pcopymcost1
              << "\t[Expected:\t\t\t" << pcopymcost1->toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << *pcopymcost2:\t\t\t" << *pcopymcost2
              << "\t[Expected:\t\t\t" << pcopymcost2->toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << *pcopypmcost3:\t\t\t" << *pcopypmcost3
              << "\t[Expected:\t\t\t" << pcopypmcost3->toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << *pcopypmcost4:\t\t\t" << *pcopypmcost4
              << "\t[Expected:\t\t\t" << pcopypmcost4->toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << *pcopypmcost5:\t\t\t" << *pcopypmcost5
              << "\t[Expected:\t\t\t" << pcopypmcost5->toString() << "\t\t]"
              << std::endl;

    /* Test operator== */

    std::cout << std::endl
              << "Testing operator==:" << std::endl
              << std::endl;

    std::cout << "Check that a Multiplicative Cost object equals itself:" << std::endl;
    std::cout << "mcost0 == mcost0:\t\t\t"
              << ((mcost0 == mcost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((mcost0 == mcost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "mcost1 == mcost1:\t\t\t"
              << ((mcost1 == mcost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((mcost1 == mcost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "mcost2 == mcost2:\t\t\t"
              << ((mcost2 == mcost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((mcost2 == mcost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pmcost3 == *pmcost3:\t\t\t"
              << ((*pmcost3 == *pmcost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pmcost3 == *pmcost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pmcost4 == *pmcost4:\t\t\t"
              << ((*pmcost4 == *pmcost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pmcost4 == *pmcost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pmcost5 == *pmcost5:\t\t\t"
              << ((*pmcost5 == *pmcost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pmcost5 == *pmcost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copymcost0 == copymcost0:\t\t"
              << ((copymcost0 == copymcost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copymcost0 == copymcost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copymcost1 == copymcost1:\t\t"
              << ((copymcost1 == copymcost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copymcost1 == copymcost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copymcost2 == copymcost2:\t\t"
              << ((copymcost2 == copymcost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copymcost2 == copymcost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypmcost3 == copypmcost3:\t\t"
              << ((copypmcost3 == copypmcost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copypmcost3 == copypmcost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypmcost4 == copypmcost4:\t\t"
              << ((copypmcost4 == copypmcost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copypmcost4 == copypmcost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypmcost5 == copypmcost5:\t\t"
              << ((copypmcost5 == copypmcost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copypmcost5 == copypmcost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopymcost0 == *pcopymcost0:\t\t"
              << ((*pcopymcost0 == *pcopymcost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopymcost0 == *pcopymcost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopymcost1 == *pcopymcost1:\t\t"
              << ((*pcopymcost1 == *pcopymcost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopymcost1 == *pcopymcost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopymcost2 == *pcopymcost2:\t\t"
              << ((*pcopymcost2 == *pcopymcost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopymcost2 == *pcopymcost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopypmcost3 == *pcopypmcost3:\t\t"
              << ((*pcopypmcost3 == *pcopypmcost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopypmcost3 == *pcopypmcost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopypmcost4 == *pcopypmcost4:\t\t"
              << ((*pcopypmcost4 == *pcopypmcost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopypmcost4 == *pcopypmcost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopypmcost5 == *pcopypmcost5:\t\t"
              << ((*pcopypmcost5 == *pcopypmcost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopypmcost5 == *pcopypmcost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl << std::endl;

    std::cout << "Check that the address of a Multiplicative Cost object equals its own address:" << std::endl;
    std::cout << "&mcost0 == &mcost0:\t\t\t"
              << ((&mcost0 == &mcost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&mcost0 == &mcost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&mcost1 == &mcost1:\t\t\t"
              << ((&mcost1 == &mcost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&mcost1 == &mcost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&mcost2 == &mcost2:\t\t\t"
              << ((&mcost2 == &mcost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&mcost2 == &mcost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pmcost3 == pmcost3:\t\t\t"
              << ((pmcost3 == pmcost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pmcost3 == pmcost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pmcost4 == pmcost4:\t\t\t"
              << ((pmcost4 == pmcost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pmcost4 == pmcost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pmcost5 == pmcost5:\t\t\t"
              << ((pmcost5 == pmcost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pmcost5 == pmcost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copymcost0 == &copymcost0:\t\t"
              << ((&copymcost0 == &copymcost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copymcost0 == &copymcost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copymcost1 == &copymcost1:\t\t"
              << ((&copymcost1 == &copymcost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copymcost1 == &copymcost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copymcost2 == &copymcost2:\t\t"
              << ((&copymcost2 == &copymcost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copymcost2 == &copymcost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copypmcost3 == &copypmcost3:\t\t"
              << ((&copypmcost3 == &copypmcost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copypmcost3 == &copypmcost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copypmcost4 == &copypmcost4:\t\t"
              << ((&copypmcost4 == &copypmcost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copypmcost4 == &copypmcost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copypmcost5 == &copypmcost5:\t\t"
              << ((&copypmcost5 == &copypmcost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copypmcost5 == &copypmcost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopymcost0 == pcopymcost0:\t\t"
              << ((pcopymcost0 == pcopymcost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopymcost0 == pcopymcost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopymcost1 == pcopymcost1:\t\t"
              << ((pcopymcost1 == pcopymcost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopymcost1 == pcopymcost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopymcost2 == pcopymcost2:\t\t"
              << ((pcopymcost2 == pcopymcost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopymcost2 == pcopymcost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypmcost3 == pcopypmcost3:\t\t"
              << ((pcopypmcost3 == pcopypmcost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopypmcost3 == pcopypmcost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypmcost4 == pcopypmcost4:\t\t"
              << ((pcopypmcost4 == pcopypmcost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopypmcost4 == pcopypmcost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypmcost5 == pcopypmcost5:\t\t"
              << ((pcopypmcost5 == pcopypmcost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopypmcost5 == pcopypmcost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl << std::endl;

    std::cout << "Check that a Multiplicative Cost object equals a copy, but that" << std::endl
              << "the addresses of a Multiplicative Cost object and a copy differ:" << std::endl;
    std::cout << "mcost0 == copymcost0:\t\t\t"
              << ((mcost0 == copymcost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((mcost0 == copymcost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&mcost0 == &copymcost0:\t\t\t"
              << ((&mcost0 == &copymcost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&mcost0 == &copymcost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "mcost0 == *pcopymcost0:\t\t\t"
              << ((mcost0 == *pcopymcost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((mcost0 == *pcopymcost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&mcost0 == pcopymcost0:\t\t\t"
              << ((&mcost0 == pcopymcost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&mcost0 == pcopymcost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "mcost1 == copymcost1:\t\t\t"
              << ((mcost1 == copymcost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((mcost1 == copymcost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&mcost1 == &copymcost1:\t\t\t"
              << ((&mcost1 == &copymcost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&mcost1 == &copymcost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "mcost1 == *pcopymcost1:\t\t\t"
              << ((mcost1 == *pcopymcost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((mcost1 == *pcopymcost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&mcost1 == pcopymcost1:\t\t\t"
              << ((&mcost1 == pcopymcost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&mcost1 == pcopymcost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "mcost2 == copymcost2:\t\t\t"
              << ((mcost2 == copymcost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((mcost2 == copymcost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&mcost2 == &copymcost2:\t\t\t"
              << ((&mcost2 == &copymcost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&mcost2 == &copymcost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "mcost2 == *pcopymcost2:\t\t\t"
              << ((mcost2 == *pcopymcost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((mcost2 == *pcopymcost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&mcost2 == pcopymcost2:\t\t\t"
              << ((&mcost2 == pcopymcost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&mcost2 == pcopymcost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pmcost3 == copypmcost3:\t\t"
              << ((*pmcost3 == copypmcost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pmcost3 == copypmcost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pmcost3 == &copypmcost3:\t\t"
              << ((pmcost3 == &copypmcost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pmcost3 == &copypmcost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pmcost3 == *pcopypmcost3:\t\t"
              << ((*pmcost3 == *pcopypmcost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pmcost3 == *pcopypmcost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pmcost3 == pcopypmcost3:\t\t"
              << ((pmcost3 == pcopypmcost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pmcost3 == pcopypmcost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pmcost4 == copypmcost4:\t\t"
              << ((*pmcost4 == copypmcost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pmcost4 == copypmcost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pmcost4 == &copypmcost4:\t\t"
              << ((pmcost4 == &copypmcost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pmcost4 == &copypmcost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pmcost4 == *pcopypmcost4:\t\t"
              << ((*pmcost4 == *pcopypmcost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pmcost4 == *pcopypmcost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pmcost4 == pcopypmcost4:\t\t"
              << ((pmcost4 == pcopypmcost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pmcost4 == pcopypmcost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pmcost5 == copypmcost5:\t\t"
              << ((*pmcost5 == copypmcost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pmcost5 == copypmcost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pmcost5 == &copypmcost5:\t\t"
              << ((pmcost5 == &copypmcost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pmcost5 == &copypmcost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pmcost5 == *pcopypmcost5:\t\t"
              << ((*pmcost5 == *pcopypmcost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pmcost5 == *pcopypmcost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pmcost5 == pcopypmcost5:\t\t"
              << ((pmcost5 == pcopypmcost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pmcost5 == pcopypmcost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl << std::endl;

    std::cout << "Spot check that different Multiplicative Cost objects are not equal:" << std::endl;
    std::cout << "mcost0 == mcost1:\t\t\t"
              << ((mcost0 == mcost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(mcost0 == mcost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "mcost0 == mcost2:\t\t\t"
              << ((mcost0 == mcost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(mcost0 == mcost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "mcost1 == mcost2:\t\t\t"
              << ((mcost1 == mcost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(mcost1 == mcost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;

    /* Test operator* */

    MultiplicativeCost *productCost;
    std::cout << std::endl
              << "Testing operator*:" << std::endl
              << std::endl;

    productCost = new MultiplicativeCost(mcost0.DEFAULT_COST*mcost0.DEFAULT_COST,mcost0.DEFAULT_UNITS);
    std::cout << "mcost0*mcost0:\t\t\t\t"
              << (mcost0*mcost0)->toString()
              << "\t\tCorrect output: "
              << productCost->toString()
              << ((*(mcost0*mcost0) == *productCost) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    delete productCost;
    std::cout << "mcost0*copymcost0:\t\t\t"
              << (mcost0*copymcost0)->toString()
              << "\t\tCorrect output: "
              << (mcost0*mcost0)->toString()
              << ((*(mcost0*copymcost0) == *(mcost0*mcost0)) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "mcost0*(*pcopymcost0):\t\t\t"
              << (mcost0*(*pcopymcost0))->toString()
              << "\t\tCorrect output: "
              << (mcost0*mcost0)->toString()
              << ((*(mcost0*(*pcopymcost0)) == *(mcost0*mcost0)) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    productCost = new MultiplicativeCost(mcost1.getCost()*mcost1.getCost(),mcost1.getUnits());
    std::cout << "mcost1*mcost1:\t\t\t\t"
              << (mcost1*mcost1)->toString()
              << "\t\tCorrect output: "
              << productCost->toString()
              << ((*(mcost1*mcost1) == *productCost) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    delete productCost;
    std::cout << "mcost1*copymcost1:\t\t\t"
              << (mcost1*copymcost1)->toString()
              << "\t\tCorrect output: "
              << (mcost1*mcost1)->toString()
              << ((*(mcost1*copymcost1) == *(mcost1*mcost1)) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "mcost1*(*pcopymcost1):\t\t\t"
              << (mcost1*(*pcopymcost1))->toString()
              << "\t\tCorrect output: "
              << (mcost1*mcost1)->toString()
              << ((*(mcost1*(*pcopymcost1)) == *(mcost1*mcost1)) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    productCost = new MultiplicativeCost(mcost2.getCost()*mcost2.getCost(),mcost2.getUnits());
    std::cout << "mcost2*mcost2:\t\t\t\t"
              << (mcost2*mcost2)->toString()
              << "\t\tCorrect output: "
              << productCost->toString()
              << ((*(mcost2*mcost2) == *productCost) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    delete productCost;
    std::cout << "mcost2*copymcost2:\t\t\t"
              << (mcost2*copymcost2)->toString()
              << "\t\tCorrect output: "
              << (mcost2*mcost2)->toString()
              << ((*(mcost2*copymcost2) == *(mcost2*mcost2)) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "mcost2*(*pcopymcost2):\t\t\t"
              << (mcost2*(*pcopymcost2))->toString()
              << "\t\tCorrect output: "
              << (mcost2*mcost2)->toString()
              << ((*(mcost2*(*pcopymcost2)) == *(mcost2*mcost2)) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    productCost = new MultiplicativeCost(pmcost3->getCost()*pmcost3->getCost(),pmcost3->getUnits());
    std::cout << "(*pmcost3)*(*pmcost3):\t\t\t"
              << ((*pmcost3)*(*pmcost3))->toString()
              << "\t\tCorrect output: "
              << productCost->toString()
              << ((*((*pmcost3)*(*pmcost3)) == *productCost) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    delete productCost;
    std::cout << "(*pmcost3)*copypmcost3:\t\t\t"
              << ((*pmcost3)*copypmcost3)->toString()
              << "\t\tCorrect output: "
              << ((*pmcost3)*(*pmcost3))->toString()
              << ((*((*pmcost3)*copypmcost3) == *((*pmcost3)*(*pmcost3))) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pmcost3)*(*pcopypmcost3):\t\t"
              << ((*pmcost3)*(*pcopypmcost3))->toString()
              << "\t\tCorrect output: "
              << ((*pmcost3)*(*pmcost3))->toString()
              << ((*((*pmcost3)*(*pcopypmcost3)) == *((*pmcost3)*(*pmcost3))) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    productCost = new MultiplicativeCost(pmcost4->getCost()*pmcost4->getCost(),pmcost4->getUnits());
    std::cout << "(*pmcost4)*(*pmcost4):\t\t\t"
              << ((*pmcost4)*(*pmcost4))->toString()
              << "\t\tCorrect output: "
              << productCost->toString()
              << ((*((*pmcost4)*(*pmcost4)) == *productCost) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    delete productCost;
    std::cout << "(*pmcost4)*copypmcost4:\t\t\t"
              << ((*pmcost4)*copypmcost4)->toString()
              << "\t\tCorrect output: "
              << ((*pmcost4)*(*pmcost4))->toString()
              << ((*((*pmcost4)*copypmcost4) == *((*pmcost4)*(*pmcost4))) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pmcost4)*(*pcopypmcost4):\t\t"
              << ((*pmcost4)*(*pcopypmcost4))->toString()
              << "\t\tCorrect output: "
              << ((*pmcost4)*(*pmcost4))->toString()
              << ((*((*pmcost4)*(*pcopypmcost4)) == *((*pmcost4)*(*pmcost4))) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    productCost = new MultiplicativeCost(pmcost5->getCost()*pmcost5->getCost(),pmcost5->getUnits());
    std::cout << "(*pmcost5)*(*pmcost5):\t\t\t"
              << ((*pmcost5)*(*pmcost5))->toString()
              << "\t\tCorrect output: "
              << productCost->toString()
              << ((*((*pmcost5)*(*pmcost5)) == *productCost) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    delete productCost;
    std::cout << "(*pmcost5)*copypmcost5:\t\t\t"
              << ((*pmcost5)*copypmcost5)->toString()
              << "\t\tCorrect output: "
              << ((*pmcost5)*(*pmcost5))->toString()
              << ((*((*pmcost5)*copypmcost5) == *((*pmcost5)*(*pmcost5))) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pmcost5)*(*pcopypmcost5):\t\t"
              << ((*pmcost5)*(*pcopypmcost5))->toString()
              << "\t\tCorrect output: "
              << ((*pmcost5)*(*pmcost5))->toString()
              << ((*((*pmcost5)*(*pcopypmcost5)) == *((*pmcost5)*(*pmcost5))) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl << std::endl;

    productCost = new MultiplicativeCost(mcost0.getCost()*mcost1.getCost(),mcost0.getUnits());
    std::cout << "mcost0*mcost1:\t\t\t\t"
              << (mcost0*mcost1)->toString()
              << "\t\tCorrect output: "
              << productCost->toString()
              << ((*(mcost0*mcost1) == *productCost) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    delete productCost;
    productCost = new MultiplicativeCost(mcost0.getCost()*mcost2.getCost(),mcost0.getUnits());
    std::cout << "mcost0*mcost2:\t\t\t\t"
              << (mcost0*mcost2)->toString()
              << "\t\tCorrect output: "
              << productCost->toString()
              << ((*(mcost0*mcost2) == *productCost) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    delete productCost;
    productCost = new MultiplicativeCost(mcost1.getCost()*mcost2.getCost(),mcost1.getUnits());
    std::cout << "mcost1*mcost2:\t\t\t\t"
              << (mcost1*mcost2)->toString()
              << "\t\tCorrect output: "
              << productCost->toString()
              << ((*(mcost1*mcost2) == *productCost) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    delete productCost;

    /* Test destructor */

    std::cout << std::endl
              << "Testing the destructor:" << std::endl
              << std::endl;

    std::cout << "\tdelete pmcost3;" << std::endl;
    delete pmcost3;
    std::cout << "\tdelete pmcost4;" << std::endl;
    delete pmcost4;
    std::cout << "\tdelete pmcost5;" << std::endl;
    delete pmcost5;
    std::cout << "\tdelete pcopymcost0;" << std::endl;
    delete pcopymcost0;
    std::cout << "\tdelete pcopymcost1;" << std::endl;
    delete pcopymcost1;
    std::cout << "\tdelete pcopymcost2;" << std::endl;
    delete pcopymcost2;
    std::cout << "\tdelete pcopypmcost3;" << std::endl;
    delete pcopypmcost3;
    std::cout << "\tdelete pcopypmcost4;" << std::endl;
    delete pcopypmcost4;
    std::cout << "\tdelete pcopypmcost5;" << std::endl;
    delete pcopypmcost5;

    std::cout << std::endl;

}


#endif
