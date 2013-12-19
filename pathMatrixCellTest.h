//
//  pathMatrixCellTest.h
//  Pathfinder
//
//  Created by Bradley Denby on 11/10/13.
//  Copyright (c) 2013 Bradley Denby. All rights reserved.
//

#ifndef Pathfinder_pathMatrixCellTest_h
#define Pathfinder_pathMatrixCellTest_h

#include "PathMatrixCell.h"
#include <fstream>

std::string cellVectorToString(const std::vector<const Path*>& v) {
    std::stringstream ss;
    ss << "{";
    for (int i=0; i<v.size(); i++) {
        ss << " " << v.at(i)->toString();
    }
    ss << " }";
    return ss.str();
}

bool comparePathPointerVectors(const std::vector<const Path*>& v1, const std::vector<const Path*>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    else {
        for (int i=0; i<v1.size(); i++) {
            if (!(*(v1.at(i)) == *(v2.at(i)))) {
                return false;
            }
        }
        return true;
    }
}

void pathMatrixCellTest() {
    
    /************ Test the PathMatrixCell class ************/
    
    std::cout << std::endl
              << "****** Testing the PathMatrixCell class ******" << std::endl
              << std::endl;
    
    /* Read in the data */

    std::cout << "Reading in the data:" << std::endl
              << std::endl;

    std::cout << "std::vector<unsigned int> pathvector1;" << std::endl;
    std::vector<unsigned int> pathvector1;
    std::cout << "std::vector<unsigned int> pathvector3;" << std::endl;
    std::vector<unsigned int> pathvector3;
    std::cout << "std::vector<const Cost*> costsvector1;" << std::endl;
    std::vector<const Cost*> costsvector1;
    std::cout << "std::vector<const Cost*> costsvector3;" << std::endl;
    std::vector<const Cost*> costsvector3;
    std::cout << "std::vector<const Path*> cellvector1;" << std::endl;
    std::vector<const Path*> cellvector1;
    std::cout << "std::vector<const Path*> cellvector3;" << std::endl;
    std::vector<const Path*> cellvector3;
    std::cout << "std::ifstream ifile(\"pathMatrixCellTest.txt\");" << std::endl;
    std::ifstream ifile("pathMatrixCellTest.txt");
    if (ifile.is_open()) {
        std::cout << "std::string fileLine;" << std::endl;
        std::string fileLine;
        std::cout << "unsigned int fileUInt;" << std::endl;
        unsigned int fileUInt;

        std::cout << "std::stringstream sspv1;" << std::endl;
        std::stringstream sspv1;
        std::cout << "std::getline(ifile, fileLine);" << std::endl;
        std::getline(ifile, fileLine);
        std::cout << "sspv1 << fileLine;" << std::endl;
        sspv1 << fileLine;
        std::cout << "while (sspv1 >> fileUInt) {" << std::endl
                  << "\tpathvector1.push_back(fileUInt);" << std::endl
                  << "}" << std::endl;
        while (sspv1 >> fileUInt) {
            pathvector1.push_back(fileUInt);
        }
        sspv1.str("");

        std::cout << "std::stringstream sspv3;" << std::endl;
        std::stringstream sspv3;
        std::cout << "std::getline(ifile, fileLine);" << std::endl;
        std::getline(ifile, fileLine);
        std::cout << "sspv3 << fileLine;" << std::endl;
        sspv3 << fileLine;
        std::cout << "while (sspv3 >> fileUInt) {" << std::endl
                  << "\tpathvector3.push_back(fileUInt);" << std::endl
                  << "}" << std::endl;
        while (sspv3 >> fileUInt) {
            pathvector3.push_back(fileUInt);
        }
        sspv3.str("");

        std::cout << "std::stringstream sscv1;" << std::endl;
        std::stringstream sscv1;
        std::cout << "std::getline(ifile, fileLine);" << std::endl;
        std::getline(ifile, fileLine);
        std::cout << "sscv1 << fileLine;" << std::endl;
        sscv1 << fileLine;
        std::cout << "while (sscv1 >> fileUInt) {" << std::endl
                  << "\tconst Cost* fac1 = new AdditiveCost(fileUInt);" << std::endl
                  << "\tcostsvector1.push_back(fac1);" << std::endl
                  << "\tfac1 = NULL;" << std::endl
                  << "}" << std::endl;
        while (sscv1 >> fileUInt) {
            const Cost* fac1 = new AdditiveCost(fileUInt);
            costsvector1.push_back(fac1);
            fac1 = NULL;
        }
        sscv1.str("");


        std::cout << "std::stringstream sscv3;" << std::endl;
        std::stringstream sscv3;
        std::cout << "std::getline(ifile, fileLine);" << std::endl;
        std::getline(ifile, fileLine);
        std::cout << "sscv3 << fileLine;" << std::endl;
        sscv3 << fileLine;
        std::cout << "while (sscv3 >> fileUInt) {" << std::endl
                  << "\tconst Cost* fac3 = new AdditiveCost(fileUInt);" << std::endl
                  << "\tcostsvector3.push_back(fac3);" << std::endl
                  << "\tfac3 = NULL;" << std::endl
                  << "}" << std::endl;
        while (sscv3 >> fileUInt) {
            const Cost* fac3 = new AdditiveCost(fileUInt);
            costsvector3.push_back(fac3);
            fac3 = NULL;
        }
        sscv3.str("");
        
        std::cout << "const PathWithCosts* fpwc1 = new PathWithCosts(pathvector1, costsvector1);" << std::endl;
        const PathWithCosts* fpwc1 = new PathWithCosts(pathvector1, costsvector1);
        std::cout << "const PathWithCosts* fpwc3 = new PathWithCosts(pathvector3, costsvector3);" << std::endl;
        const PathWithCosts* fpwc3 = new PathWithCosts(pathvector3, costsvector3);
        std::cout << "cellvector1.push_back(fpwc1);" << std::endl;
        cellvector1.push_back(fpwc1);
        std::cout << "cellvector3.push_back(fpwc3);" << std::endl;
        cellvector3.push_back(fpwc3);
        std::cout << "pathvector1.clear();" << std::endl;
        pathvector1.clear();
        std::cout << "pathvector3.clear();" << std::endl;
        pathvector3.clear();
        std::cout << "for (int i=0; i<costsvector1.size(); i++) {" << std::endl
                  << "\tcostsvector1.at(i) = NULL;" << std::endl
                  << "}" << std::endl
                  << "costsvector1.clear();" << std::endl;
        for (int i=0; i<costsvector1.size(); i++) {
            costsvector1.at(i) = NULL;
        }
        costsvector1.clear();
        std::cout << "for (int i=0; i<costsvector3.size(); i++) {" << std::endl
                  << "\tcostsvector3.at(i) = NULL;" << std::endl
                  << "}" << std::endl
                  << "costsvector3.clear();" << std::endl;
        for (int i=0; i<costsvector3.size(); i++) {
            costsvector3.at(i) = NULL;
        }
        costsvector3.clear();
        std::cout << "fpwc1 = NULL;" << std::endl;
        fpwc1 = NULL;
        std::cout << "fpwc3 = NULL;" << std::endl;
        fpwc3 = NULL;
    }
    else {
        std::cout << "TEST FAILED: pathMatrixCellTest.txt cannot be opened" << std::endl;
        return;
    }

    /* Test the constructors */

    std::cout << std::endl
              << "Testing the constructors:" << std::endl
              << std::endl;

    std::cout << "\tPathMatrixCell cell0;" << std::endl;
    PathMatrixCell cell0;
    std::cout << "\tPathMatrixCell cell1(cellvector1);" << std::endl;
    PathMatrixCell cell1(cellvector1);
    std::cout << "\tPathMatrixCell *pcell2 = new PathMatrixCell;" << std::endl;
    PathMatrixCell *pcell2 = new PathMatrixCell;
    std::cout << "\tPathMatrixCell *pcell3 = new PathMatrixCell(cellvector3);" << std::endl;
    PathMatrixCell *pcell3 = new PathMatrixCell(cellvector3);

    std::cout << std::endl
              << "\tPathMatrixCell copycell0(cell0);" << std::endl;
    PathMatrixCell copycell0(cell0);
    std::cout << "\tPathMatrixCell copycell1(cell1);" << std::endl;
    PathMatrixCell copycell1(cell1);
    std::cout << "\tPathMatrixCell copypcell2(*pcell2)" << std::endl;
    PathMatrixCell copypcell2(*pcell2);
    std::cout << "\tPathMatrixCell copypcell3(*pcell3)" << std::endl;
    PathMatrixCell copypcell3(*pcell3);

    std::cout << std::endl
              << "\tPathMatrixCell *pcopycell0 = new PathMatrixCell(cell0);" << std::endl;
    PathMatrixCell *pcopycell0 = new PathMatrixCell(cell0);
    std::cout << "\tPathMatrixCell *pcopycell1 = new PathMatrixCell(cell1);" << std::endl;
    PathMatrixCell *pcopycell1 = new PathMatrixCell(cell1);
    std::cout << "\tPathMatrixCell *pcopypcell2 = new PathMatrixCell(*pcell2);" << std::endl;
    PathMatrixCell *pcopypcell2 = new PathMatrixCell(*pcell2);
    std::cout << "\tPathMatrixCell *pcopypcell3 = new PathMatrixCell(*pcell3);" << std::endl;
    PathMatrixCell *pcopypcell3 = new PathMatrixCell(*pcell3);
    
    std::cout << std::endl
              << "for (int i=0; i<cellvector1.size(); i++) {" << std::endl
              << "\tcellvector1.at(i) = NULL;" << std::endl
              << "}" << std::endl
              << "cellvector1.clear();" << std::endl;
    for (int i=0; i<cellvector1.size(); i++) {
        cellvector1.at(i) = NULL;
    }
    cellvector1.clear();
    std::cout << std::endl
              << "for (int i=0; i<cellvector3.size(); i++) {" << std::endl
              << "\tcellvector3.at(i) = NULL;" << std::endl
              << "}" << std::endl
              << "cellvector3.clear();" << std::endl;
    for (int i=0; i<cellvector3.size(); i++) {
        cellvector3.at(i) = NULL;
    }
    cellvector3.clear();

    /* Test getPaths() */

    std::vector<unsigned int> expectedPathVector;
    std::vector<const Cost*> expectedCostsVector;
    std::vector<const Path*> expectedCellVector;
    std::cout << std::endl
              << "Testing getPaths():" << std::endl
              << std::endl;

    std::cout << "cell0.getPaths():\t\t\t"
              << cellVectorToString(cell0.getPaths())
              << "\t\t\tCorrect output: "
              << cellVectorToString(expectedCellVector)
              << ((cell0.getPaths() == expectedCellVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedPathVector.push_back(1);
    const Cost* ac1 = new AdditiveCost(1);
    expectedCostsVector.push_back(ac1);
    const PathWithCosts* pwc1 = new PathWithCosts(expectedPathVector, expectedCostsVector);
    expectedCellVector.push_back(pwc1);
    std::cout << "cell1.getPaths():\t\t\t"
              << cellVectorToString(cell1.getPaths())
              << "Correct output: "
              << cellVectorToString(expectedCellVector)
              << ((comparePathPointerVectors(cell1.getPaths(),expectedCellVector)) ? "OK" : "TEST FAILED")
              << std::endl;
    expectedPathVector.clear();
    ac1 = NULL;
    expectedCostsVector.at(0) = NULL;
    expectedCostsVector.clear();
    expectedCellVector.at(0) = NULL;
    expectedCellVector.clear();
    delete pwc1;
    std::cout << "pcell2->getPaths():\t\t\t"
              << cellVectorToString(pcell2->getPaths())
              << "\t\t\tCorrect output: "
              << cellVectorToString(expectedCellVector)
              << ((pcell2->getPaths() == expectedCellVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedPathVector.push_back(3);
    const Cost* ac3 = new AdditiveCost(3);
    expectedCostsVector.push_back(ac3);
    const PathWithCosts* pwc3 = new PathWithCosts(expectedPathVector, expectedCostsVector);
    expectedCellVector.push_back(pwc3);
    std::cout << "pcell3->getPaths():\t\t\t"
              << cellVectorToString(pcell3->getPaths())
              << "Correct output: "
              << cellVectorToString(expectedCellVector)
              << ((comparePathPointerVectors(pcell3->getPaths(),expectedCellVector)) ? "OK" : "TEST FAILED")
              << std::endl;
    expectedPathVector.clear();
    ac3 = NULL;
    expectedCostsVector.at(0) = NULL;
    expectedCostsVector.clear();
    expectedCellVector.at(0) = NULL;
    expectedCellVector.clear();
    delete pwc3;

    std::cout << "copycell0.getPaths():\t\t\t"
              << cellVectorToString(copycell0.getPaths())
              << "\t\t\tCorrect output: "
              << cellVectorToString(cell0.getPaths())
              << ((comparePathPointerVectors(copycell0.getPaths(),cell0.getPaths())) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copycell1.getPaths():\t\t\t"
              << cellVectorToString(copycell1.getPaths())
              << "Correct output: "
              << cellVectorToString(cell1.getPaths())
              << ((comparePathPointerVectors(copycell1.getPaths(),cell1.getPaths())) ? "OK" : "TEST FAILED")
              << std::endl;
    std::cout << "copypcell2.getPaths():\t\t\t"
              << cellVectorToString(copypcell2.getPaths())
              << "\t\t\tCorrect output: "
              << cellVectorToString(pcell2->getPaths())
              << ((comparePathPointerVectors(copypcell2.getPaths(),pcell2->getPaths())) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypcell3.getPaths():\t\t\t"
              << cellVectorToString(copypcell3.getPaths())
              << "Correct output: "
              << cellVectorToString(pcell3->getPaths())
              << ((comparePathPointerVectors(copypcell3.getPaths(),pcell3->getPaths())) ? "OK" : "TEST FAILED")
              << std::endl;

    std::cout << "pcopycell0->getPaths():\t\t\t"
              << cellVectorToString(pcopycell0->getPaths())
              << "\t\t\tCorrect output: "
              << cellVectorToString(cell0.getPaths())
              << ((comparePathPointerVectors(pcopycell0->getPaths(),cell0.getPaths())) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopycell1->getPaths():\t\t\t"
              << cellVectorToString(pcopycell1->getPaths())
              << "Correct output: "
              << cellVectorToString(cell1.getPaths())
              << ((comparePathPointerVectors(pcopycell1->getPaths(),cell1.getPaths())) ? "OK" : "TEST FAILED")
              << std::endl;
    std::cout << "pcopypcell2->getPaths():\t\t"
              << cellVectorToString(pcopypcell2->getPaths())
              << "\t\t\tCorrect output: "
              << cellVectorToString(pcell2->getPaths())
              << ((comparePathPointerVectors(pcopypcell2->getPaths(),pcell2->getPaths())) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypcell3->getPaths():\t\t"
              << cellVectorToString(pcopypcell3->getPaths())
              << "Correct output: "
              << cellVectorToString(pcell3->getPaths())
              << ((comparePathPointerVectors(pcopypcell3->getPaths(),pcell3->getPaths())) ? "OK" : "TEST FAILED")
              << std::endl;
    
    /* Test toString() */

    std::stringstream ss;
    std::cout << std::endl
              << "Testing toString():" << std::endl
              << std::endl;

    ss << cellVectorToString(cell0.getPaths());
    std::cout << "cell0.toString():\t\t\t"
              << cell0.toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((cell0.toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << cellVectorToString(cell1.getPaths());
    std::cout << "cell1.toString():\t\t\t"
              << cell1.toString()
              << "Correct output: "
              << ss.str()
              << ((cell1.toString() == ss.str()) ? "OK" : "TEST FAILED")
              << std::endl;
    ss.str("");
    ss << cellVectorToString(pcell2->getPaths());
    std::cout << "pcell2->toString():\t\t\t"
              << pcell2->toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((pcell2->toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << cellVectorToString(pcell3->getPaths());
    std::cout << "pcell3->toString():\t\t\t"
              << pcell3->toString()
              << "Correct output: "
              << ss.str()
              << ((pcell3->toString() == ss.str()) ? "OK" : "TEST FAILED")
              << std::endl;
    ss.str("");

    ss << cellVectorToString(copycell0.getPaths());
    std::cout << "copycell0.toString():\t\t\t"
              << copycell0.toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((copycell0.toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << cellVectorToString(copycell1.getPaths());
    std::cout << "copycell1.toString():\t\t\t"
              << copycell1.toString()
              << "Correct output: "
              << ss.str()
              << ((copycell1.toString() == ss.str()) ? "OK" : "TEST FAILED")
              << std::endl;
    ss.str("");
    ss << cellVectorToString(copypcell2.getPaths());
    std::cout << "copypcell2.toString():\t\t\t"
              << copypcell2.toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((copypcell2.toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << cellVectorToString(copypcell3.getPaths());
    std::cout << "copypcell3.toString():\t\t\t"
              << copypcell3.toString()
              << "Correct output: "
              << ss.str()
              << ((copypcell3.toString() == ss.str()) ? "OK" : "TEST FAILED")
              << std::endl;
    ss.str("");

    ss << cellVectorToString(pcopycell0->getPaths());
    std::cout << "pcopycell0->toString():\t\t\t"
              << pcopycell0->toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((pcopycell0->toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << cellVectorToString(pcopycell1->getPaths());
    std::cout << "pcopycell1->toString():\t\t\t"
              << pcopycell1->toString()
              << "Correct output: "
              << ss.str()
              << ((pcopycell1->toString() == ss.str()) ? "OK" : "TEST FAILED")
              << std::endl;
    ss.str("");
    ss << cellVectorToString(pcopypcell2->getPaths());
    std::cout << "pcopypcell2->toString():\t\t"
              << pcopypcell2->toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((pcopypcell2->toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << cellVectorToString(pcopypcell3->getPaths());
    std::cout << "pcopypcell3->toString():\t\t"
              << pcopypcell3->toString()
              << "Correct output: "
              << ss.str()
              << ((pcopypcell3->toString() == ss.str()) ? "OK" : "TEST FAILED")
              << std::endl;
    ss.str("");
    
    /* Test operator<< */

    std::cout << std::endl
              << "Testing operator<<:" << std::endl
              << std::endl;

    std::cout << "cout << cell0:\t\t\t\t" << cell0 << std::endl
              << "\t(Expected:\t\t\t" << cell0.toString() << "\t\t\t\t)"
              << std::endl << std::endl;
    std::cout << "cout << cell1:\t\t\t\t" << cell1 << std::endl
              << "\t(Expected:\t\t\t" << cell1.toString() << "\t)"
              << std::endl << std::endl;
    std::cout << "cout << pcell2:\t\t\t\t" << *pcell2 << std::endl
              << "\t(Expected:\t\t\t" << pcell2->toString() << "\t\t\t\t)"
              << std::endl << std::endl;
    std::cout << "cout << pcell3:\t\t\t\t" << *pcell3 << std::endl
              << "\t(Expected:\t\t\t" << pcell3->toString() << "\t)"
              << std::endl << std::endl;

    std::cout << "cout << copycell0:\t\t\t" << copycell0 << std::endl
              << "\t(Expected:\t\t\t" << copycell0.toString() << "\t\t\t\t)"
              << std::endl << std::endl;
    std::cout << "cout << copycell1:\t\t\t" << copycell1 << std::endl
              << "\t(Expected:\t\t\t" << copycell1.toString() << "\t)"
              << std::endl << std::endl;
    std::cout << "cout << copypcell2:\t\t\t" << copypcell2 << std::endl
              << "\t(Expected:\t\t\t" << copypcell2.toString() << "\t\t\t\t)"
              << std::endl << std::endl;
    std::cout << "cout << copypcell3:\t\t\t" << copypcell3 << std::endl
              << "\t(Expected:\t\t\t" << copypcell3.toString() << "\t)"
              << std::endl << std::endl;

    std::cout << "cout << pcopycell0:\t\t\t" << *pcopycell0 << std::endl
              << "\t(Expected:\t\t\t" << pcopycell0->toString() << "\t\t\t\t)"
              << std::endl << std::endl;
    std::cout << "cout << pcopycell1:\t\t\t" << *pcopycell1 << std::endl
              << "\t(Expected:\t\t\t" << pcopycell1->toString() << "\t)"
              << std::endl << std::endl;
    std::cout << "cout << pcopypcell2:\t\t\t" << *pcopypcell2 << std::endl
              << "\t(Expected:\t\t\t" << pcopypcell2->toString() << "\t\t\t\t)"
              << std::endl << std::endl;
    std::cout << "cout << pcopypcell3:\t\t\t" << *pcopypcell3 << std::endl
              << "\t(Expected:\t\t\t" << pcopypcell3->toString() << "\t)"
              << std::endl << std::endl;

    /* Test operator+ */

    std::cout << std::endl
              << "Testing operator+:" << std::endl
              << std::endl;

    std::cout << "cell0+cell0:\t\t\t\t"
              << (cell0+cell0)->toString()
              << "\t\t\tCorrect output: "
              << INVALID_CELL->toString()
              << ((cell0+cell0 == INVALID_CELL) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cell0+copycell0:\t\t\t"
              << (cell0+copycell0)->toString()
              << "\t\t\tCorrect output: "
              << INVALID_CELL->toString()
              << ((cell0+copycell0 == INVALID_CELL) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cell0+(*pcopycell0):\t\t\t"
              << (cell0+(*pcopycell0))->toString()
              << "\t\t\tCorrect output: "
              << INVALID_CELL->toString()
              << ((cell0+(*pcopycell0) == INVALID_CELL) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedPathVector.push_back(1);
    ac1 = new AdditiveCost(1);
    expectedCostsVector.push_back(ac1);
    pwc1 = new PathWithCosts(expectedPathVector, expectedCostsVector);
    expectedCellVector.push_back(pwc1);
    expectedCellVector.push_back(pwc1);
    std::cout << "cell1+cell1:\t\t\t\t"
              << (cell1+cell1)->toString()
              << "Correct output: "
              << cellVectorToString(expectedCellVector)
              << ((comparePathPointerVectors((cell1+cell1)->getPaths(),expectedCellVector)) ? "OK" : "TEST FAILED")
              << std::endl;
    std::cout << "cell1+copycell1:\t\t\t"
              << (cell1+copycell1)->toString()
              << "Correct output: "
              << cellVectorToString(expectedCellVector)
              << ((comparePathPointerVectors((cell1+copycell1)->getPaths(),(cell1+cell1)->getPaths())) ? "OK" : "TEST FAILED")
              << std::endl;
    std::cout << "cell1+(*pcopycell1):\t\t\t"
              << (cell1+(*pcopycell1))->toString()
              << "Correct output: "
              << cellVectorToString(expectedCellVector)
              << ((comparePathPointerVectors((cell1+(*pcopycell1))->getPaths(),(cell1+cell1)->getPaths())) ? "OK" : "TEST FAILED")
              << std::endl;
    expectedPathVector.clear();
    ac1 = NULL;
    expectedCostsVector.at(0) = NULL;
    expectedCostsVector.clear();
    expectedCellVector.at(0) = NULL;
    expectedCellVector.at(1) = NULL;
    expectedCellVector.clear();
    delete pwc1;
    std::cout << "(*pcell2)+(*pcell2):\t\t\t"
              << ((*pcell2)+(*pcell2))->toString()
              << "\t\t\tCorrect output: "
              << INVALID_CELL->toString()
              << (((*pcell2)+(*pcell2) == INVALID_CELL) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pcell2)+copypcell2:\t\t\t"
              << ((*pcell2)+copypcell2)->toString()
              << "\t\t\tCorrect output: "
              << INVALID_CELL->toString()
              << (((*pcell2)+copypcell2 == INVALID_CELL) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pcell2)+(*pcopypcell2):\t\t"
              << ((*pcell2)+(*pcopypcell2))->toString()
              << "\t\t\tCorrect output: "
              << INVALID_CELL->toString()
              << (((*pcell2)+(*pcopypcell2) == INVALID_CELL) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedPathVector.push_back(3);
    ac3 = new AdditiveCost(3);
    expectedCostsVector.push_back(ac3);
    pwc3 = new PathWithCosts(expectedPathVector, expectedCostsVector);
    expectedCellVector.push_back(pwc3);
    expectedCellVector.push_back(pwc3);
    std::cout << "(*pcell3)+(*pcell3):\t\t\t"
              << ((*pcell3)+(*pcell3))->toString()
              << "Correct output: "
              << cellVectorToString(expectedCellVector)
              << ((comparePathPointerVectors(((*pcell3)+(*pcell3))->getPaths(),expectedCellVector)) ? "OK" : "TEST FAILED")
              << std::endl;
    std::cout << "(*pcell3)+copypcell3:\t\t\t"
              << ((*pcell3)+copypcell3)->toString()
              << "Correct output: "
              << cellVectorToString(expectedCellVector)
              << ((comparePathPointerVectors(((*pcell3)+copypcell3)->getPaths(),((*pcell3)+(*pcell3))->getPaths())) ? "OK" : "TEST FAILED")
              << std::endl;
    std::cout << "(*pcell3)+(*pcopypcell3):\t\t"
              << ((*pcell3)+(*pcopypcell3))->toString()
              << "Correct output: "
              << cellVectorToString(expectedCellVector)
              << ((comparePathPointerVectors(((*pcell3)+(*pcopypcell3))->getPaths(),((*pcell3)+(*pcell3))->getPaths())) ? "OK" : "TEST FAILED")
              << std::endl << std::endl;
    expectedPathVector.clear();
    ac3 = NULL;
    expectedCostsVector.at(0) = NULL;
    expectedCostsVector.clear();
    expectedCellVector.at(0) = NULL;
    expectedCellVector.at(1) = NULL;
    expectedCellVector.clear();
    delete pwc3;

    std::cout << "cell0+cell1:\t\t\t\t"
              << (cell0+cell1)->toString()
              << "Correct output: "
              << cell1.toString()
              << ((comparePathPointerVectors((cell0+cell1)->getPaths(),cell1.getPaths())) ? "OK" : "TEST FAILED")
              << std::endl;
    std::cout << "cell0+(*pcell3):\t\t\t"
              << (cell0+(*pcell3))->toString()
              << "Correct output: "
              << pcell3->toString()
              << ((comparePathPointerVectors((cell0+(*pcell3))->getPaths(),pcell3->getPaths())) ? "OK" : "TEST FAILED")
              << std::endl;
    expectedPathVector.push_back(1);
    ac1 = new AdditiveCost(1);
    expectedCostsVector.push_back(ac1);
    pwc1 = new PathWithCosts(expectedPathVector, expectedCostsVector);
    expectedCellVector.push_back(pwc1);
    expectedPathVector.clear();
    ac1 = NULL;
    expectedCostsVector.at(0) = NULL;
    expectedCostsVector.clear();
    expectedPathVector.push_back(3);
    ac3 = new AdditiveCost(3);
    expectedCostsVector.push_back(ac3);
    pwc3 = new PathWithCosts(expectedPathVector, expectedCostsVector);
    expectedCellVector.push_back(pwc3);
    expectedPathVector.clear();
    ac3 = NULL;
    expectedCostsVector.at(0) = NULL;
    expectedCostsVector.clear();
    std::cout << "cell1+(*pcell3):\t\t\t"
              << (cell1+(*pcell3))->toString()
              << "Correct output: "
              << cellVectorToString(expectedCellVector)
              << (comparePathPointerVectors((cell1+(*pcell3))->getPaths(),expectedCellVector) ? "OK" : "TEST FAILED")
              << std::endl;
    expectedCellVector.at(0) = NULL;
    expectedCellVector.at(1) = NULL;
    expectedCellVector.clear();
    delete pwc1;
    delete pwc3;
    
    /* Test operator* */

    std::cout << std::endl
              << "Testing operator*:" << std::endl
              << std::endl;

    std::cout << "cell0*cell0:\t\t\t\t"
              << (cell0*cell0)->toString()
              << "\t\t\tCorrect output: "
              << INVALID_CELL->toString()
              << ((cell0*cell0 == INVALID_CELL) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cell0*copycell0:\t\t\t"
              << (cell0*copycell0)->toString()
              << "\t\t\tCorrect output: "
              << INVALID_CELL->toString()
              << ((cell0*copycell0 == INVALID_CELL) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cell0*(*pcopycell0):\t\t\t"
              << (cell0*(*pcopycell0))->toString()
              << "\t\t\tCorrect output: "
              << INVALID_CELL->toString()
              << ((cell0*(*pcopycell0) == INVALID_CELL) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cell1*cell1:\t\t\t\t"
              << (cell1*cell1)->toString()
              << "\t\t\tCorrect output: "
              << INVALID_CELL->toString()
              << ((cell1*cell1 == INVALID_CELL) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cell1*copycell1:\t\t\t"
              << (cell1*copycell1)->toString()
              << "\t\t\tCorrect output: "
              << INVALID_CELL->toString()
              << ((cell1*copycell1 == INVALID_CELL) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cell1*(*pcopycell1):\t\t\t"
              << (cell1*(*pcopycell1))->toString()
              << "\t\t\tCorrect output: "
              << INVALID_CELL->toString()
              << ((cell1*(*pcopycell1) == INVALID_CELL) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pcell2)*(*pcell2):\t\t\t"
              << ((*pcell2)*(*pcell2))->toString()
              << "\t\t\tCorrect output: "
              << INVALID_CELL->toString()
              << (((*pcell2)*(*pcell2) == INVALID_CELL) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pcell2)*copypcell2:\t\t\t"
              << ((*pcell2)*copypcell2)->toString()
              << "\t\t\tCorrect output: "
              << INVALID_CELL->toString()
              << (((*pcell2)*copypcell2 == INVALID_CELL) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pcell2)*(*pcopypcell2):\t\t"
              << ((*pcell2)*(*pcopypcell2))->toString()
              << "\t\t\tCorrect output: "
              << INVALID_CELL->toString()
              << (((*pcell2)*(*pcopypcell2) == INVALID_CELL) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pcell3)*(*pcell3):\t\t\t"
              << ((*pcell3)*(*pcell3))->toString()
              << "\t\t\tCorrect output: "
              << INVALID_CELL->toString()
              << (((*pcell3)*(*pcell3) == INVALID_CELL) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pcell3)*copypcell3:\t\t\t"
              << ((*pcell3)*copypcell3)->toString()
              << "\t\t\tCorrect output: "
              << INVALID_CELL->toString()
              << (((*pcell3)*copypcell3 == INVALID_CELL) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*pcell3)*(*pcopypcell3):\t\t"
              << ((*pcell3)*(*pcopypcell3))->toString()
              << "\t\t\tCorrect output: "
              << INVALID_CELL->toString()
              << (((*pcell3)*(*pcopypcell3) == INVALID_CELL) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl << std::endl;

    std::cout << "cell0*cell1:\t\t\t\t"
              << (cell0*cell1)->toString()
              << "\t\t\tCorrect output: "
              << INVALID_CELL->toString()
              << ((cell0*cell1 == INVALID_CELL) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "cell0*(*pcell3):\t\t\t"
              << (cell0*(*pcell3))->toString()
              << "\t\t\tCorrect output: "
              << INVALID_CELL->toString()
              << ((cell0*(*pcell3) == INVALID_CELL) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedPathVector.push_back(1);
    expectedPathVector.push_back(3);
    ac1 = new AdditiveCost(1);
    ac3 = new AdditiveCost(3);
    const Cost* ac4 = (*ac1)*(*ac3);
    expectedCostsVector.push_back(ac4);
    const PathWithCosts* pwc4 = new PathWithCosts(expectedPathVector, expectedCostsVector);
    expectedCellVector.push_back(pwc4);
    std::cout << "cell1*(*pcell3):\t\t\t"
              << (cell1*(*pcell3))->toString()
              << "Correct output: "
              << cellVectorToString(expectedCellVector)
              << (comparePathPointerVectors((cell1*(*pcell3))->getPaths(),expectedCellVector) ? "OK" : "TEST FAILED")
              << std::endl;
    expectedPathVector.clear();
    delete ac1;
    delete ac3;
    ac4 = NULL;
    expectedCostsVector.at(0) = NULL;
    expectedCostsVector.clear();
    expectedCellVector.at(0) = NULL;
    expectedCellVector.clear();
    delete pwc4;

    
    /* Test destructor */

    std::cout << std::endl
              << "Testing the destructor:" << std::endl
              << std::endl;

    std::cout << "\tdelete pcell2;" << std::endl;
    delete pcell2;
    std::cout << "\tdelete pcell3;" << std::endl;
    delete pcell3;
    std::cout << "\tdelete pcopycell0;" << std::endl;
    delete pcopycell0;
    std::cout << "\tdelete pcopycell1;" << std::endl;
    delete pcopycell1;
    std::cout << "\tdelete pcopypcell2;" << std::endl;
    delete pcopypcell2;
    std::cout << "\tdelete pcopypcell3;" << std::endl;
    delete pcopypcell3;
    
    std::cout << std::endl;
    
}

#endif
