//
//  pathTest.h
//  Pathfinder
//
//  Created by Bradley Denby on 9/14/13.
//  Copyright (c) 2013 Bradley Denby. All rights reserved.
//

#ifndef Pathfinder_pathTest_h
#define Pathfinder_pathTest_h

#include "Path.h"
#include <fstream>

std::string vectorToString(const std::vector<unsigned int>& v) {
    std::stringstream ss;
    ss << "[";
    for (int i=0; i<v.size(); i++) {
        ss << " " << v.at(i);
    }
    ss << " ]";
    return ss.str();
}

void pathTest() {
    
    /************ Test the Path class ************/
    
    std::cout << std::endl
              << "****** Testing the Path class ******" << std::endl
              << std::endl;
    
    /* Read in the data */
    
    std::cout << "Reading in the data:" << std::endl
              << std::endl;
    
    std::cout << "std::vector<unsigned int> vector1;" << std::endl;
    std::vector<unsigned int> vector1;
    std::cout << "std::vector<unsigned int> vector3;" << std::endl;
    std::vector<unsigned int> vector3;
    std::cout << "std::ifstream ifile(\"pathTest.txt\");" << std::endl;
    std::ifstream ifile("pathTest.txt");
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
        std::cout << "TEST FAILED: pathTest.txt cannot be opened" << std::endl;
        return;
    }
    
    /* Test the constructors */
    
    std::cout << std::endl
              << "Testing the constructors:" << std::endl
              << std::endl;
    
    std::cout << "\tPath path0;" << std::endl;
    Path path0;
    std::cout << "\tPath path1(vector1);" << std::endl;
    Path path1(vector1);
    std::cout << "\tPath *ppath2 = new Path;" << std::endl;
    Path *ppath2 = new Path;
    std::cout << "\tPath *ppath3 = new Path(vector3);" << std::endl;
    Path *ppath3 = new Path(vector3);
    
    std::cout << std::endl
              << "\tPath copypath0(path0);" << std::endl;
    Path copypath0(path0);
    std::cout << "\tPath copypath1(path1);" << std::endl;
    Path copypath1(path1);
    std::cout << "\tPath copyppath2(*ppath2)" << std::endl;
    Path copyppath2(*ppath2);
    std::cout << "\tPath copyppath3(*ppath3)" << std::endl;
    Path copyppath3(*ppath3);
    
    std::cout << std::endl
              << "\tPath *pcopypath0 = new Path(path0);" << std::endl;
    Path *pcopypath0 = new Path(path0);
    std::cout << "\tPath *pcopypath1 = new Path(path1);" << std::endl;
    Path *pcopypath1 = new Path(path1);
    std::cout << "\tPath *pcopyppath2 = new Path(*ppath2);" << std::endl;
    Path *pcopyppath2 = new Path(*ppath2);
    std::cout << "\tPath *pcopyppath3 = new Path(*ppath3);" << std::endl;
    Path *pcopyppath3 = new Path(*ppath3);
    
    /* Test getPath() */
    
    std::vector<unsigned int> expectedVector;
    std::cout << std::endl
              << "Testing getPath():" << std::endl
              << std::endl;
    
    std::cout << "path0.getPath():\t\t\t"
              << vectorToString(path0.getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(expectedVector)
              << ((path0.getPath() == expectedVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedVector.push_back(1);
    std::cout << "path1.getPath():\t\t\t"
              << vectorToString(path1.getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(expectedVector)
              << ((path1.getPath() == expectedVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedVector.clear();
    std::cout << "ppath2->getPath():\t\t\t"
              << vectorToString(ppath2->getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(expectedVector)
              << ((ppath2->getPath() == expectedVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedVector.push_back(3);
    std::cout << "ppath3->getPath():\t\t\t"
              << vectorToString(ppath3->getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(expectedVector)
              << ((ppath3->getPath() == expectedVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedVector.clear();

    std::cout << "copypath0.getPath():\t\t\t"
              << vectorToString(copypath0.getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(expectedVector)
              << ((copypath0.getPath() == expectedVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedVector.push_back(1);
    std::cout << "copypath1.getPath():\t\t\t"
              << vectorToString(copypath1.getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(expectedVector)
              << ((copypath1.getPath() == expectedVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedVector.clear();
    std::cout << "copyppath2.getPath():\t\t\t"
              << vectorToString(copyppath2.getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(expectedVector)
              << ((copyppath2.getPath() == expectedVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedVector.push_back(3);
    std::cout << "copyppath3.getPath():\t\t\t"
              << vectorToString(copyppath3.getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(expectedVector)
              << ((copyppath3.getPath() == expectedVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedVector.clear();
    
    std::cout << "pcopypath0->getPath():\t\t\t"
              << vectorToString(pcopypath0->getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(expectedVector)
              << ((pcopypath0->getPath() == expectedVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedVector.push_back(1);
    std::cout << "pcopypath1->getPath():\t\t\t"
              << vectorToString(pcopypath1->getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(expectedVector)
              << ((pcopypath1->getPath() == expectedVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedVector.clear();
    std::cout << "pcopyppath2->getPath():\t\t\t"
              << vectorToString(pcopyppath2->getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(expectedVector)
              << ((pcopyppath2->getPath() == expectedVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedVector.push_back(3);
    std::cout << "pcopyppath3->getPath():\t\t\t"
              << vectorToString(pcopyppath3->getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(expectedVector)
              << ((pcopyppath3->getPath() == expectedVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedVector.clear();
    
    /* Test toString() */
    
    std::stringstream ss;
    std::cout << std::endl
              << "Testing toString():" << std::endl
              << std::endl;
    
    ss << vectorToString(path0.getPath());
    std::cout << "path0.toString():\t\t\t"
              << path0.toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((path0.toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << vectorToString(path1.getPath());
    std::cout << "path1.toString():\t\t\t"
              << path1.toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((path1.toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << vectorToString(ppath2->getPath());
    std::cout << "ppath2->toString():\t\t\t"
              << ppath2->toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((ppath2->toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << vectorToString(ppath3->getPath());
    std::cout << "ppath3->toString():\t\t\t"
              << ppath3->toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((ppath3->toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    
    ss << vectorToString(copypath0.getPath());
    std::cout << "copypath0.toString():\t\t\t"
              << copypath0.toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((copypath0.toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << vectorToString(copypath1.getPath());
    std::cout << "copypath1.toString():\t\t\t"
              << copypath1.toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((copypath1.toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << vectorToString(copyppath2.getPath());
    std::cout << "copyppath2.toString():\t\t\t"
              << copyppath2.toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((copyppath2.toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << vectorToString(copyppath3.getPath());
    std::cout << "copyppath3.toString():\t\t\t"
              << copyppath3.toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((copyppath3.toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    
    ss << vectorToString(pcopypath0->getPath());
    std::cout << "pcopypath0->toString():\t\t\t"
              << pcopypath0->toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((pcopypath0->toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << vectorToString(pcopypath1->getPath());
    std::cout << "pcopypath1->toString():\t\t\t"
              << pcopypath1->toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((pcopypath1->toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << vectorToString(pcopyppath2->getPath());
    std::cout << "pcopyppath2->toString():\t\t"
              << pcopyppath2->toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((pcopyppath2->toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << vectorToString(pcopyppath3->getPath());
    std::cout << "pcopyppath3->toString():\t\t"
              << pcopyppath3->toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((pcopyppath3->toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    
    /* Test operator<< */
    
    std::cout << std::endl
              << "Testing operator<<:" << std::endl
              << std::endl;
    
    std::cout << "cout << path0:\t\t\t\t" << path0 << std::endl
              << "\t(Expected:\t\t\t" << path0.toString() << "\t\t)"
              << std::endl << std::endl;
    std::cout << "cout << path1:\t\t\t\t" << path1 << std::endl
              << "\t(Expected:\t\t\t" << path1.toString() << "\t\t)"
              << std::endl << std::endl;
    std::cout << "cout << ppath2:\t\t\t\t" << *ppath2 << std::endl
              << "\t(Expected:\t\t\t" << ppath2->toString() << "\t\t)"
              << std::endl << std::endl;
    std::cout << "cout << ppath3:\t\t\t\t" << *ppath3 << std::endl
              << "\t(Expected:\t\t\t" << ppath3->toString() << "\t\t)"
              << std::endl << std::endl;

    std::cout << "cout << copypath0:\t\t\t" << copypath0 << std::endl
              << "\t(Expected:\t\t\t" << copypath0.toString() << "\t\t)"
              << std::endl << std::endl;
    std::cout << "cout << copypath1:\t\t\t" << copypath1 << std::endl
              << "\t(Expected:\t\t\t" << copypath1.toString() << "\t\t)"
              << std::endl << std::endl;
    std::cout << "cout << copyppath2:\t\t\t" << copyppath2 << std::endl
              << "\t(Expected:\t\t\t" << copyppath2.toString() << "\t\t)"
              << std::endl << std::endl;
    std::cout << "cout << copyppath3:\t\t\t" << copyppath3 << std::endl
              << "\t(Expected:\t\t\t" << copyppath3.toString() << "\t\t)"
              << std::endl << std::endl;

    std::cout << "cout << pcopypath0:\t\t\t" << *pcopypath0 << std::endl
              << "\t(Expected:\t\t\t" << pcopypath0->toString() << "\t\t)"
              << std::endl << std::endl;
    std::cout << "cout << pcopypath1:\t\t\t" << *pcopypath1 << std::endl
              << "\t(Expected:\t\t\t" << pcopypath1->toString() << "\t\t)"
              << std::endl << std::endl;
    std::cout << "cout << pcopyppath2:\t\t\t" << *pcopyppath2 << std::endl
              << "\t(Expected:\t\t\t" << pcopyppath2->toString() << "\t\t)"
              << std::endl << std::endl;
    std::cout << "cout << pcopyppath3:\t\t\t" << *pcopyppath3 << std::endl
              << "\t(Expected:\t\t\t" << pcopyppath3->toString() << "\t\t)"
              << std::endl << std::endl;

    /* Test operator== */
    
    std::cout << std::endl
              << "Testing operator==:" << std::endl
              << std::endl;
    
    std::cout << "Check that a Path object equals itself:" << std::endl;
    std::cout << "path0 == path0:\t\t\t\t"
              << ((path0 == path0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((path0 == path0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "path1 == path1:\t\t\t\t"
              << ((path1 == path1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((path1 == path1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*ppath2 == *ppath2:\t\t\t"
              << ((*ppath2 == *ppath2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*ppath2 == *ppath2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*ppath3 == *ppath3:\t\t\t"
              << ((*ppath3 == *ppath3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*ppath3 == *ppath3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypath0 == copypath0:\t\t\t"
              << ((copypath0 == copypath0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copypath0 == copypath0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypath1 == copypath1:\t\t\t"
              << ((copypath1 == copypath1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copypath1 == copypath1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copyppath2 == copyppath2:\t\t"
              << ((copyppath2 == copyppath2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copyppath2 == copyppath2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copyppath3 == copyppath3:\t\t"
              << ((copyppath3 == copyppath3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copyppath3 == copyppath3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopypath0 == *pcopypath0:\t\t"
              << ((*pcopypath0 == *pcopypath0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopypath0 == *pcopypath0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopypath1 == *pcopypath1:\t\t"
              << ((*pcopypath1 == *pcopypath1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopypath1 == *pcopypath1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopyppath2 == *pcopyppath2:\t\t"
              << ((*pcopyppath2 == *pcopyppath2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopyppath2 == *pcopyppath2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopyppath3 == *pcopyppath3:\t\t"
              << ((*pcopyppath3 == *pcopyppath3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopyppath3 == *pcopyppath3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl << std::endl;
    
    std::cout << "Check that the address of a Path object equals its own address:" << std::endl;
    std::cout << "&path0 == &path0:\t\t\t"
              << ((&path0 == &path0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&path0 == &path0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&path1 == &path1:\t\t\t"
              << ((&path1 == &path1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&path1 == &path1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "ppath2 == ppath2:\t\t\t"
              << ((ppath2 == ppath2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((ppath2 == ppath2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "ppath3 == ppath3:\t\t\t"
              << ((ppath3 == ppath3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((ppath3 == ppath3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copypath0 == &copypath0:\t\t"
              << ((&copypath0 == &copypath0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copypath0 == &copypath0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copypath1 == &copypath1:\t\t"
              << ((&copypath1 == &copypath1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copypath1 == &copypath1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copyppath2 == &copyppath2:\t\t"
              << ((&copyppath2 == &copyppath2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copyppath2 == &copyppath2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copyppath3 == &copyppath3:\t\t"
              << ((&copyppath3 == &copyppath3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copyppath3 == &copyppath3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypath0 == pcopypath0:\t\t"
              << ((pcopypath0 == pcopypath0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopypath0 == pcopypath0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypath1 == pcopypath1:\t\t"
              << ((pcopypath1 == pcopypath1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopypath1 == pcopypath1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopyppath2 == pcopyppath2:\t\t"
              << ((pcopyppath2 == pcopyppath2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopyppath2 == pcopyppath2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopyppath3 == pcopyppath3:\t\t"
              << ((pcopyppath3 == pcopyppath3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopyppath3 == pcopyppath3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl << std::endl;

    std::cout << "Check that a Path object equals a copy, but that" << std::endl
              << "the addresses of a Path object and a copy differ:" << std::endl;
    std::cout << "path0 == copypath0:\t\t\t"
              << ((path0 == copypath0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((path0 == copypath0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&path0 == &copypath0:\t\t\t"
              << ((&path0 == &copypath0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&path0 == &copypath0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "path0 == *pcopypath0:\t\t\t"
              << ((path0 == *pcopypath0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((path0 == *pcopypath0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&path0 == pcopypath0:\t\t\t"
              << ((&path0 == pcopypath0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&path0 == pcopypath0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "path1 == copypath1:\t\t\t"
              << ((path1 == copypath1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((path1 == copypath1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&path1 == &copypath1:\t\t\t"
              << ((&path1 == &copypath1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&path1 == &copypath1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "path1 == *pcopypath1:\t\t\t"
              << ((path1 == *pcopypath1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((path1 == *pcopypath1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&path1 == pcopypath1:\t\t\t"
              << ((&path1 == pcopypath1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&path1 == pcopypath1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*ppath2 == copyppath2:\t\t\t"
              << ((*ppath2 == copyppath2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*ppath2 == copyppath2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "ppath2 == &copyppath2:\t\t\t"
              << ((ppath2 == &copyppath2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(ppath2 == &copyppath2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*ppath2 == *pcopyppath2:\t\t"
              << ((*ppath2 == *pcopyppath2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*ppath2 == *pcopyppath2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "ppath2 == pcopyppath2:\t\t\t"
              << ((ppath2 == pcopyppath2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(ppath2 == pcopyppath2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*ppath3 == copyppath3:\t\t\t"
              << ((*ppath3 == copyppath3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*ppath3 == copyppath3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "ppath3 == &copyppath3:\t\t\t"
              << ((ppath3 == &copyppath3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(ppath3 == &copyppath3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*ppath3 == *pcopyppath3:\t\t"
              << ((*ppath3 == *pcopyppath3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*ppath3 == *pcopyppath3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "ppath3 == pcopyppath3:\t\t\t"
              << ((ppath3 == pcopyppath3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(ppath3 == pcopyppath3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl << std::endl;
    
    std::cout << "Spot check that different Path objects are not equal:" << std::endl;
    std::cout << "path0 == path1:\t\t\t\t"
              << ((path0 == path1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(path0 == path1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "path0 == *ppath3:\t\t\t"
              << ((path0 == *ppath3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(path0 == *ppath3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "path1 == *ppath3:\t\t\t"
              << ((path1 == *ppath3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(path1 == *ppath3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    
    /* Test operator* */
    
    std::cout << std::endl
              << "Testing operator*:" << std::endl
              << std::endl;
    
    std::cout << "path0*path0:\t\t\t\t"
              << (path0*path0)->toString()
              << "\t\t\tCorrect output: "
              << INVALID_PATH->toString()
              << ((path0*path0 == INVALID_PATH) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "path0*copypath0:\t\t\t"
              << (path0*copypath0)->toString()
              << "\t\t\tCorrect output: "
              << (path0*path0)->toString()
              << ((path0*copypath0 == path0*path0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "path0*(*pcopypath0):\t\t\t"
              << (path0*(*pcopypath0))->toString()
              << "\t\t\tCorrect output: "
              << (path0*path0)->toString()
              << ((path0*(*pcopypath0) == path0*path0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "path1*path1:\t\t\t\t"
              << (path1*path1)->toString()
              << "\t\t\tCorrect output: "
              << INVALID_PATH->toString()
              << ((path1*path1 == INVALID_PATH) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "path1*copypath1:\t\t\t"
              << (path1*copypath1)->toString()
              << "\t\t\tCorrect output: "
              << (path1*path1)->toString()
              << ((path1*copypath1 == path1*path1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "path1*(*pcopypath1):\t\t\t"
              << (path1*(*pcopypath1))->toString()
              << "\t\t\tCorrect output: "
              << (path1*path1)->toString()
              << ((path1*(*pcopypath1) == path1*path1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*ppath2)*(*ppath2):\t\t\t"
              << ((*ppath2)*(*ppath2))->toString()
              << "\t\t\tCorrect output: "
              << INVALID_PATH->toString()
              << (((*ppath2)*(*ppath2) == INVALID_PATH) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*ppath2)*copyppath2:\t\t\t"
              << ((*ppath2)*copyppath2)->toString()
              << "\t\t\tCorrect output: "
              << ((*ppath2)*(*ppath2))->toString()
              << (((*ppath2)*copyppath2 == (*ppath2)*(*ppath2)) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*ppath2)*(*pcopyppath2):\t\t"
              << ((*ppath2)*(*pcopyppath2))->toString()
              << "\t\t\tCorrect output: "
              << ((*ppath2)*(*ppath2))->toString()
              << (((*ppath2)*(*pcopyppath2) == (*ppath2)*(*ppath2)) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*ppath3)*(*ppath3):\t\t\t"
              << ((*ppath3)*(*ppath3))->toString()
              << "\t\t\tCorrect output: "
              << INVALID_PATH->toString()
              << (((*ppath3)*(*ppath3) == INVALID_PATH) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*ppath3)*copyppath3:\t\t\t"
              << ((*ppath3)*copyppath3)->toString()
              << "\t\t\tCorrect output: "
              << ((*ppath3)*(*ppath3))->toString()
              << (((*ppath3)*copyppath3 == (*ppath3)*(*ppath3)) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*ppath3)*(*pcopyppath3):\t\t"
              << ((*ppath3)*(*pcopyppath3))->toString()
              << "\t\t\tCorrect output: "
              << ((*ppath3)*(*ppath3))->toString()
              << (((*ppath3)*(*pcopyppath3) == (*ppath3)*(*ppath3)) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl << std::endl;

    std::cout << "path0*path1:\t\t\t\t"
              << (path0*path1)->toString()
              << "\t\t\tCorrect output: "
              << INVALID_PATH->toString()
              << ((path0*path1 == INVALID_PATH) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "path0*(*ppath3):\t\t\t"
              << (path0*(*ppath3))->toString()
              << "\t\t\tCorrect output: "
              << INVALID_PATH->toString()
              << ((path0*(*ppath3) == INVALID_PATH) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "path1*(*ppath3):\t\t\t"
              << (path1*(*ppath3))->toString()
              << "\t\t\tCorrect output: "
              << INVALID_PATH->toString()
              << ((path1*(*ppath3) == INVALID_PATH) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    
    /* Test destructor */
    
    std::cout << std::endl
              << "Testing the destructor:" << std::endl
              << std::endl;
    
    std::cout << "\tdelete ppath2;" << std::endl;
    delete ppath2;
    std::cout << "\tdelete ppath3;" << std::endl;
    delete ppath3;
    std::cout << "\tdelete pcopypath0;" << std::endl;
    delete pcopypath0;
    std::cout << "\tdelete pcopypath1;" << std::endl;
    delete pcopypath1;
    std::cout << "\tdelete pcopyppath2;" << std::endl;
    delete pcopyppath2;
    std::cout << "\tdelete pcopyppath3;" << std::endl;
    delete pcopyppath3;
    
    std::cout << std::endl;

}

#endif
