//
//  additiveCostTest.h
//  Pathfinder
//
//  Created by Bradley Denby on 8/1/13.
//  Copyright (c) 2013 Bradley Denby. All rights reserved.
//

#ifndef Pathfinder_additiveCostTest_h
#define Pathfinder_additiveCostTest_h

#include "AdditiveCost.h"

void additiveCostTest() {
    
    /************ Test the AdditiveCost class ************/
    
    std::cout << std::endl
              << "****** Testing the AdditiveCost class ******" << std::endl
              << std::endl;
    
    /* Test the constructors */
    
    std::cout << "Testing the constructors:" << std::endl
              << std::endl;
    
    std::cout << "\tAdditiveCost acost0;" << std::endl;
    AdditiveCost acost0;
    std::cout << "\tAdditiveCost acost1(1.00);" << std::endl;
    AdditiveCost acost1(1.00);
    std::cout << "\tAdditiveCost acost2(2.00, \"twos\");" << std::endl;
    AdditiveCost acost2(2.00, "twos");
    std::cout << "\tAdditiveCost *pacost3 = new AdditiveCost;" << std::endl;
    AdditiveCost *pacost3 = new AdditiveCost;
    std::cout << "\tAdditiveCost *pacost4 = new AdditiveCost(4.00);" << std::endl;
    AdditiveCost *pacost4 = new AdditiveCost(4.00);
    std::cout << "\tAdditiveCost *pacost5 = new AdditiveCost(5.00, \"fives\");" << std::endl;
    AdditiveCost *pacost5 = new AdditiveCost(5.00, "fives");
    
    std::cout << std::endl
              << "\tAdditiveCost copyacost0(acost0);" << std::endl;
    AdditiveCost copyacost0(acost0);
    std::cout << "\tAdditiveCost copyacost1(acost1);" << std::endl;
    AdditiveCost copyacost1(acost1);
    std::cout << "\tAdditiveCost copyacost2(acost2);" << std::endl;
    AdditiveCost copyacost2(acost2);
    std::cout << "\tAdditiveCost copypacost3(*pacost3);" << std::endl;
    AdditiveCost copypacost3(*pacost3);
    std::cout << "\tAdditiveCost copypacost4(*pacost4);" << std::endl;
    AdditiveCost copypacost4(*pacost4);
    std::cout << "\tAdditiveCost copypacost5(*pacost5);" << std::endl;
    AdditiveCost copypacost5(*pacost5);
    
    std::cout << std::endl
              << "\tAdditiveCost *pcopyacost0 = new AdditiveCost(acost0);" << std::endl;
    AdditiveCost *pcopyacost0 = new AdditiveCost(acost0);
    std::cout << "\tAdditiveCost *pcopyacost1 = new AdditiveCost(acost1);" << std::endl;
    AdditiveCost *pcopyacost1 = new AdditiveCost(acost1);
    std::cout << "\tAdditiveCost *pcopyacost2 = new AdditiveCost(acost2);" << std::endl;
    AdditiveCost *pcopyacost2 = new AdditiveCost(acost2);
    std::cout << "\tAdditiveCost *pcopypacost3 = new AdditiveCost(*pacost3);" << std::endl;
    AdditiveCost *pcopypacost3 = new AdditiveCost(*pacost3);
    std::cout << "\tAdditiveCost *pcopypacost4 = new AdditiveCost(*pacost4);" << std::endl;
    AdditiveCost *pcopypacost4 = new AdditiveCost(*pacost4);
    std::cout << "\tAdditiveCost *pcopypacost5 = new AdditiveCost(*pacost5);" << std::endl;
    AdditiveCost *pcopypacost5 = new AdditiveCost(*pacost5);
    
    /* Test getCost() */
    
    std::cout << std::endl
              << "Testing getCost():" << std::endl
              << std::endl;

    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "acost0.getCost():\t\t\t"
              << acost0.getCost()
              << "\t\t\tCorrect output: "
              << acost0.DEFAULT_COST
              << ((acost0.getCost() == acost0.DEFAULT_COST) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "acost1.getCost():\t\t\t"
              << acost1.getCost()
              << "\t\t\tCorrect output: "
              << 1.00
              << ((acost1.getCost() == 1.00) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "acost2.getCost():\t\t\t"
              << acost2.getCost()
              << "\t\t\tCorrect output: "
              << 2.00
              << ((acost2.getCost() == 2.00) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pacost3->getCost():\t\t\t"
              << pacost3->getCost()
              << "\t\t\tCorrect output: "
              << pacost3->DEFAULT_COST
              << ((pacost3->getCost() == pacost3->DEFAULT_COST) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pacost4->getCost():\t\t\t"
              << pacost4->getCost()
              << "\t\t\tCorrect output: "
              << 4.00
              << ((pacost4->getCost() == 4.00) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pacost5->getCost():\t\t\t"
              << pacost5->getCost()
              << "\t\t\tCorrect output: "
              << 5.00
              << ((pacost5->getCost() == 5.00) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;

    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copyacost0.getCost():\t\t\t"
              << copyacost0.getCost()
              << "\t\t\tCorrect output: "
              << acost0.getCost()
              << ((copyacost0.getCost() == acost0.getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copyacost1.getCost():\t\t\t"
              << copyacost1.getCost()
              << "\t\t\tCorrect output: "
              << acost1.getCost()
              << ((copyacost1.getCost() == acost1.getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copyacost2.getCost():\t\t\t"
              << copyacost2.getCost()
              << "\t\t\tCorrect output: "
              << acost2.getCost()
              << ((copyacost2.getCost() == acost2.getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copypacost3.getCost():\t\t\t"
              << copypacost3.getCost()
              << "\t\t\tCorrect output: "
              << pacost3->getCost()
              << ((copypacost3.getCost() == pacost3->getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copypacost4.getCost():\t\t\t"
              << copypacost4.getCost()
              << "\t\t\tCorrect output: "
              << pacost4->getCost()
              << ((copypacost4.getCost() == pacost4->getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "copypacost5.getCost():\t\t\t"
              << copypacost5.getCost()
              << "\t\t\tCorrect output: "
              << pacost5->getCost()
              << ((copypacost5.getCost() == pacost5->getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;

    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopyacost0->getCost():\t\t\t"
              << pcopyacost0->getCost()
              << "\t\t\tCorrect output: "
              << acost0.getCost()
              << ((pcopyacost0->getCost() == acost0.getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopyacost1->getCost():\t\t\t"
              << pcopyacost1->getCost()
              << "\t\t\tCorrect output: "
              << acost1.getCost()
              << ((pcopyacost1->getCost() == acost1.getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopyacost2->getCost():\t\t\t"
              << pcopyacost2->getCost()
              << "\t\t\tCorrect output: "
              << acost2.getCost()
              << ((pcopyacost2->getCost() == acost2.getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopypacost3->getCost():\t\t"
              << pcopypacost3->getCost()
              << "\t\t\tCorrect output: "
              << pacost3->getCost()
              << ((pcopypacost3->getCost() == pacost3->getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopypacost4->getCost():\t\t"
              << pcopypacost4->getCost()
              << "\t\t\tCorrect output: "
              << pacost4->getCost()
              << ((pcopypacost4->getCost() == pacost4->getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(4)
              << "pcopypacost5->getCost():\t\t"
              << pcopypacost5->getCost()
              << "\t\t\tCorrect output: "
              << pacost5->getCost()
              << ((pcopypacost5->getCost() == pacost5->getCost()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    
    /* Test getUnits() */
    
    std::cout << std::endl
              << "Testing getUnits():" << std::endl
              << std::endl;

    std::cout << "acost0.getUnits():\t\t\t"
              << acost0.getUnits()
              << "\t\t\tCorrect output: "
              << acost0.DEFAULT_UNITS
              << ((acost0.getUnits() == acost0.DEFAULT_UNITS) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "acost1.getUnits():\t\t\t"
              << acost1.getUnits()
              << "\t\t\tCorrect output: "
              << acost1.DEFAULT_UNITS
              << ((acost1.getUnits() == acost1.DEFAULT_UNITS) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "acost2.getUnits():\t\t\t"
              << acost2.getUnits()
              << "\t\t\tCorrect output: "
              << "twos"
              << ((acost2.getUnits() == "twos") ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pacost3->getUnits():\t\t\t"
              << pacost3->getUnits()
              << "\t\t\tCorrect output: "
              << pacost3->DEFAULT_UNITS
              << ((pacost3->getUnits() == pacost3->DEFAULT_UNITS) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pacost4->getUnits():\t\t\t"
              << pacost4->getUnits()
              << "\t\t\tCorrect output: "
              << pacost4->DEFAULT_UNITS
              << ((pacost4->getUnits() == pacost4->DEFAULT_UNITS) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pacost5->getUnits():\t\t\t"
              << pacost5->getUnits()
              << "\t\t\tCorrect output: "
              << "fives"
              << ((pacost5->getUnits() == "fives") ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;

    std::cout << "copyacost0.getUnits():\t\t\t"
              << copyacost0.getUnits()
              << "\t\t\tCorrect output: "
              << acost0.getUnits()
              << ((copyacost0.getUnits() == acost0.getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copyacost1.getUnits():\t\t\t"
              << copyacost1.getUnits()
              << "\t\t\tCorrect output: "
              << acost1.getUnits()
              << ((copyacost1.getUnits() == acost1.getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copyacost2.getUnits():\t\t\t"
              << copyacost2.getUnits()
              << "\t\t\tCorrect output: "
              << acost2.getUnits()
              << ((copyacost2.getUnits() == acost2.getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypacost3.getUnits():\t\t\t"
              << copypacost3.getUnits()
              << "\t\t\tCorrect output: "
              << pacost3->getUnits()
              << ((copypacost3.getUnits() == pacost3->getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypacost4.getUnits():\t\t\t"
              << copypacost4.getUnits()
              << "\t\t\tCorrect output: "
              << pacost4->getUnits()
              << ((copypacost4.getUnits() == pacost4->getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypacost5.getUnits():\t\t\t"
              << copypacost5.getUnits()
              << "\t\t\tCorrect output: "
              << pacost5->getUnits()
              << ((copypacost5.getUnits() == pacost5->getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;

    std::cout << "pcopyacost0->getUnits():\t\t"
              << pcopyacost0->getUnits()
              << "\t\t\tCorrect output: "
              << acost0.getUnits()
              << ((pcopyacost0->getUnits() == acost0.getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopyacost1->getUnits():\t\t"
              << pcopyacost1->getUnits()
              << "\t\t\tCorrect output: "
              << acost1.getUnits()
              << ((pcopyacost1->getUnits() == acost1.getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopyacost2->getUnits():\t\t"
              << pcopyacost2->getUnits()
              << "\t\t\tCorrect output: "
              << acost2.getUnits()
              << ((pcopyacost2->getUnits() == acost2.getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypacost3->getUnits():\t\t"
              << pcopypacost3->getUnits()
              << "\t\t\tCorrect output: "
              << pacost3->getUnits()
              << ((pcopypacost3->getUnits() == pacost3->getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypacost4->getUnits():\t\t"
              << pcopypacost4->getUnits()
              << "\t\t\tCorrect output: "
              << pacost4->getUnits()
              << ((pcopypacost4->getUnits() == pacost4->getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypacost5->getUnits():\t\t"
              << pcopypacost5->getUnits()
              << "\t\t\tCorrect output: "
              << pacost5->getUnits()
              << ((pcopypacost5->getUnits() == pacost5->getUnits()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    
    /* Test toString() */

    std::stringstream ss;
    ss << std::fixed << std::showpoint << std::setprecision(4);
    std::cout << std::endl
              << "Testing toString():" << std::endl
              << std::endl;

    ss << acost0.getCost() << " " << acost0.getUnits();
    std::cout << "acost0.toString():\t\t\t"
              << acost0.toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((acost0.toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << acost1.getCost() << " " << acost1.getUnits();
    std::cout << "acost1.toString():\t\t\t"
              << acost1.toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((acost1.toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << acost2.getCost() << " " << acost2.getUnits();
    std::cout << "acost2.toString():\t\t\t"
              << acost2.toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((acost2.toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pacost3->getCost() << " " << pacost3->getUnits();
    std::cout << "pacost3->toString():\t\t\t"
              << pacost3->toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((pacost3->toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pacost4->getCost() << " " << pacost4->getUnits();
    std::cout << "pacost4->toString():\t\t\t"
              << pacost4->toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((pacost4->toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pacost5->getCost() << " " << pacost5->getUnits();
    std::cout << "pacost5->toString():\t\t\t"
              << pacost5->toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((pacost5->toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");

    ss << copyacost0.getCost() << " " << copyacost0.getUnits();
    std::cout << "copyacost0.toString():\t\t\t"
              << copyacost0.toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((copyacost0.toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << copyacost1.getCost() << " " << copyacost1.getUnits();
    std::cout << "copyacost1.toString():\t\t\t"
              << copyacost1.toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((copyacost1.toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << copyacost2.getCost() << " " << copyacost2.getUnits();
    std::cout << "copyacost2.toString():\t\t\t"
              << copyacost2.toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((copyacost2.toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << copypacost3.getCost() << " " << copypacost3.getUnits();
    std::cout << "copypacost3.toString():\t\t\t"
              << copypacost3.toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((copypacost3.toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << copypacost4.getCost() << " " << copypacost4.getUnits();
    std::cout << "copypacost4.toString():\t\t\t"
              << copypacost4.toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((copypacost4.toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << copypacost5.getCost() << " " << copypacost5.getUnits();
    std::cout << "copypacost5.toString():\t\t\t"
              << copypacost5.toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((copypacost5.toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");

    ss << pcopyacost0->getCost() << " " << pcopyacost0->getUnits();
    std::cout << "pcopyacost0->toString():\t\t"
              << pcopyacost0->toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((pcopyacost0->toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcopyacost1->getCost() << " " << pcopyacost1->getUnits();
    std::cout << "pcopyacost1->toString():\t\t"
              << pcopyacost1->toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((pcopyacost1->toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcopyacost2->getCost() << " " << pcopyacost2->getUnits();
    std::cout << "pcopyacost2->toString():\t\t"
              << pcopyacost2->toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((pcopyacost2->toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcopypacost3->getCost() << " " << pcopypacost3->getUnits();
    std::cout << "pcopypacost3->toString():\t\t"
              << pcopypacost3->toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((pcopypacost3->toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcopypacost4->getCost() << " " << pcopypacost4->getUnits();
    std::cout << "pcopypacost4->toString():\t\t"
              << pcopypacost4->toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((pcopypacost4->toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << pcopypacost5->getCost() << " " << pcopypacost5->getUnits();
    std::cout << "pcopypacost5->toString():\t\t"
              << pcopypacost5->toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((pcopypacost5->toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    
    /* Test operator<< */

    std::cout << std::endl
              << "Testing operator<<:" << std::endl
              << std::endl;

    std::cout << "cout << acost0:\t\t\t\t" << acost0
              << "\t[Expected:\t\t\t" << acost0.toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << acost1:\t\t\t\t" << acost1
              << "\t[Expected:\t\t\t" << acost1.toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << acost2:\t\t\t\t" << acost2
              << "\t[Expected:\t\t\t" << acost2.toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << pacost3:\t\t\t" << *pacost3
              << "\t[Expected:\t\t\t" << pacost3->toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << pacost4:\t\t\t" << *pacost4
              << "\t[Expected:\t\t\t" << pacost4->toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << pacost5:\t\t\t" << *pacost5
              << "\t[Expected:\t\t\t" << pacost5->toString() << "\t\t]"
              << std::endl << std::endl;

    std::cout << "cout << copyacost0:\t\t\t" << copyacost0
              << "\t[Expected:\t\t\t" << copyacost0.toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << copyacost1:\t\t\t" << copyacost1
              << "\t[Expected:\t\t\t" << copyacost1.toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << copyacost2:\t\t\t" << copyacost2
              << "\t[Expected:\t\t\t" << copyacost2.toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << copypacost3:\t\t\t" << copypacost3
              << "\t[Expected:\t\t\t" << copypacost3.toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << copypacost4:\t\t\t" << copypacost4
              << "\t[Expected:\t\t\t" << copypacost4.toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << copypacost5:\t\t\t" << copypacost5
              << "\t[Expected:\t\t\t" << copypacost5.toString() << "\t\t]"
              << std::endl << std::endl;

    std::cout << "cout << *pcopyacost0:\t\t\t" << *pcopyacost0
              << "\t[Expected:\t\t\t" << pcopyacost0->toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << *pcopyacost1:\t\t\t" << *pcopyacost1
              << "\t[Expected:\t\t\t" << pcopyacost1->toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << *pcopyacost2:\t\t\t" << *pcopyacost2
              << "\t[Expected:\t\t\t" << pcopyacost2->toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << *pcopypacost3:\t\t\t" << *pcopypacost3
              << "\t[Expected:\t\t\t" << pcopypacost3->toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << *pcopypacost4:\t\t\t" << *pcopypacost4
              << "\t[Expected:\t\t\t" << pcopypacost4->toString() << "\t\t]"
              << std::endl << std::endl;
    std::cout << "cout << *pcopypacost5:\t\t\t" << *pcopypacost5
              << "\t[Expected:\t\t\t" << pcopypacost5->toString() << "\t\t]"
              << std::endl;
    
    /* Test operator== */

    std::cout << std::endl
              << "Testing operator==:" << std::endl
              << std::endl;

    std::cout << "Check that an Additive Cost object equals itself:" << std::endl;
    std::cout << "acost0 == acost0:\t\t\t"
              << ((acost0 == acost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((acost0 == acost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "acost1 == acost1:\t\t\t"
              << ((acost1 == acost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((acost1 == acost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "acost2 == acost2:\t\t\t"
              << ((acost2 == acost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((acost2 == acost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pacost3 == *pacost3:\t\t\t"
              << ((*pacost3 == *pacost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pacost3 == *pacost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pacost4 == *pacost4:\t\t\t"
              << ((*pacost4 == *pacost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pacost4 == *pacost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pacost5 == *pacost5:\t\t\t"
              << ((*pacost5 == *pacost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pacost5 == *pacost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copyacost0 == copyacost0:\t\t"
              << ((copyacost0 == copyacost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copyacost0 == copyacost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copyacost1 == copyacost1:\t\t"
              << ((copyacost1 == copyacost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copyacost1 == copyacost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copyacost2 == copyacost2:\t\t"
              << ((copyacost2 == copyacost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copyacost2 == copyacost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypacost3 == copypacost3:\t\t"
              << ((copypacost3 == copypacost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copypacost3 == copypacost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypacost4 == copypacost4:\t\t"
              << ((copypacost4 == copypacost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copypacost4 == copypacost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypacost5 == copypacost5:\t\t"
              << ((copypacost5 == copypacost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copypacost5 == copypacost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopyacost0 == *pcopyacost0:\t\t"
              << ((*pcopyacost0 == *pcopyacost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopyacost0 == *pcopyacost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopyacost1 == *pcopyacost1:\t\t"
              << ((*pcopyacost1 == *pcopyacost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopyacost1 == *pcopyacost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopyacost2 == *pcopyacost2:\t\t"
              << ((*pcopyacost2 == *pcopyacost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopyacost2 == *pcopyacost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopypacost3 == *pcopypacost3:\t\t"
              << ((*pcopypacost3 == *pcopypacost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopypacost3 == *pcopypacost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopypacost4 == *pcopypacost4:\t\t"
              << ((*pcopypacost4 == *pcopypacost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopypacost4 == *pcopypacost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopypacost5 == *pcopypacost5:\t\t"
              << ((*pcopypacost5 == *pcopypacost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopypacost5 == *pcopypacost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl << std::endl;

    std::cout << "Check that the address of an Additive Cost object equals its own address:" << std::endl;
    std::cout << "&acost0 == &acost0:\t\t\t"
              << ((&acost0 == &acost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&acost0 == &acost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&acost1 == &acost1:\t\t\t"
              << ((&acost1 == &acost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&acost1 == &acost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&acost2 == &acost2:\t\t\t"
              << ((&acost2 == &acost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&acost2 == &acost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pacost3 == pacost3:\t\t\t"
              << ((pacost3 == pacost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pacost3 == pacost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pacost4 == pacost4:\t\t\t"
              << ((pacost4 == pacost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pacost4 == pacost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pacost5 == pacost5:\t\t\t"
              << ((pacost5 == pacost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pacost5 == pacost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copyacost0 == &copyacost0:\t\t"
              << ((&copyacost0 == &copyacost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copyacost0 == &copyacost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copyacost1 == &copyacost1:\t\t"
              << ((&copyacost1 == &copyacost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copyacost1 == &copyacost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copyacost2 == &copyacost2:\t\t"
              << ((&copyacost2 == &copyacost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copyacost2 == &copyacost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copypacost3 == &copypacost3:\t\t"
              << ((&copypacost3 == &copypacost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copypacost3 == &copypacost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copypacost4 == &copypacost4:\t\t"
              << ((&copypacost4 == &copypacost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copypacost4 == &copypacost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copypacost5 == &copypacost5:\t\t"
              << ((&copypacost5 == &copypacost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copypacost5 == &copypacost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopyacost0 == pcopyacost0:\t\t"
              << ((pcopyacost0 == pcopyacost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopyacost0 == pcopyacost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopyacost1 == pcopyacost1:\t\t"
              << ((pcopyacost1 == pcopyacost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopyacost1 == pcopyacost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopyacost2 == pcopyacost2:\t\t"
              << ((pcopyacost2 == pcopyacost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopyacost2 == pcopyacost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypacost3 == pcopypacost3:\t\t"
              << ((pcopypacost3 == pcopypacost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopypacost3 == pcopypacost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypacost4 == pcopypacost4:\t\t"
              << ((pcopypacost4 == pcopypacost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopypacost4 == pcopypacost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypacost5 == pcopypacost5:\t\t"
              << ((pcopypacost5 == pcopypacost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopypacost5 == pcopypacost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl << std::endl;

    std::cout << "Check that an Additive Cost object equals a copy, but that" << std::endl
              << "the addresses of an Additive Cost object and a copy differ:" << std::endl;
    std::cout << "acost0 == copyacost0:\t\t\t"
              << ((acost0 == copyacost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((acost0 == copyacost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&acost0 == &copyacost0:\t\t\t"
              << ((&acost0 == &copyacost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&acost0 == &copyacost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "acost0 == *pcopyacost0:\t\t\t"
              << ((acost0 == *pcopyacost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((acost0 == *pcopyacost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&acost0 == pcopyacost0:\t\t\t"
              << ((&acost0 == pcopyacost0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&acost0 == pcopyacost0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "acost1 == copyacost1:\t\t\t"
              << ((acost1 == copyacost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((acost1 == copyacost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&acost1 == &copyacost1:\t\t\t"
              << ((&acost1 == &copyacost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&acost1 == &copyacost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "acost1 == *pcopyacost1:\t\t\t"
              << ((acost1 == *pcopyacost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((acost1 == *pcopyacost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&acost1 == pcopyacost1:\t\t\t"
              << ((&acost1 == pcopyacost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&acost1 == pcopyacost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "acost2 == copyacost2:\t\t\t"
              << ((acost2 == copyacost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((acost2 == copyacost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&acost2 == &copyacost2:\t\t\t"
              << ((&acost2 == &copyacost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&acost2 == &copyacost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "acost2 == *pcopyacost2:\t\t\t"
              << ((acost2 == *pcopyacost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((acost2 == *pcopyacost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&acost2 == pcopyacost2:\t\t\t"
              << ((&acost2 == pcopyacost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&acost2 == pcopyacost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pacost3 == copypacost3:\t\t"
              << ((*pacost3 == copypacost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pacost3 == copypacost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pacost3 == &copypacost3:\t\t"
              << ((pacost3 == &copypacost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pacost3 == &copypacost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pacost3 == *pcopypacost3:\t\t"
              << ((*pacost3 == *pcopypacost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pacost3 == *pcopypacost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pacost3 == pcopypacost3:\t\t"
              << ((pacost3 == pcopypacost3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pacost3 == pcopypacost3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pacost4 == copypacost4:\t\t"
              << ((*pacost4 == copypacost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pacost4 == copypacost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pacost4 == &copypacost4:\t\t"
              << ((pacost4 == &copypacost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pacost4 == &copypacost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pacost4 == *pcopypacost4:\t\t"
              << ((*pacost4 == *pcopypacost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pacost4 == *pcopypacost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pacost4 == pcopypacost4:\t\t"
              << ((pacost4 == pcopypacost4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pacost4 == pcopypacost4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pacost5 == copypacost5:\t\t"
              << ((*pacost5 == copypacost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pacost5 == copypacost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pacost5 == &copypacost5:\t\t"
              << ((pacost5 == &copypacost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pacost5 == &copypacost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pacost5 == *pcopypacost5:\t\t"
              << ((*pacost5 == *pcopypacost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pacost5 == *pcopypacost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pacost5 == pcopypacost5:\t\t"
              << ((pacost5 == pcopypacost5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pacost5 == pcopypacost5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl << std::endl;
    
    std::cout << "Spot check that different Additive Cost objects are not equal:" << std::endl;
    std::cout << "acost0 == acost1:\t\t\t"
              << ((acost0 == acost1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(acost0 == acost1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "acost0 == acost2:\t\t\t"
              << ((acost0 == acost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(acost0 == acost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "acost1 == acost2:\t\t\t"
              << ((acost1 == acost2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(acost1 == acost2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    
    /* Test operator* */

    AdditiveCost *sumCost;
    std::cout << std::endl
              << "Testing operator*:" << std::endl
              << std::endl;

    sumCost = new AdditiveCost(acost0.DEFAULT_COST+acost0.DEFAULT_COST,acost0.DEFAULT_UNITS);
    std::cout << "acost0*acost0:\t\t\t\t"
              << (acost0*acost0)->toString()
              << "\t\tCorrect output: "
              << sumCost->toString()
              << ((*(acost0*acost0) == *sumCost) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    delete sumCost;
    std::cout << "acost0*copyacost0:\t\t\t"
              << (acost0*copyacost0)->toString()
              << "\t\tCorrect output: "
              << (acost0*acost0)->toString()
              << ((*(acost0*copyacost0) == *(acost0*acost0)) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "acost0*(*pcopyacost0):\t\t\t"
              << (acost0*(*pcopyacost0))->toString()
              << "\t\tCorrect output: "
              << (acost0*acost0)->toString()
              << ((*(acost0*(*pcopyacost0)) == *(acost0*acost0)) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    sumCost = new AdditiveCost(acost1.getCost()+acost1.getCost(),acost1.getUnits());
    std::cout << "acost1*acost1:\t\t\t\t"
              << (acost1*acost1)->toString()
              << "\t\tCorrect output: "
              << sumCost->toString()
              << ((*(acost1*acost1) == *sumCost) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    delete sumCost;
    std::cout << "acost1*copyacost1:\t\t\t"
              << (acost1*copyacost1)->toString()
              << "\t\tCorrect output: "
              << (acost1*acost1)->toString()
              << ((*(acost1*copyacost1) == *(acost1*acost1)) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "acost1*(*pcopyacost1):\t\t\t"
              << (acost1*(*pcopyacost1))->toString()
              << "\t\tCorrect output: "
              << (acost1*acost1)->toString()
              << ((*(acost1*(*pcopyacost1)) == *(acost1*acost1)) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    sumCost = new AdditiveCost(acost2.getCost()+acost2.getCost(),acost2.getUnits());
    std::cout << "acost2*acost2:\t\t\t\t"
              << (acost2*acost2)->toString()
              << "\t\tCorrect output: "
              << sumCost->toString()
              << ((*(acost2*acost2) == *sumCost) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    delete sumCost;
    std::cout << "acost2*copyacost2:\t\t\t"
              << (acost2*copyacost2)->toString()
              << "\t\tCorrect output: "
              << (acost2*acost2)->toString()
              << ((*(acost2*copyacost2) == *(acost2*acost2)) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "acost2*(*pcopyacost2):\t\t\t"
              << (acost2*(*pcopyacost2))->toString()
              << "\t\tCorrect output: "
              << (acost2*acost2)->toString()
              << ((*(acost2*(*pcopyacost2)) == *(acost2*acost2)) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    sumCost = new AdditiveCost(pacost3->getCost()+pacost3->getCost(),pacost3->getUnits());
    std::cout << "(*pacost3)*(*pacost3):\t\t\t"
              << ((*pacost3)*(*pacost3))->toString()
              << "\t\tCorrect output: "
              << sumCost->toString()
              << ((*((*pacost3)*(*pacost3)) == *sumCost) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    delete sumCost;
    std::cout << "(*pacost3)*copypacost3:\t\t\t"
              << ((*pacost3)*copypacost3)->toString()
              << "\t\tCorrect output: "
              << ((*pacost3)*(*pacost3))->toString()
              << ((*((*pacost3)*copypacost3) == *((*pacost3)*(*pacost3))) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pacost3)*(*pcopypacost3):\t\t"
              << ((*pacost3)*(*pcopypacost3))->toString()
              << "\t\tCorrect output: "
              << ((*pacost3)*(*pacost3))->toString()
              << ((*((*pacost3)*(*pcopypacost3)) == *((*pacost3)*(*pacost3))) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    sumCost = new AdditiveCost(pacost4->getCost()+pacost4->getCost(),pacost4->getUnits());
    std::cout << "(*pacost4)*(*pacost4):\t\t\t"
              << ((*pacost4)*(*pacost4))->toString()
              << "\t\tCorrect output: "
              << sumCost->toString()
              << ((*((*pacost4)*(*pacost4)) == *sumCost) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    delete sumCost;
    std::cout << "(*pacost4)*copypacost4:\t\t\t"
              << ((*pacost4)*copypacost4)->toString()
              << "\t\tCorrect output: "
              << ((*pacost4)*(*pacost4))->toString()
              << ((*((*pacost4)*copypacost4) == *((*pacost4)*(*pacost4))) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pacost4)*(*pcopypacost4):\t\t"
              << ((*pacost4)*(*pcopypacost4))->toString()
              << "\t\tCorrect output: "
              << ((*pacost4)*(*pacost4))->toString()
              << ((*((*pacost4)*(*pcopypacost4)) == *((*pacost4)*(*pacost4))) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    sumCost = new AdditiveCost(pacost5->getCost()+pacost5->getCost(),pacost5->getUnits());
    std::cout << "(*pacost5)*(*pacost5):\t\t\t"
              << ((*pacost5)*(*pacost5))->toString()
              << "\t\tCorrect output: "
              << sumCost->toString()
              << ((*((*pacost5)*(*pacost5)) == *sumCost) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    delete sumCost;
    std::cout << "(*pacost5)*copypacost5:\t\t\t"
              << ((*pacost5)*copypacost5)->toString()
              << "\t\tCorrect output: "
              << ((*pacost5)*(*pacost5))->toString()
              << ((*((*pacost5)*copypacost5) == *((*pacost5)*(*pacost5))) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pacost5)*(*pcopypacost5):\t\t"
              << ((*pacost5)*(*pcopypacost5))->toString()
              << "\t\tCorrect output: "
              << ((*pacost5)*(*pacost5))->toString()
              << ((*((*pacost5)*(*pcopypacost5)) == *((*pacost5)*(*pacost5))) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl << std::endl;

    sumCost = new AdditiveCost(acost0.getCost()+acost1.getCost(),acost0.getUnits());
    std::cout << "acost0*acost1:\t\t\t\t"
              << (acost0*acost1)->toString()
              << "\t\tCorrect output: "
              << sumCost->toString()
              << ((*(acost0*acost1) == *sumCost) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    delete sumCost;
    sumCost = new AdditiveCost(acost0.getCost()+acost2.getCost(),acost0.getUnits());
    std::cout << "acost0*acost2:\t\t\t\t"
              << (acost0*acost2)->toString()
              << "\t\tCorrect output: "
              << sumCost->toString()
              << ((*(acost0*acost2) == *sumCost) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    delete sumCost;
    sumCost = new AdditiveCost(acost1.getCost()+acost2.getCost(),acost1.getUnits());
    std::cout << "acost1*acost2:\t\t\t\t"
              << (acost1*acost2)->toString()
              << "\t\tCorrect output: "
              << sumCost->toString()
              << ((*(acost1*acost2) == *sumCost) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    delete sumCost;
    
    /* Test destructor */
    
    std::cout << std::endl
              << "Testing the destructor:" << std::endl
              << std::endl;
    
    std::cout << "\tdelete pacost3;" << std::endl;
    delete pacost3;
    std::cout << "\tdelete pacost4;" << std::endl;
    delete pacost4;
    std::cout << "\tdelete pacost5;" << std::endl;
    delete pacost5;
    std::cout << "\tdelete pcopyacost0;" << std::endl;
    delete pcopyacost0;
    std::cout << "\tdelete pcopyacost1;" << std::endl;
    delete pcopyacost1;
    std::cout << "\tdelete pcopyacost2;" << std::endl;
    delete pcopyacost2;
    std::cout << "\tdelete pcopypacost3;" << std::endl;
    delete pcopypacost3;
    std::cout << "\tdelete pcopypacost4;" << std::endl;
    delete pcopypacost4;
    std::cout << "\tdelete pcopypacost5;" << std::endl;
    delete pcopypacost5;
    
    std::cout << std::endl;
    
}

#endif
