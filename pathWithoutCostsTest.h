//
//  pathWithoutCostsTest.h
//  Pathfinder
//
//  Created by Bradley Denby on 10/13/13.
//  Copyright (c) 2013 Bradley Denby. All rights reserved.
//

#ifndef _pathWithoutCostsTest_h
#define _pathWithoutCostsTest_h

#include "PathWithoutCosts.h"
#include <fstream>

//std::string vectorToString(const std::vector<unsigned int>& v) {
//    std::stringstream ss;
//    ss << "[";
//    for (int i=0; i<v.size(); i++) {
//        ss << " " << v.at(i);
//    }
//    ss << " ]";
//    return ss.str();
//}

void pathWithoutCostsTest() {
    
    /************ Test the PathWithoutCosts class ************/

    std::cout << std::endl
              << "****** Testing the PathWithoutCosts class ******" << std::endl
              << std::endl;

    /* Read in the data */

    std::cout << "Reading in the data:" << std::endl
              << std::endl;

    std::cout << "std::vector<unsigned int> vector1;" << std::endl;
    std::vector<unsigned int> vector1;
    std::cout << "std::vector<unsigned int> vector3;" << std::endl;
    std::vector<unsigned int> vector3;
    std::cout << "std::ifstream ifile(\"pathWithoutCostsTest.txt\");" << std::endl;
    std::ifstream ifile("pathWithoutCostsTest.txt");
    if (ifile.is_open()) {
        std::cout << "std::string fileLine;" << std::endl;
        std::string fileLine;
        std::cout << "unsigned int fileUInt;" << std::endl;
        unsigned int fileUInt;

        std::cout << "std::stringstream ss1;" << std::endl;
        std::stringstream ss1;
        std::cout << "std::getline(ifile, fileLine);" << std::endl;
        std::getline(ifile, fileLine);
        std::cout << "ss1 << fileLine;" << std::endl;
        ss1 << fileLine;
        std::cout << "while (ss1 >> fileUInt) {" << std::endl
                  << "\tvector1.push_back(fileUInt);" << std::endl
                  << "}" << std::endl;
        while (ss1 >> fileUInt) {
            vector1.push_back(fileUInt);
        }
        ss1.str("");

        std::cout << "std::stringstream ss2;" << std::endl;
        std::stringstream ss2;
        std::cout << "std::getline(ifile, fileLine);" << std::endl;
        std::getline(ifile, fileLine);
        std::cout << "ss2 << fileLine;" << std::endl;
        ss2 << fileLine;
        std::cout << "while (ss2 >> fileUInt) {" << std::endl
                  << "\tvector3.push_back(fileUInt);" << std::endl
                  << "}" << std::endl;
        while (ss2 >> fileUInt) {
            vector3.push_back(fileUInt);
        }
        ss2.str("");
    }
    else {
        std::cout << "TEST FAILED: pathWithoutCostsTest.txt cannot be opened" << std::endl;
        return;
    }
    
    /* Test the constructors */

    std::cout << std::endl
              << "Testing the constructors:" << std::endl
              << std::endl;

    std::cout << "\tPathWithoutCosts pathwoc0;" << std::endl;
    PathWithoutCosts pathwoc0;
    std::cout << "\tPathWithoutCosts pathwoc1(vector1);" << std::endl;
    PathWithoutCosts pathwoc1(vector1);
    std::cout << "\tPathWithoutCosts *ppathwoc2 = new PathWithoutCosts;" << std::endl;
    PathWithoutCosts *ppathwoc2 = new PathWithoutCosts;
    std::cout << "\tPathWithoutCosts *ppathwoc3 = new PathWithoutCosts(vector3);" << std::endl;
    PathWithoutCosts *ppathwoc3 = new PathWithoutCosts(vector3);

    std::cout << std::endl
              << "\tPathWithoutCosts copypathwoc0(pathwoc0);" << std::endl;
    PathWithoutCosts copypathwoc0(pathwoc0);
    std::cout << "\tPathWithoutCosts copypathwoc1(pathwoc1);" << std::endl;
    PathWithoutCosts copypathwoc1(pathwoc1);
    std::cout << "\tPathWithoutCosts copyppathwoc2(*ppathwoc2)" << std::endl;
    PathWithoutCosts copyppathwoc2(*ppathwoc2);
    std::cout << "\tPathWithoutCosts copyppathwoc3(*ppathwoc3)" << std::endl;
    PathWithoutCosts copyppathwoc3(*ppathwoc3);

    std::cout << std::endl
              << "\tPathWithoutCosts *pcopypathwoc0 = new PathWithoutCosts(pathwoc0);" << std::endl;
    PathWithoutCosts *pcopypathwoc0 = new PathWithoutCosts(pathwoc0);
    std::cout << "\tPathWithoutCosts *pcopypathwoc1 = new PathWithoutCosts(pathwoc1);" << std::endl;
    PathWithoutCosts *pcopypathwoc1 = new PathWithoutCosts(pathwoc1);
    std::cout << "\tPathWithoutCosts *pcopyppathwoc2 = new PathWithoutCosts(*ppathwoc2);" << std::endl;
    PathWithoutCosts *pcopyppathwoc2 = new PathWithoutCosts(*ppathwoc2);
    std::cout << "\tPathWithoutCosts *pcopyppathwoc3 = new PathWithoutCosts(*ppathwoc3);" << std::endl;
    PathWithoutCosts *pcopyppathwoc3 = new PathWithoutCosts(*ppathwoc3);
    
    /* Test getPath() */

    std::vector<unsigned int> expectedVector;
    std::cout << std::endl
              << "Testing getPath():" << std::endl
              << std::endl;

    std::cout << "pathwoc0.getPath():\t\t\t"
              << vectorToString(pathwoc0.getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(expectedVector)
              << ((pathwoc0.getPath() == expectedVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedVector.push_back(1);
    std::cout << "pathwoc1.getPath():\t\t\t"
              << vectorToString(pathwoc1.getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(expectedVector)
              << ((pathwoc1.getPath() == expectedVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedVector.clear();
    std::cout << "ppathwoc2->getPath():\t\t\t"
              << vectorToString(ppathwoc2->getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(expectedVector)
              << ((ppathwoc2->getPath() == expectedVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedVector.push_back(3);
    std::cout << "ppathwoc3->getPath():\t\t\t"
              << vectorToString(ppathwoc3->getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(expectedVector)
              << ((ppathwoc3->getPath() == expectedVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedVector.clear();

    std::cout << "copypathwoc0.getPath():\t\t\t"
              << vectorToString(copypathwoc0.getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(expectedVector)
              << ((copypathwoc0.getPath() == expectedVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedVector.push_back(1);
    std::cout << "copypathwoc1.getPath():\t\t\t"
              << vectorToString(copypathwoc1.getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(expectedVector)
              << ((copypathwoc1.getPath() == expectedVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedVector.clear();
    std::cout << "copyppathwoc2.getPath():\t\t"
              << vectorToString(copyppathwoc2.getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(expectedVector)
              << ((copyppathwoc2.getPath() == expectedVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedVector.push_back(3);
    std::cout << "copyppathwoc3.getPath():\t\t"
              << vectorToString(copyppathwoc3.getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(expectedVector)
              << ((copyppathwoc3.getPath() == expectedVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedVector.clear();

    std::cout << "pcopypathwoc0->getPath():\t\t"
              << vectorToString(pcopypathwoc0->getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(expectedVector)
              << ((pcopypathwoc0->getPath() == expectedVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedVector.push_back(1);
    std::cout << "pcopypathwoc1->getPath():\t\t"
              << vectorToString(pcopypathwoc1->getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(expectedVector)
              << ((pcopypathwoc1->getPath() == expectedVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedVector.clear();
    std::cout << "pcopyppathwoc2->getPath():\t\t"
              << vectorToString(pcopyppathwoc2->getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(expectedVector)
              << ((pcopyppathwoc2->getPath() == expectedVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedVector.push_back(3);
    std::cout << "pcopyppathwoc3->getPath():\t\t"
              << vectorToString(pcopyppathwoc3->getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(expectedVector)
              << ((pcopyppathwoc3->getPath() == expectedVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedVector.clear();

    /* Test toString() */

    std::stringstream ss;
    std::cout << std::endl
              << "Testing toString():" << std::endl
              << std::endl;

    ss << vectorToString(pathwoc0.getPath());
    std::cout << "pathwoc0.toString():\t\t\t"
              << pathwoc0.toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((pathwoc0.toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << vectorToString(pathwoc1.getPath());
    std::cout << "pathwoc1.toString():\t\t\t"
              << pathwoc1.toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((pathwoc1.toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << vectorToString(ppathwoc2->getPath());
    std::cout << "ppathwoc2->toString():\t\t\t"
              << ppathwoc2->toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((ppathwoc2->toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << vectorToString(ppathwoc3->getPath());
    std::cout << "ppathwoc3->toString():\t\t\t"
              << ppathwoc3->toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((ppathwoc3->toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");

    ss << vectorToString(copypathwoc0.getPath());
    std::cout << "copypathwoc0.toString():\t\t"
              << copypathwoc0.toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((copypathwoc0.toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << vectorToString(copypathwoc1.getPath());
    std::cout << "copypathwoc1.toString():\t\t"
              << copypathwoc1.toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((copypathwoc1.toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << vectorToString(copyppathwoc2.getPath());
    std::cout << "copyppathwoc2.toString():\t\t"
              << copyppathwoc2.toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((copyppathwoc2.toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << vectorToString(copyppathwoc3.getPath());
    std::cout << "copyppathwoc3.toString():\t\t"
              << copyppathwoc3.toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((copyppathwoc3.toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");

    ss << vectorToString(pcopypathwoc0->getPath());
    std::cout << "pcopypathwoc0->toString():\t\t"
              << pcopypathwoc0->toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((pcopypathwoc0->toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << vectorToString(pcopypathwoc1->getPath());
    std::cout << "pcopypathwoc1->toString():\t\t"
              << pcopypathwoc1->toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((pcopypathwoc1->toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << vectorToString(pcopyppathwoc2->getPath());
    std::cout << "pcopyppathwoc2->toString():\t\t"
              << pcopyppathwoc2->toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((pcopyppathwoc2->toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << vectorToString(pcopyppathwoc3->getPath());
    std::cout << "pcopyppathwoc3->toString():\t\t"
              << pcopyppathwoc3->toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((pcopyppathwoc3->toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");

    /* Test operator== */

    std::cout << std::endl
              << "Testing operator==:" << std::endl
              << std::endl;

    std::cout << "Check that a PathWithoutCosts object equals itself:" << std::endl;
    std::cout << "pathwoc0 == pathwoc0:\t\t\t"
              << ((pathwoc0 == pathwoc0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pathwoc0 == pathwoc0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pathwoc1 == pathwoc1:\t\t\t"
              << ((pathwoc1 == pathwoc1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pathwoc1 == pathwoc1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*ppathwoc2 == *ppathwoc2:\t\t"
              << ((*ppathwoc2 == *ppathwoc2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*ppathwoc2 == *ppathwoc2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*ppathwoc3 == *ppathwoc3:\t\t"
              << ((*ppathwoc3 == *ppathwoc3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*ppathwoc3 == *ppathwoc3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypathwoc0 == copypathwoc0:\t\t"
              << ((copypathwoc0 == copypathwoc0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copypathwoc0 == copypathwoc0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypathwoc1 == copypathwoc1:\t\t"
              << ((copypathwoc1 == copypathwoc1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copypathwoc1 == copypathwoc1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copyppathwoc2 == copyppathwoc2:\t\t"
              << ((copyppathwoc2 == copyppathwoc2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copyppathwoc2 == copyppathwoc2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copyppathwoc3 == copyppathwoc3:\t\t"
              << ((copyppathwoc3 == copyppathwoc3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copyppathwoc3 == copyppathwoc3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopypathwoc0 == *pcopypathwoc0:\t"
              << ((*pcopypathwoc0 == *pcopypathwoc0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopypathwoc0 == *pcopypathwoc0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopypathwoc1 == *pcopypathwoc1:\t"
              << ((*pcopypathwoc1 == *pcopypathwoc1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopypathwoc1 == *pcopypathwoc1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopyppathwoc2 == *pcopyppathwoc2:\t"
              << ((*pcopyppathwoc2 == *pcopyppathwoc2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopyppathwoc2 == *pcopyppathwoc2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopyppathwoc3 == *pcopyppathwoc3:\t"
              << ((*pcopyppathwoc3 == *pcopyppathwoc3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopyppathwoc3 == *pcopyppathwoc3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl << std::endl;

    std::cout << "Check that the address of a PathWithoutCosts object equals its own address:" << std::endl;
    std::cout << "&pathwoc0 == &pathwoc0:\t\t\t"
              << ((&pathwoc0 == &pathwoc0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&pathwoc0 == &pathwoc0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&pathwoc1 == &pathwoc1:\t\t\t"
              << ((&pathwoc1 == &pathwoc1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&pathwoc1 == &pathwoc1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "ppathwoc2 == ppathwoc2:\t\t\t"
              << ((ppathwoc2 == ppathwoc2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((ppathwoc2 == ppathwoc2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "ppathwoc3 == ppathwoc3:\t\t\t"
              << ((ppathwoc3 == ppathwoc3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((ppathwoc3 == ppathwoc3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copypathwoc0 == &copypathwoc0:\t\t"
              << ((&copypathwoc0 == &copypathwoc0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copypathwoc0 == &copypathwoc0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copypathwoc1 == &copypathwoc1:\t\t"
              << ((&copypathwoc1 == &copypathwoc1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copypathwoc1 == &copypathwoc1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copyppathwoc2 == &copyppathwoc2:\t"
              << ((&copyppathwoc2 == &copyppathwoc2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copyppathwoc2 == &copyppathwoc2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copyppathwoc3 == &copyppathwoc3:\t"
              << ((&copyppathwoc3 == &copyppathwoc3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copyppathwoc3 == &copyppathwoc3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypathwoc0 == pcopypathwoc0:\t\t"
              << ((pcopypathwoc0 == pcopypathwoc0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopypathwoc0 == pcopypathwoc0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypathwoc1 == pcopypathwoc1:\t\t"
              << ((pcopypathwoc1 == pcopypathwoc1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopypathwoc1 == pcopypathwoc1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopyppathwoc2 == pcopyppathwoc2:\t"
              << ((pcopyppathwoc2 == pcopyppathwoc2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopyppathwoc2 == pcopyppathwoc2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopyppathwoc3 == pcopyppathwoc3:\t"
              << ((pcopyppathwoc3 == pcopyppathwoc3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopyppathwoc3 == pcopyppathwoc3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl << std::endl;

    std::cout << "Check that a PathWithoutCosts object equals a copy, but that" << std::endl
              << "the addresses of a PathWithoutCosts object and a copy differ:" << std::endl;
    std::cout << "pathwoc0 == copypathwoc0:\t\t"
              << ((pathwoc0 == copypathwoc0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pathwoc0 == copypathwoc0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&pathwoc0 == &copypathwoc0:\t\t"
              << ((&pathwoc0 == &copypathwoc0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&pathwoc0 == &copypathwoc0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pathwoc0 == *pcopypathwoc0:\t\t"
              << ((pathwoc0 == *pcopypathwoc0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pathwoc0 == *pcopypathwoc0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&pathwoc0 == pcopypathwoc0:\t\t"
              << ((&pathwoc0 == pcopypathwoc0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&pathwoc0 == pcopypathwoc0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pathwoc1 == copypathwoc1:\t\t"
              << ((pathwoc1 == copypathwoc1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pathwoc1 == copypathwoc1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&pathwoc1 == &copypathwoc1:\t\t"
              << ((&pathwoc1 == &copypathwoc1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&pathwoc1 == &copypathwoc1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pathwoc1 == *pcopypathwoc1:\t\t"
              << ((pathwoc1 == *pcopypathwoc1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pathwoc1 == *pcopypathwoc1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&pathwoc1 == pcopypathwoc1:\t\t"
              << ((&pathwoc1 == pcopypathwoc1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&pathwoc1 == pcopypathwoc1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*ppathwoc2 == copyppathwoc2:\t\t"
              << ((*ppathwoc2 == copyppathwoc2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*ppathwoc2 == copyppathwoc2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "ppathwoc2 == &copyppathwoc2:\t\t"
              << ((ppathwoc2 == &copyppathwoc2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(ppathwoc2 == &copyppathwoc2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*ppathwoc2 == *pcopyppathwoc2:\t\t"
              << ((*ppathwoc2 == *pcopyppathwoc2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*ppathwoc2 == *pcopyppathwoc2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "ppathwoc2 == pcopyppathwoc2:\t\t"
              << ((ppathwoc2 == pcopyppathwoc2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(ppathwoc2 == pcopyppathwoc2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*ppathwoc3 == copyppathwoc3:\t\t"
              << ((*ppathwoc3 == copyppathwoc3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*ppathwoc3 == copyppathwoc3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "ppathwoc3 == &copyppathwoc3:\t\t"
              << ((ppathwoc3 == &copyppathwoc3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(ppathwoc3 == &copyppathwoc3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*ppathwoc3 == *pcopyppathwoc3:\t\t"
              << ((*ppathwoc3 == *pcopyppathwoc3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*ppathwoc3 == *pcopyppathwoc3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "ppathwoc3 == pcopyppathwoc3:\t\t"
              << ((ppathwoc3 == pcopyppathwoc3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(ppathwoc3 == pcopyppathwoc3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl << std::endl;
    
    std::cout << "Spot check that different PathWithoutCosts objects are not equal:" << std::endl;
    std::cout << "pathwoc0 == pathwoc1:\t\t\t"
              << ((pathwoc0 == pathwoc1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pathwoc0 == pathwoc1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pathwoc0 == *ppathwoc3:\t\t\t"
              << ((pathwoc0 == *ppathwoc3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pathwoc0 == *ppathwoc3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pathwoc1 == *ppathwoc3:\t\t\t"
              << ((pathwoc1 == *ppathwoc3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pathwoc1 == *ppathwoc3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;

    /* Test operator* */

    std::cout << std::endl
              << "Testing operator*:" << std::endl
              << std::endl;

    std::cout << "pathwoc0*pathwoc0:\t\t\t"
              << (pathwoc0*pathwoc0)->toString()
              << "\t\t\tCorrect output: "
              << INVALID_PATH->toString()
              << ((pathwoc0*pathwoc0 == INVALID_PATH) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pathwoc0*copypathwoc0:\t\t\t"
              << (pathwoc0*copypathwoc0)->toString()
              << "\t\t\tCorrect output: "
              << (pathwoc0*pathwoc0)->toString()
              << ((pathwoc0*copypathwoc0 == pathwoc0*pathwoc0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pathwoc0*(*pcopypathwoc0):\t\t"
              << (pathwoc0*(*pcopypathwoc0))->toString()
              << "\t\t\tCorrect output: "
              << (pathwoc0*pathwoc0)->toString()
              << ((pathwoc0*(*pcopypathwoc0) == pathwoc0*pathwoc0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pathwoc1*pathwoc1:\t\t\t"
              << (pathwoc1*pathwoc1)->toString()
              << "\t\t\tCorrect output: "
              << INVALID_PATH->toString()
              << ((pathwoc1*pathwoc1 == INVALID_PATH) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pathwoc1*copypathwoc1:\t\t\t"
              << (pathwoc1*copypathwoc1)->toString()
              << "\t\t\tCorrect output: "
              << (pathwoc1*pathwoc1)->toString()
              << ((pathwoc1*copypathwoc1 == pathwoc1*pathwoc1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pathwoc1*(*pcopypathwoc1):\t\t"
              << (pathwoc1*(*pcopypathwoc1))->toString()
              << "\t\t\tCorrect output: "
              << (pathwoc1*pathwoc1)->toString()
              << ((pathwoc1*(*pcopypathwoc1) == pathwoc1*pathwoc1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*ppathwoc2)*(*ppathwoc2):\t\t"
              << ((*ppathwoc2)*(*ppathwoc2))->toString()
              << "\t\t\tCorrect output: "
              << INVALID_PATH->toString()
              << (((*ppathwoc2)*(*ppathwoc2) == INVALID_PATH) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*ppathwoc2)*copyppathwoc2:\t\t"
              << ((*ppathwoc2)*copyppathwoc2)->toString()
              << "\t\t\tCorrect output: "
              << ((*ppathwoc2)*(*ppathwoc2))->toString()
              << (((*ppathwoc2)*copyppathwoc2 == (*ppathwoc2)*(*ppathwoc2)) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*ppathwoc2)*(*pcopyppathwoc2):\t\t"
              << ((*ppathwoc2)*(*pcopyppathwoc2))->toString()
              << "\t\t\tCorrect output: "
              << ((*ppathwoc2)*(*ppathwoc2))->toString()
              << (((*ppathwoc2)*(*pcopyppathwoc2) == (*ppathwoc2)*(*ppathwoc2)) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*ppathwoc3)*(*ppathwoc3):\t\t"
              << ((*ppathwoc3)*(*ppathwoc3))->toString()
              << "\t\t\tCorrect output: "
              << INVALID_PATH->toString()
              << (((*ppathwoc3)*(*ppathwoc3) == INVALID_PATH) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*ppathwoc3)*copyppathwoc3:\t\t"
              << ((*ppathwoc3)*copyppathwoc3)->toString()
              << "\t\t\tCorrect output: "
              << ((*ppathwoc3)*(*ppathwoc3))->toString()
              << (((*ppathwoc3)*copyppathwoc3 == (*ppathwoc3)*(*ppathwoc3)) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*ppathwoc3)*(*pcopyppathwoc3):\t\t"
              << ((*ppathwoc3)*(*pcopyppathwoc3))->toString()
              << "\t\t\tCorrect output: "
              << ((*ppathwoc3)*(*ppathwoc3))->toString()
              << (((*ppathwoc3)*(*pcopyppathwoc3) == (*ppathwoc3)*(*ppathwoc3)) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl << std::endl;

    std::cout << "pathwoc0*pathwoc1:\t\t\t"
              << (pathwoc0*pathwoc1)->toString()
              << "\t\t\tCorrect output: "
              << INVALID_PATH->toString()
              << ((pathwoc0*pathwoc1 == INVALID_PATH) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pathwoc0*(*ppathwoc3):\t\t\t"
              << (pathwoc0*(*ppathwoc3))->toString()
              << "\t\t\tCorrect output: "
              << INVALID_PATH->toString()
              << ((pathwoc0*(*ppathwoc3) == INVALID_PATH) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedVector.push_back(1);
    expectedVector.push_back(3);
    PathWithoutCosts *expectedPathWithoutCosts = new PathWithoutCosts(expectedVector);
    std::cout << "pathwoc1*(*ppathwoc3):\t\t\t"
              << (pathwoc1*(*ppathwoc3))->toString()
              << "\t\t\tCorrect output: "
              << expectedPathWithoutCosts->toString()
              << ((*(pathwoc1*(*ppathwoc3)) == *expectedPathWithoutCosts) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    delete expectedPathWithoutCosts;
    expectedVector.clear();
    
    /* Test destructor */

    std::cout << std::endl
              << "Testing the destructor:" << std::endl
              << std::endl;

    std::cout << "\tdelete ppathwoc2;" << std::endl;
    delete ppathwoc2;
    std::cout << "\tdelete ppathwoc3;" << std::endl;
    delete ppathwoc3;
    std::cout << "\tdelete pcopypathwoc0;" << std::endl;
    delete pcopypathwoc0;
    std::cout << "\tdelete pcopypathwoc1;" << std::endl;
    delete pcopypathwoc1;
    std::cout << "\tdelete pcopyppathwoc2;" << std::endl;
    delete pcopyppathwoc2;
    std::cout << "\tdelete pcopyppathwoc3;" << std::endl;
    delete pcopyppathwoc3;
    
    std::cout << std::endl;
    
}

#endif
