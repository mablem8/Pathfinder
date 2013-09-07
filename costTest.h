//
//  costTest.h
//  Pathfinder
//
//  Created by Bradley Denby on 8/1/13.
//  Copyright (c) 2013 Bradley Denby. All rights reserved.
//

#ifndef Pathfinder_costTest_h
#define Pathfinder_costTest_h

#include "Cost.h"

void costTest() {
    
    /************ Test the Cost class ************/
    
    std::cout << std::endl
              << "****** Testing the Cost class ******" << std::endl
              << std::endl;
    
    /* Test the constructors */
    
    std::cout << "Testing the constructors:" << std::endl
              << std::endl;
    
    std::cout << "\tCost cost0;" << std::endl;
    Cost cost0;
    std::cout << "\tCost cost1(1.00);" << std::endl;
    Cost cost1(1.00);
    std::cout << "\tCost cost2(2.00, \"twos\");" << std::endl;
    Cost cost2(2.00, "twos");
    std::cout << "\tCost *pcost3 = new Cost;" << std::endl;
    Cost *pcost3 = new Cost;
    std::cout << "\tCost *pcost4 = new Cost(4.00);" << std::endl;
    Cost *pcost4 = new Cost(4.00);
    std::cout << "\tCost *pcost5 = new Cost(5.00, \"fives\");" << std::endl;
    Cost *pcost5 = new Cost(5.00, "fives");
    
    std::cout << std::endl
              << "\tCost copycost0(cost0);" << std::endl;
    Cost copycost0(cost0);
    std::cout << "\tCost copycost1(cost1);" << std::endl;
    Cost copycost1(cost1);
    std::cout << "\tCost copycost2(cost2);" << std::endl;
    Cost copycost2(cost2);
    std::cout << "\tCost copypcost3(*pcost3);" << std::endl;
    Cost copypcost3(*pcost3);
    std::cout << "\tCost copypcost4(*pcost4);" << std::endl;
    Cost copypcost4(*pcost4);
    std::cout << "\tCost copypcost5(*pcost5);" << std::endl;
    Cost copypcost5(*pcost5);
    
    std::cout << std::endl
              << "\tCost *pcopycost0 = new Cost(cost0);" << std::endl;
    Cost *pcopycost0 = new Cost(cost0);
    std::cout << "\tCost *pcopycost1 = new Cost(cost1);" << std::endl;
    Cost *pcopycost1 = new Cost(cost1);
    std::cout << "\tCost *pcopycost2 = new Cost(cost2);" << std::endl;
    Cost *pcopycost2 = new Cost(cost2);
    std::cout << "\tCost *pcopypcost3 = new Cost(*pcost3);" << std::endl;
    Cost *pcopypcost3 = new Cost(*pcost3);
    std::cout << "\tCost *pcopypcost4 = new Cost(*pcost4);" << std::endl;
    Cost *pcopypcost4 = new Cost(*pcost4);
    std::cout << "\tCost *pcopypcost5 = new Cost(*pcost5);" << std::endl;
    Cost *pcopypcost5 = new Cost(*pcost5);

    /* Test getCost() */
    
    std::cout << std::endl
              << "Testing getCost():" << std::endl
              << std::endl;
    
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "cost0.getCost():\t\t\t"
              << cost0.getCost()
              << "\t\t\tCorrect output: "
              << cost0.DEFAULT_COST
              << ((cost0.getCost() == cost0.DEFAULT_COST) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "cost1.getCost():\t\t\t"
              << cost1.getCost()
              << "\t\t\tCorrect output: "
              << 1.00
              << ((cost1.getCost() == 1.00) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "cost2.getCost():\t\t\t"
              << cost2.getCost()
              << "\t\t\tCorrect output: "
              << 2.00
              << ((cost2.getCost() == 2.00) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcost3->getCost():\t\t\t"
              << pcost3->getCost()
              << "\t\t\tCorrect output: "
              << pcost3->DEFAULT_COST
              << ((pcost3->getCost() == pcost3->DEFAULT_COST) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcost4->getCost():\t\t\t"
              << pcost4->getCost()
              << "\t\t\tCorrect output: "
              << 4.00
              << ((pcost4->getCost() == 4.00) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcost5->getCost():\t\t\t"
              << pcost5->getCost()
              << "\t\t\tCorrect output: "
              << 5.00
              << ((pcost5->getCost() == 5.00) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copycost0.getCost():\t\t\t"
              << copycost0.getCost()
              << "\t\t\tCorrect output: "
              << cost0.getCost()
              << ((copycost0.getCost() == cost0.getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copycost1.getCost():\t\t\t"
              << copycost1.getCost()
              << "\t\t\tCorrect output: "
              << cost1.getCost()
              << ((copycost1.getCost() == cost1.getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copycost2.getCost():\t\t\t"
              << copycost2.getCost()
              << "\t\t\tCorrect output: "
              << cost2.getCost()
              << ((copycost2.getCost() == cost2.getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copypcost3.getCost():\t\t\t"
              << copypcost3.getCost()
              << "\t\t\tCorrect output: "
              << pcost3->getCost()
              << ((copypcost3.getCost() == pcost3->getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copypcost4.getCost():\t\t\t"
              << copypcost4.getCost()
              << "\t\t\tCorrect output: "
              << pcost4->getCost()
              << ((copypcost4.getCost() == pcost4->getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copypcost5.getCost():\t\t\t"
              << copypcost5.getCost()
              << "\t\t\tCorrect output: "
              << pcost5->getCost()
              << ((copypcost5.getCost() == pcost5->getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopycost0->getCost():\t\t\t"
              << pcopycost0->getCost()
              << "\t\t\tCorrect output: "
              << cost0.getCost()
              << ((pcopycost0->getCost() == cost0.getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopycost1->getCost():\t\t\t"
              << pcopycost1->getCost()
              << "\t\t\tCorrect output: "
              << cost1.getCost()
              << ((pcopycost1->getCost() == cost1.getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopycost2->getCost():\t\t\t"
              << pcopycost2->getCost()
              << "\t\t\tCorrect output: "
              << cost2.getCost()
              << ((pcopycost2->getCost() == cost2.getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopypcost3->getCost():\t\t\t"
              << pcopypcost3->getCost()
              << "\t\t\tCorrect output: "
              << pcost3->getCost()
              << ((pcopypcost3->getCost() == pcost3->getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopypcost4->getCost():\t\t\t"
              << pcopypcost4->getCost()
              << "\t\t\tCorrect output: "
              << pcost4->getCost()
              << ((pcopypcost4->getCost() == pcost4->getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopypcost5->getCost():\t\t\t"
              << pcopypcost5->getCost()
              << "\t\t\tCorrect output: "
              << pcost5->getCost()
              << ((pcopypcost5->getCost() == pcost5->getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    
    
    /* Test getUnits() */
    
    std::cout << std::endl
              << "Testing getUnits():" << std::endl
              << std::endl;
    
    std::cout << "cost0.getUnits():\t\t\t"
              << cost0.getUnits()
              << "\t\t\tCorrect output: "
              << cost0.DEFAULT_UNITS
              << ((cost0.getUnits() == cost0.DEFAULT_UNITS) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cost1.getUnits():\t\t\t"
              << cost1.getUnits()
              << "\t\t\tCorrect output: "
              << cost1.DEFAULT_UNITS
              << ((cost1.getUnits() == cost1.DEFAULT_UNITS) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cost2.getUnits():\t\t\t"
              << cost2.getUnits()
              << "\t\t\tCorrect output: "
              << "twos"
              << ((cost2.getUnits() == "twos") ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcost3->getUnits():\t\t\t"
              << pcost3->getUnits()
              << "\t\t\tCorrect output: "
              << pcost3->DEFAULT_UNITS
              << ((pcost3->getUnits() == pcost3->DEFAULT_UNITS) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcost4->getUnits():\t\t\t"
              << pcost4->getUnits()
              << "\t\t\tCorrect output: "
              << pcost4->DEFAULT_UNITS
              << ((pcost4->getUnits() == pcost4->DEFAULT_UNITS) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcost5->getUnits():\t\t\t"
              << pcost5->getUnits()
              << "\t\t\tCorrect output: "
              << "fives"
              << ((pcost5->getUnits() == "fives") ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;

    std::cout << "copycost0.getUnits():\t\t\t"
              << copycost0.getUnits()
              << "\t\t\tCorrect output: "
              << cost0.getUnits()
              << ((copycost0.getUnits() == cost0.getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copycost1.getUnits():\t\t\t"
              << copycost1.getUnits()
              << "\t\t\tCorrect output: "
              << cost1.getUnits()
              << ((copycost1.getUnits() == cost1.getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copycost2.getUnits():\t\t\t"
              << copycost2.getUnits()
              << "\t\t\tCorrect output: "
              << cost2.getUnits()
              << ((copycost2.getUnits() == cost2.getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypcost3.getUnits():\t\t\t"
              << copypcost3.getUnits()
              << "\t\t\tCorrect output: "
              << pcost3->getUnits()
              << ((copypcost3.getUnits() == pcost3->getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypcost4.getUnits():\t\t\t"
              << copypcost4.getUnits()
              << "\t\t\tCorrect output: "
              << pcost4->getUnits()
              << ((copypcost4.getUnits() == pcost4->getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypcost5.getUnits():\t\t\t"
              << copypcost5.getUnits()
              << "\t\t\tCorrect output: "
              << pcost5->getUnits()
              << ((copypcost5.getUnits() == pcost5->getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    
    std::cout << "pcopycost0->getUnits():\t\t\t"
              << pcopycost0->getUnits()
              << "\t\t\tCorrect output: "
              << cost0.getUnits()
              << ((pcopycost0->getUnits() == cost0.getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopycost1->getUnits():\t\t\t"
              << pcopycost1->getUnits()
              << "\t\t\tCorrect output: "
              << cost1.getUnits()
              << ((pcopycost1->getUnits() == cost1.getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopycost2->getUnits():\t\t\t"
              << pcopycost2->getUnits()
              << "\t\t\tCorrect output: "
              << cost2.getUnits()
              << ((pcopycost2->getUnits() == cost2.getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypcost3->getUnits():\t\t"
              << pcopypcost3->getUnits()
              << "\t\t\tCorrect output: "
              << pcost3->getUnits()
              << ((pcopypcost3->getUnits() == pcost3->getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypcost4->getUnits():\t\t"
              << pcopypcost4->getUnits()
              << "\t\t\tCorrect output: "
              << pcost4->getUnits()
              << ((pcopypcost4->getUnits() == pcost4->getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypcost5->getUnits():\t\t"
              << pcopypcost5->getUnits()
              << "\t\t\tCorrect output: "
              << pcost5->getUnits()
              << ((pcopypcost5->getUnits() == pcost5->getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    
    /* Test toString() */
    
    std::stringstream ss;
    ss << std::fixed << std::showpoint << std::setprecision(4);
    std::cout << std::endl
              << "Testing toString():" << std::endl
              << std::endl;
    
    ss << cost0.getCost() << " " << cost0.getUnits();
    std::cout << "cost0.toString():\t\t\t"
              << cost0.toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((cost0.toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << cost1.getCost() << " " << cost1.getUnits();
    std::cout << "cost1.toString():\t\t\t"
              << cost1.toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((cost1.toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << cost2.getCost() << " " << cost2.getUnits();
    std::cout << "cost2.toString():\t\t\t"
              << cost2.toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((cost2.toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcost3->getCost() << " " << pcost3->getUnits();
    std::cout << "pcost3->toString():\t\t\t"
              << pcost3->toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((pcost3->toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcost4->getCost() << " " << pcost4->getUnits();
    std::cout << "pcost4->toString():\t\t\t"
              << pcost4->toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((pcost4->toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcost5->getCost() << " " << pcost5->getUnits();
    std::cout << "pcost5->toString():\t\t\t"
              << pcost5->toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((pcost5->toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");

    ss << copycost0.getCost() << " " << copycost0.getUnits();
    std::cout << "copycost0.toString():\t\t\t"
              << copycost0.toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((copycost0.toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << copycost1.getCost() << " " << copycost1.getUnits();
    std::cout << "copycost1.toString():\t\t\t"
              << copycost1.toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((copycost1.toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << copycost2.getCost() << " " << copycost2.getUnits();
    std::cout << "copycost2.toString():\t\t\t"
              << copycost2.toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((copycost2.toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << copypcost3.getCost() << " " << copypcost3.getUnits();
    std::cout << "copypcost3.toString():\t\t\t"
              << copypcost3.toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((copypcost3.toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << copypcost4.getCost() << " " << copypcost4.getUnits();
    std::cout << "copypcost4.toString():\t\t\t"
              << copypcost4.toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((copypcost4.toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << copypcost5.getCost() << " " << copypcost5.getUnits();
    std::cout << "copypcost5.toString():\t\t\t"
              << copypcost5.toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((copypcost5.toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    
    ss << pcopycost0->getCost() << " " << pcopycost0->getUnits();
    std::cout << "pcopycost0->toString():\t\t\t"
              << pcopycost0->toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((pcopycost0->toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcopycost1->getCost() << " " << pcopycost1->getUnits();
    std::cout << "pcopycost1->toString():\t\t\t"
              << pcopycost1->toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((pcopycost1->toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcopycost2->getCost() << " " << pcopycost2->getUnits();
    std::cout << "pcopycost2->toString():\t\t\t"
              << pcopycost2->toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((pcopycost2->toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcopypcost3->getCost() << " " << pcopypcost3->getUnits();
    std::cout << "pcopypcost3->toString():\t\t"
              << pcopypcost3->toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((pcopypcost3->toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcopypcost4->getCost() << " " << pcopypcost4->getUnits();
    std::cout << "pcopypcost4->toString():\t\t"
              << pcopypcost4->toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((pcopypcost4->toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcopypcost5->getCost() << " " << pcopypcost5->getUnits();
    std::cout << "pcopypcost5->toString():\t\t"
              << pcopypcost5->toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((pcopypcost5->toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    
    /* Test operator<< */
    
    std::cout << std::endl
              << "Testing operator<<:" << std::endl
              << std::endl;
    
    std::cout << "cout << cost0:\t\t\t\t" << cost0
              << "\t[Expected:\t\t\t" << cost0.toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << cost1:\t\t\t\t" << cost1
              << "\t[Expected:\t\t\t" << cost1.toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << cost2:\t\t\t\t" << cost2
              << "\t[Expected:\t\t\t" << cost2.toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << pcost3:\t\t\t\t" << *pcost3
              << "\t[Expected:\t\t\t" << pcost3->toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << pcost4:\t\t\t\t" << *pcost4
              << "\t[Expected:\t\t\t" << pcost4->toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << pcost5:\t\t\t\t" << *pcost5
              << "\t[Expected:\t\t\t" << pcost5->toString() << "\t\t]"
              << std::endl << std::endl;
    
    std::cout << "cout << copycost0:\t\t\t" << copycost0
              << "\t[Expected:\t\t\t" << copycost0.toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << copycost1:\t\t\t" << copycost1
              << "\t[Expected:\t\t\t" << copycost1.toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << copycost2:\t\t\t" << copycost2
              << "\t[Expected:\t\t\t" << copycost2.toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << copypcost3:\t\t\t" << copypcost3
              << "\t[Expected:\t\t\t" << copypcost3.toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << copypcost4:\t\t\t" << copypcost4
              << "\t[Expected:\t\t\t" << copypcost4.toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << copypcost5:\t\t\t" << copypcost5
              << "\t[Expected:\t\t\t" << copypcost5.toString() << "\t\t]"
              << std::endl << std::endl;
    
    std::cout << "cout << *pcopycost0:\t\t\t" << *pcopycost0
              << "\t[Expected:\t\t\t" << pcopycost0->toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << *pcopycost1:\t\t\t" << *pcopycost1
              << "\t[Expected:\t\t\t" << pcopycost1->toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << *pcopycost2:\t\t\t" << *pcopycost2
              << "\t[Expected:\t\t\t" << pcopycost2->toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << *pcopypcost3:\t\t\t" << *pcopypcost3
              << "\t[Expected:\t\t\t" << pcopypcost3->toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << *pcopypcost4:\t\t\t" << *pcopypcost4
              << "\t[Expected:\t\t\t" << pcopypcost4->toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << *pcopypcost5:\t\t\t" << *pcopypcost5
              << "\t[Expected:\t\t\t" << pcopypcost5->toString() << "\t\t]"
              << std::endl;
    
    /* Test operator== */
    
    std::cout << std::endl
              << "Testing operator==:" << std::endl
              << std::endl;
    
    std::cout << "Check that a Cost object equals itself:" << std::endl;
    std::cout << "cost0 == cost0:\t\t\t\t"
              << ((cost0 == cost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((cost0 == cost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cost1 == cost1:\t\t\t\t"
              << ((cost1 == cost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((cost1 == cost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cost2 == cost2:\t\t\t\t"
              << ((cost2 == cost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((cost2 == cost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcost3 == *pcost3:\t\t\t"
              << ((*pcost3 == *pcost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcost3 == *pcost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcost4 == *pcost4:\t\t\t"
              << ((*pcost4 == *pcost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcost4 == *pcost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcost5 == *pcost5:\t\t\t"
              << ((*pcost5 == *pcost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcost5 == *pcost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copycost0 == copycost0:\t\t\t"
              << ((copycost0 == copycost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copycost0 == copycost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copycost1 == copycost1:\t\t\t"
              << ((copycost1 == copycost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copycost1 == copycost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copycost2 == copycost2:\t\t\t"
              << ((copycost2 == copycost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copycost2 == copycost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypcost3 == copypcost3:\t\t"
              << ((copypcost3 == copypcost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copypcost3 == copypcost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypcost4 == copypcost4:\t\t"
              << ((copypcost4 == copypcost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copypcost4 == copypcost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypcost5 == copypcost5:\t\t"
              << ((copypcost5 == copypcost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copypcost5 == copypcost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopycost0 == *pcopycost0:\t\t"
              << ((*pcopycost0 == *pcopycost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopycost0 == *pcopycost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopycost1 == *pcopycost1:\t\t"
              << ((*pcopycost1 == *pcopycost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopycost1 == *pcopycost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopycost2 == *pcopycost2:\t\t"
              << ((*pcopycost2 == *pcopycost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopycost2 == *pcopycost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopypcost3 == *pcopypcost3:\t\t"
              << ((*pcopypcost3 == *pcopypcost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopypcost3 == *pcopypcost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopypcost4 == *pcopypcost4:\t\t"
              << ((*pcopypcost4 == *pcopypcost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopypcost4 == *pcopypcost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopypcost5 == *pcopypcost5:\t\t"
              << ((*pcopypcost5 == *pcopypcost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopypcost5 == *pcopypcost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl << std::endl;
    
    std::cout << "Check that the address of a Cost object equals its own address:" << std::endl;
    std::cout << "&cost0 == &cost0:\t\t\t"
              << ((&cost0 == &cost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&cost0 == &cost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&cost1 == &cost1:\t\t\t"
              << ((&cost1 == &cost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&cost1 == &cost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&cost2 == &cost2:\t\t\t"
              << ((&cost2 == &cost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&cost2 == &cost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcost3 == pcost3:\t\t\t"
              << ((pcost3 == pcost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcost3 == pcost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcost4 == pcost4:\t\t\t"
              << ((pcost4 == pcost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcost4 == pcost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcost5 == pcost5:\t\t\t"
              << ((pcost5 == pcost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcost5 == pcost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copycost0 == &copycost0:\t\t"
              << ((&copycost0 == &copycost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copycost0 == &copycost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copycost1 == &copycost1:\t\t"
              << ((&copycost1 == &copycost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copycost1 == &copycost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copycost2 == &copycost2:\t\t"
              << ((&copycost2 == &copycost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copycost2 == &copycost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copypcost3 == &copypcost3:\t\t"
              << ((&copypcost3 == &copypcost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copypcost3 == &copypcost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copypcost4 == &copypcost4:\t\t"
              << ((&copypcost4 == &copypcost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copypcost4 == &copypcost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copypcost5 == &copypcost5:\t\t"
              << ((&copypcost5 == &copypcost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copypcost5 == &copypcost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopycost0 == pcopycost0:\t\t"
              << ((pcopycost0 == pcopycost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopycost0 == pcopycost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopycost1 == pcopycost1:\t\t"
              << ((pcopycost1 == pcopycost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopycost1 == pcopycost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopycost2 == pcopycost2:\t\t"
              << ((pcopycost2 == pcopycost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopycost2 == pcopycost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypcost3 == pcopypcost3:\t\t"
              << ((pcopypcost3 == pcopypcost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopypcost3 == pcopypcost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypcost4 == pcopypcost4:\t\t"
              << ((pcopypcost4 == pcopypcost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopypcost4 == pcopypcost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypcost5 == pcopypcost5:\t\t"
              << ((pcopypcost5 == pcopypcost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopypcost5 == pcopypcost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl << std::endl;
    
    std::cout << "Check that a Cost object equals a copy, but that the addresses of a Cost object and a copy differ:" << std::endl;
    std::cout << "cost0 == copycost0:\t\t\t"
              << ((cost0 == copycost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((cost0 == copycost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&cost0 == &copycost0:\t\t\t"
              << ((&cost0 == &copycost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&cost0 == &copycost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cost0 == *pcopycost0:\t\t\t"
              << ((cost0 == *pcopycost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((cost0 == *pcopycost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&cost0 == pcopycost0:\t\t\t"
              << ((&cost0 == pcopycost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&cost0 == pcopycost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cost1 == copycost1:\t\t\t"
              << ((cost1 == copycost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((cost1 == copycost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&cost1 == &copycost1:\t\t\t"
              << ((&cost1 == &copycost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&cost1 == &copycost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cost1 == *pcopycost1:\t\t\t"
              << ((cost1 == *pcopycost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((cost1 == *pcopycost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&cost1 == pcopycost1:\t\t\t"
              << ((&cost1 == pcopycost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&cost1 == pcopycost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cost2 == copycost2:\t\t\t"
              << ((cost2 == copycost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((cost2 == copycost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&cost2 == &copycost2:\t\t\t"
              << ((&cost2 == &copycost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&cost2 == &copycost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cost2 == *pcopycost2:\t\t\t"
              << ((cost2 == *pcopycost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((cost2 == *pcopycost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&cost2 == pcopycost2:\t\t\t"
              << ((&cost2 == pcopycost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&cost2 == pcopycost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcost3 == copypcost3:\t\t\t"
              << ((*pcost3 == copypcost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcost3 == copypcost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcost3 == &copypcost3:\t\t\t"
              << ((pcost3 == &copypcost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pcost3 == &copypcost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcost3 == *pcopypcost3:\t\t"
              << ((*pcost3 == *pcopypcost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcost3 == *pcopypcost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcost3 == pcopypcost3:\t\t\t"
              << ((pcost3 == pcopypcost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pcost3 == pcopypcost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcost4 == copypcost4:\t\t\t"
              << ((*pcost4 == copypcost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcost4 == copypcost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcost4 == &copypcost4:\t\t\t"
              << ((pcost4 == &copypcost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pcost4 == &copypcost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcost4 == *pcopypcost4:\t\t"
              << ((*pcost4 == *pcopypcost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcost4 == *pcopypcost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcost4 == pcopypcost4:\t\t\t"
              << ((pcost4 == pcopypcost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pcost4 == pcopypcost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcost5 == copypcost5:\t\t\t"
              << ((*pcost5 == copypcost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcost5 == copypcost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcost5 == &copypcost5:\t\t\t"
              << ((pcost5 == &copypcost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pcost5 == &copypcost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcost5 == *pcopypcost5:\t\t"
              << ((*pcost5 == *pcopypcost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcost5 == *pcopypcost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcost5 == pcopypcost5:\t\t\t"
              << ((pcost5 == pcopypcost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pcost5 == pcopypcost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl << std::endl;
    
    std::cout << "Spot check that different Cost objects are not equal:" << std::endl;
    std::cout << "cost0 == cost1:\t\t\t\t"
              << ((cost0 == cost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(cost0 == cost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cost0 == cost2:\t\t\t\t"
              << ((cost0 == cost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(cost0 == cost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cost1 == cost2:\t\t\t\t"
              << ((cost1 == cost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(cost1 == cost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    
    /* Test operator* */
    
    std::cout << std::endl
              << "Testing operator*:" << std::endl
              << std::endl;
    
    std::cout << "cost0*cost0:\t\t\t\t"
              << (cost0*cost0)->toString()
              << "\t\tCorrect output: "
              << INVALID_COST->toString()
              << ((cost0*cost0 == INVALID_COST) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "cost0*copycost0:\t\t\t"
              << (cost0*copycost0)->toString()
              << "\t\tCorrect output: "
              << (cost0*cost0)->toString()
              << ((cost0*copycost0 == cost0*cost0) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "cost0*(*pcopycost0):\t\t\t"
              << (cost0*(*pcopycost0))->toString()
              << "\t\tCorrect output: "
              << (cost0*cost0)->toString()
              << ((cost0*(*pcopycost0) == cost0*cost0) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "cost1*cost1:\t\t\t\t"
              << (cost1*cost1)->toString()
              << "\t\tCorrect output: "
              << INVALID_COST->toString()
              << ((cost1*cost1 == INVALID_COST) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "cost1*copycost1:\t\t\t"
              << (cost1*copycost1)->toString()
              << "\t\tCorrect output: "
              << (cost1*cost1)->toString()
              << ((cost1*copycost1 == cost1*cost1) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "cost1*(*pcopycost1):\t\t\t"
              << (cost1*(*pcopycost1))->toString()
              << "\t\tCorrect output: "
              << (cost1*cost1)->toString()
              << ((cost1*(*pcopycost1) == cost1*cost1) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "cost2*cost2:\t\t\t\t"
              << (cost2*cost2)->toString()
              << "\t\tCorrect output: "
              << INVALID_COST->toString()
              << ((cost2*cost2 == INVALID_COST) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "cost2*copycost2:\t\t\t"
              << (cost2*copycost2)->toString()
              << "\t\tCorrect output: "
              << (cost2*cost2)->toString()
              << ((cost0*copycost0 == cost0*cost0) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "cost2*(*pcopycost2):\t\t\t"
              << (cost2*(*pcopycost2))->toString()
              << "\t\tCorrect output: "
              << (cost2*cost2)->toString()
              << ((cost2*(*pcopycost2) == cost2*cost2) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pcost3)*(*pcost3):\t\t\t"
              << ((*pcost3)*(*pcost3))->toString()
              << "\t\tCorrect output: "
              << INVALID_COST->toString()
              << (((*pcost3)*(*pcost3) == INVALID_COST) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pcost3)*copypcost3:\t\t\t"
              << ((*pcost3)*copypcost3)->toString()
              << "\t\tCorrect output: "
              << ((*pcost3)*(*pcost3))->toString()
              << (((*pcost3)*copypcost3 == (*pcost3)*(*pcost3)) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pcost3)*(*pcopypcost3):\t\t"
              << ((*pcost3)*(*pcopypcost3))->toString()
              << "\t\tCorrect output: "
              << ((*pcost3)*(*pcost3))->toString()
              << (((*pcost3)*(*pcopypcost3) == (*pcost3)*(*pcost3)) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pcost4)*(*pcost4):\t\t\t"
              << ((*pcost4)*(*pcost4))->toString()
              << "\t\tCorrect output: "
              << INVALID_COST->toString()
              << (((*pcost4)*(*pcost4) == INVALID_COST) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pcost4)*copypcost4:\t\t\t"
              << ((*pcost4)*copypcost4)->toString()
              << "\t\tCorrect output: "
              << ((*pcost4)*(*pcost4))->toString()
              << (((*pcost4)*copypcost4 == (*pcost4)*(*pcost4)) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pcost4)*(*pcopypcost4):\t\t"
              << ((*pcost4)*(*pcopypcost4))->toString()
              << "\t\tCorrect output: "
              << ((*pcost4)*(*pcost4))->toString()
              << (((*pcost4)*(*pcopypcost4) == (*pcost4)*(*pcost4)) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pcost5)*(*pcost5):\t\t\t"
              << ((*pcost5)*(*pcost5))->toString()
              << "\t\tCorrect output: "
              << INVALID_COST->toString()
              << (((*pcost5)*(*pcost5) == INVALID_COST) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pcost5)*copypcost5:\t\t\t"
              << ((*pcost5)*copypcost5)->toString()
              << "\t\tCorrect output: "
              << ((*pcost5)*(*pcost5))->toString()
              << (((*pcost5)*copypcost5 == (*pcost5)*(*pcost5)) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pcost5)*(*pcopypcost5):\t\t"
              << ((*pcost5)*(*pcopypcost5))->toString()
              << "\t\tCorrect output: "
              << ((*pcost5)*(*pcost5))->toString()
              << (((*pcost5)*(*pcopypcost5) == (*pcost3)*(*pcost3)) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl << std::endl;
    
    std::cout << "cost0*cost1:\t\t\t\t"
              << (cost0*cost1)->toString()
              << "\t\tCorrect output: "
              << INVALID_COST->toString()
              << ((cost0*cost1 == INVALID_COST) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "cost0*cost2:\t\t\t\t"
              << (cost0*cost2)->toString()
              << "\t\tCorrect output: "
              << INVALID_COST->toString()
              << ((cost0*cost2 == INVALID_COST) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "cost1*cost2:\t\t\t\t"
              << (cost1*cost2)->toString()
              << "\t\tCorrect output: "
              << INVALID_COST->toString()
              << ((cost1*cost2 == INVALID_COST) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    
    /* Test destructor */
    
    std::cout << std::endl
              << "Testing the destructor:" << std::endl
              << std::endl;
    
    std::cout << "\tdelete pcost3;" << std::endl;
    delete pcost3;
    std::cout << "\tdelete pcost4;" << std::endl;
    delete pcost4;
    std::cout << "\tdelete pcost5;" << std::endl;
    delete pcost5;
    std::cout << "\tdelete pcopypcost3;" << std::endl;
    delete pcopypcost3;
    std::cout << "\tdelete pcopypcost4;" << std::endl;
    delete pcopypcost4;
    std::cout << "\tdelete pcopypcost5;" << std::endl;
    delete pcopypcost5;
    
    std::cout << std::endl;
    
}

#endif
