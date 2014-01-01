//
//  pathWithCostsTest.h
//
//  Pathfinder, an optimal path finding program for graphs with
//  multi-weighted edges under specified constraints.
//
//  Copyright (c) 2013 Bradley Denby.
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see {http://www.gnu.org/licenses/}.
//

#ifndef Pathfinder_pathWithCostsTest_h
#define Pathfinder_pathWithCostsTest_h

#include "PathWithCosts.h"
#include <fstream>

std::string costsVectorToString(const std::vector<const Cost*>& v) {
    std::stringstream ss;
    ss << "[";
    for (int i=0; i<v.size(); i++) {
        ss << " " << v.at(i)->toString();
    }
    ss << " ]";
    return ss.str();
}

bool compareCostPointerVectors(const std::vector<const Cost*>& v1, const std::vector<const Cost*>& v2) {
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

void pathWithCostsTest() {
    
    /************ Test the PathWithCosts class ************/

    std::cout << std::endl
              << "****** Testing the PathWithCosts class ******" << std::endl
              << std::endl;

    /* Read in the data */
    
    std::cout << "Reading in the data:" << std::endl
              << std::endl;

    std::cout << "std::vector<unsigned int> pathvector1;" << std::endl;
    std::vector<unsigned int> pathvector1;
    std::cout << "std::vector<unsigned int> pathvector2;" << std::endl;
    std::vector<unsigned int> pathvector2;
    std::cout << "std::vector<const Cost*> costsvector2;" << std::endl;
    std::vector<const Cost*> costsvector2;
    std::cout << "std::vector<unsigned int> pathvector4;" << std::endl;
    std::vector<unsigned int> pathvector4;
    std::cout << "std::vector<unsigned int> pathvector5;" << std::endl;
    std::vector<unsigned int> pathvector5;
    std::cout << "std::vector<const Cost*> costsvector5;" << std::endl;
    std::vector<const Cost*> costsvector5;
    std::cout << "std::ifstream ifile(\"pathWithCostsTest.txt\");" << std::endl;
    std::ifstream ifile("pathWithCostsTest.txt");
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

        std::cout << "std::stringstream sspv2;" << std::endl;
        std::stringstream sspv2;
        std::cout << "std::getline(ifile, fileLine);" << std::endl;
        std::getline(ifile, fileLine);
        std::cout << "sspv2 << fileLine;" << std::endl;
        sspv2 << fileLine;
        std::cout << "while (sspv2 >> fileUInt) {" << std::endl
                  << "\tpathvector2.push_back(fileUInt);" << std::endl
                  << "}" << std::endl;
        while (sspv2 >> fileUInt) {
            pathvector2.push_back(fileUInt);
        }
        sspv2.str("");

        std::cout << "std::stringstream sscv2;" << std::endl;
        std::stringstream sscv2;
        std::cout << "std::getline(ifile, fileLine);" << std::endl;
        std::getline(ifile, fileLine);
        std::cout << "sscv2 << fileLine;" << std::endl;
        sscv2 << fileLine;
        std::cout << "while (sscv2 >> fileUInt) {" << std::endl
                  << "\tconst Cost* fac2 = new AdditiveCost(fileUInt);" << std::endl
                  << "\tcostsvector2.push_back(fac2);" << std::endl
                  << "\tfac2 = NULL;" << std::endl
                  << "}" << std::endl;
        while (sscv2 >> fileUInt) {
            const Cost* fac2 = new AdditiveCost(fileUInt);
            costsvector2.push_back(fac2);
            fac2 = NULL;
        }
        sscv2.str("");

        std::cout << "std::stringstream sspv4;" << std::endl;
        std::stringstream sspv4;
        std::cout << "std::getline(ifile, fileLine);" << std::endl;
        std::getline(ifile, fileLine);
        std::cout << "sspv4 << fileLine;" << std::endl;
        sspv4 << fileLine;
        std::cout << "while (sspv4 >> fileUInt) {" << std::endl
                  << "\tpathvector4.push_back(fileUInt);" << std::endl
                  << "}" << std::endl;
        while (sspv4 >> fileUInt) {
            pathvector4.push_back(fileUInt);
        }
        sspv4.str("");

        std::cout << "std::stringstream sspv5;" << std::endl;
        std::stringstream sspv5;
        std::cout << "std::getline(ifile, fileLine);" << std::endl;
        std::getline(ifile, fileLine);
        std::cout << "sspv5 << fileLine;" << std::endl;
        sspv5 << fileLine;
        std::cout << "while (sspv5 >> fileUInt) {" << std::endl
                  << "\tpathvector5.push_back(fileUInt);" << std::endl
                  << "}" << std::endl;
        while (sspv5 >> fileUInt) {
            pathvector5.push_back(fileUInt);
        }
        sspv5.str("");
        
        std::cout << "std::stringstream sscv5;" << std::endl;
        std::stringstream sscv5;
        std::cout << "std::getline(ifile, fileLine);" << std::endl;
        std::getline(ifile, fileLine);
        std::cout << "sscv5 << fileLine;" << std::endl;
        sscv5 << fileLine;
        std::cout << "while (sscv5 >> fileUInt) {" << std::endl
                  << "\tconst Cost* fac5 = new AdditiveCost(fileUInt);" << std::endl
                  << "\tcostsvector5.push_back(fac5);" << std::endl
                  << "\tfac5 = NULL;" << std::endl
                  << "}" << std::endl;
        while (sscv5 >> fileUInt) {
            const Cost* fac5 = new AdditiveCost(fileUInt);
            costsvector5.push_back(fac5);
            fac5 = NULL;
        }
        sscv5.str("");
    }
    else {
        std::cout << "TEST FAILED: pathWithCostsTest.txt cannot be opened" << std::endl;
        return;
    }
    
    /* Test the constructors */

    std::cout << std::endl
              << "Testing the constructors:" << std::endl
              << std::endl;

    std::cout << "\tPathWithCosts pathwc0;" << std::endl;
    PathWithCosts pathwc0;
    std::cout << "\tPathWithCosts pathwc1(pathvector1);" << std::endl;
    PathWithCosts pathwc1(pathvector1);
    std::cout << "\tPathWithCosts pathwc2(pathvector2, costsvector2);" << std::endl;
    PathWithCosts pathwc2(pathvector2, costsvector2);
    std::cout << "\tPathWithCosts *ppathwc3 = new PathWithCosts;" << std::endl;
    PathWithCosts *ppathwc3 = new PathWithCosts;
    std::cout << "\tPathWithCosts *ppathwc4 = new PathWithCosts(pathvector4);" << std::endl;
    PathWithCosts *ppathwc4 = new PathWithCosts(pathvector4);
    std::cout << "\tPathWithCosts *ppathwc5 = new PathWithCosts(pathvector5, costsvector5);" << std::endl;
    PathWithCosts *ppathwc5 = new PathWithCosts(pathvector5, costsvector5);

    std::cout << std::endl
              << "\tPathWithCosts copypathwc0(pathwc0);" << std::endl;
    PathWithCosts copypathwc0(pathwc0);
    std::cout << "\tPathWithCosts copypathwc1(pathwc1);" << std::endl;
    PathWithCosts copypathwc1(pathwc1);
    std::cout << "\tPathWithCosts copypathwc2(pathwc2);" << std::endl;
    PathWithCosts copypathwc2(pathwc2);
    std::cout << "\tPathWithCosts copyppathwc3(*ppathwc3)" << std::endl;
    PathWithCosts copyppathwc3(*ppathwc3);
    std::cout << "\tPathWithCosts copyppathwc4(*ppathwc4)" << std::endl;
    PathWithCosts copyppathwc4(*ppathwc4);
    std::cout << "\tPathWithCosts copyppathwc5(*ppathwc5)" << std::endl;
    PathWithCosts copyppathwc5(*ppathwc5);

    std::cout << std::endl
              << "\tPathWithCosts *pcopypathwc0 = new PathWithCosts(pathwc0);" << std::endl;
    PathWithCosts *pcopypathwc0 = new PathWithCosts(pathwc0);
    std::cout << "\tPathWithCosts *pcopypathwc1 = new PathWithCosts(pathwc1);" << std::endl;
    PathWithCosts *pcopypathwc1 = new PathWithCosts(pathwc1);
    std::cout << "\tPathWithCosts *pcopypathwc2 = new PathWithCosts(pathwc2);" << std::endl;
    PathWithCosts *pcopypathwc2 = new PathWithCosts(pathwc2);
    std::cout << "\tPathWithCosts *pcopyppathwc3 = new PathWithCosts(*ppathwc3);" << std::endl;
    PathWithCosts *pcopyppathwc3 = new PathWithCosts(*ppathwc3);
    std::cout << "\tPathWithCosts *pcopyppathwc4 = new PathWithCosts(*ppathwc4);" << std::endl;
    PathWithCosts *pcopyppathwc4 = new PathWithCosts(*ppathwc4);
    std::cout << "\tPathWithCosts *pcopyppathwc5 = new PathWithCosts(*ppathwc5);" << std::endl;
    PathWithCosts *pcopyppathwc5 = new PathWithCosts(*ppathwc5);
    
    std::cout << std::endl
              << "for (int i=0; i<costsvector2.size(); i++) {" << std::endl
              << "\tcostsvector2.at(i) = NULL;" << std::endl
              << "}" << std::endl
              << "costsvector2.clear();" << std::endl;
    for (int i=0; i<costsvector2.size(); i++) {
        costsvector2.at(i) = NULL;
    }
    costsvector2.clear();
    std::cout << std::endl
              << "for (int i=0; i<costsvector5.size(); i++) {" << std::endl
              << "\tcostsvector5.at(i) = NULL;" << std::endl
              << "}" << std::endl
              << "costsvector5.clear();" << std::endl;
    for (int i=0; i<costsvector5.size(); i++) {
        costsvector5.at(i) = NULL;
    }
    costsvector5.clear();

    /* Test getPath() */

    std::vector<unsigned int> expectedPathVector;
    std::cout << std::endl
              << "Testing getPath():" << std::endl
              << std::endl;

    std::cout << "pathwc0.getPath():\t\t\t"
              << vectorToString(pathwc0.getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(expectedPathVector)
              << ((pathwc0.getPath() == expectedPathVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedPathVector.push_back(1);
    std::cout << "pathwc1.getPath():\t\t\t"
              << vectorToString(pathwc1.getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(expectedPathVector)
              << ((pathwc1.getPath() == expectedPathVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedPathVector.clear();
    expectedPathVector.push_back(2);
    std::cout << "pathwc2.getPath():\t\t\t"
              << vectorToString(pathwc2.getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(expectedPathVector)
              << ((pathwc2.getPath() == expectedPathVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedPathVector.clear();
    std::cout << "ppathwc3->getPath():\t\t\t"
              << vectorToString(ppathwc3->getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(expectedPathVector)
              << ((ppathwc3->getPath() == expectedPathVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedPathVector.push_back(4);
    std::cout << "ppathwc4->getPath():\t\t\t"
              << vectorToString(ppathwc4->getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(expectedPathVector)
              << ((ppathwc4->getPath() == expectedPathVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedPathVector.clear();
    expectedPathVector.push_back(5);
    std::cout << "ppathwc5->getPath():\t\t\t"
              << vectorToString(ppathwc5->getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(expectedPathVector)
              << ((ppathwc5->getPath() == expectedPathVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedPathVector.clear();

    std::cout << "copypathwc0.getPath():\t\t\t"
              << vectorToString(copypathwc0.getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(pathwc0.getPath())
              << ((copypathwc0.getPath() == pathwc0.getPath()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypathwc1.getPath():\t\t\t"
              << vectorToString(copypathwc1.getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(pathwc1.getPath())
              << ((copypathwc1.getPath() == pathwc1.getPath()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypathwc2.getPath():\t\t\t"
              << vectorToString(copypathwc2.getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(pathwc2.getPath())
              << ((copypathwc2.getPath() == pathwc2.getPath()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copyppathwc3.getPath():\t\t\t"
              << vectorToString(copyppathwc3.getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(ppathwc3->getPath())
              << ((copyppathwc3.getPath() == ppathwc3->getPath()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copyppathwc4.getPath():\t\t\t"
              << vectorToString(copyppathwc4.getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(ppathwc4->getPath())
              << ((copyppathwc4.getPath() == ppathwc4->getPath()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copyppathwc5.getPath():\t\t\t"
              << vectorToString(copyppathwc5.getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(ppathwc5->getPath())
              << ((copyppathwc5.getPath() == ppathwc5->getPath()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;

    std::cout << "pcopypathwc0->getPath():\t\t"
              << vectorToString(pcopypathwc0->getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(pathwc0.getPath())
              << ((pcopypathwc0->getPath() == pathwc0.getPath()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypathwc1->getPath():\t\t"
              << vectorToString(pcopypathwc1->getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(pathwc1.getPath())
              << ((pcopypathwc1->getPath() == pathwc1.getPath()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypathwc2->getPath():\t\t"
              << vectorToString(pcopypathwc2->getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(pathwc2.getPath())
              << ((pcopypathwc2->getPath() == pathwc2.getPath()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopyppathwc3->getPath():\t\t"
              << vectorToString(pcopyppathwc3->getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(ppathwc3->getPath())
              << ((pcopyppathwc3->getPath() == ppathwc3->getPath()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopyppathwc4->getPath():\t\t"
              << vectorToString(pcopyppathwc4->getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(ppathwc4->getPath())
              << ((pcopyppathwc4->getPath() == ppathwc4->getPath()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopyppathwc5->getPath():\t\t"
              << vectorToString(pcopyppathwc5->getPath())
              << "\t\t\tCorrect output: "
              << vectorToString(ppathwc5->getPath())
              << ((pcopyppathwc5->getPath() == ppathwc5->getPath()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;

    /* Test getCosts() */

    std::vector<const Cost*> expectedCostsVector;
    std::cout << std::endl
              << "Testing getCosts():" << std::endl
              << std::endl;

    std::cout << "pathwc0.getCosts():\t\t\t"
              << costsVectorToString(pathwc0.getCosts())
              << "\t\t\tCorrect output: "
              << costsVectorToString(expectedCostsVector)
              << ((pathwc0.getCosts() == expectedCostsVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pathwc1.getCosts():\t\t\t"
              << costsVectorToString(pathwc1.getCosts())
              << "\t\t\tCorrect output: "
              << costsVectorToString(expectedCostsVector)
              << ((pathwc1.getCosts() == expectedCostsVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    const Cost* ac2 = new AdditiveCost(2);
    expectedCostsVector.push_back(ac2);
    std::cout << "pathwc2.getCosts():\t\t\t"
              << costsVectorToString(pathwc2.getCosts())
              << "\t\tCorrect output: "
              << costsVectorToString(expectedCostsVector)
              << ((compareCostPointerVectors(pathwc2.getCosts(),expectedCostsVector)) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    expectedCostsVector.at(0) = NULL;
    expectedCostsVector.clear();
    delete ac2;
    std::cout << "ppathwc3->getCosts():\t\t\t"
              << costsVectorToString(ppathwc3->getCosts())
              << "\t\t\tCorrect output: "
              << costsVectorToString(expectedCostsVector)
              << ((ppathwc3->getCosts() == expectedCostsVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "ppathwc4->getCosts():\t\t\t"
              << costsVectorToString(ppathwc4->getCosts())
              << "\t\t\tCorrect output: "
              << costsVectorToString(expectedCostsVector)
              << ((ppathwc4->getCosts() == expectedCostsVector) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    const Cost* ac5 = new AdditiveCost(5);
    expectedCostsVector.push_back(ac5);
    std::cout << "ppathwc5->getCosts():\t\t\t"
              << costsVectorToString(ppathwc5->getCosts())
              << "\t\tCorrect output: "
              << costsVectorToString(expectedCostsVector)
              << ((compareCostPointerVectors(ppathwc5->getCosts(),expectedCostsVector)) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    expectedCostsVector.at(0) = NULL;
    expectedCostsVector.clear();
    delete ac5;

    std::cout << "copypathwc0.getCosts():\t\t\t"
              << costsVectorToString(copypathwc0.getCosts())
              << "\t\t\tCorrect output: "
              << costsVectorToString(pathwc0.getCosts())
              << ((compareCostPointerVectors(copypathwc0.getCosts(),pathwc0.getCosts())) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypathwc1.getCosts():\t\t\t"
              << costsVectorToString(copypathwc1.getCosts())
              << "\t\t\tCorrect output: "
              << costsVectorToString(pathwc1.getCosts())
              << ((compareCostPointerVectors(copypathwc1.getCosts(),pathwc1.getCosts())) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypathwc2.getCosts():\t\t\t"
              << costsVectorToString(copypathwc2.getCosts())
              << "\t\tCorrect output: "
              << costsVectorToString(pathwc2.getCosts())
              << ((compareCostPointerVectors(copypathwc2.getCosts(),pathwc2.getCosts())) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "copyppathwc3.getCosts():\t\t"
              << costsVectorToString(copyppathwc3.getCosts())
              << "\t\t\tCorrect output: "
              << costsVectorToString(ppathwc3->getCosts())
              << ((compareCostPointerVectors(copyppathwc3.getCosts(),ppathwc3->getCosts())) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copyppathwc4.getCosts():\t\t"
              << costsVectorToString(copyppathwc4.getCosts())
              << "\t\t\tCorrect output: "
              << costsVectorToString(ppathwc4->getCosts())
              << ((compareCostPointerVectors(copyppathwc4.getCosts(),ppathwc4->getCosts())) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copyppathwc5.getCosts():\t\t"
              << costsVectorToString(copyppathwc5.getCosts())
              << "\t\tCorrect output: "
              << costsVectorToString(ppathwc5->getCosts())
              << ((compareCostPointerVectors(copyppathwc5.getCosts(),ppathwc5->getCosts())) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;

    std::cout << "pcopypathwc0->getCosts():\t\t"
              << costsVectorToString(pcopypathwc0->getCosts())
              << "\t\t\tCorrect output: "
              << costsVectorToString(pathwc0.getCosts())
              << ((compareCostPointerVectors(pcopypathwc0->getCosts(),pathwc0.getCosts())) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypathwc1->getCosts():\t\t"
              << costsVectorToString(pcopypathwc1->getCosts())
              << "\t\t\tCorrect output: "
              << costsVectorToString(pathwc1.getCosts())
              << ((compareCostPointerVectors(pcopypathwc1->getCosts(),pathwc1.getCosts())) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypathwc2->getCosts():\t\t"
              << costsVectorToString(pcopypathwc2->getCosts())
              << "\t\tCorrect output: "
              << costsVectorToString(pathwc2.getCosts())
              << ((compareCostPointerVectors(pcopypathwc2->getCosts(),pathwc2.getCosts())) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopyppathwc3->getCosts():\t\t"
              << costsVectorToString(pcopyppathwc3->getCosts())
              << "\t\t\tCorrect output: "
              << costsVectorToString(ppathwc3->getCosts())
              << ((compareCostPointerVectors(pcopyppathwc3->getCosts(),ppathwc3->getCosts())) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopyppathwc4->getCosts():\t\t"
              << costsVectorToString(pcopyppathwc4->getCosts())
              << "\t\t\tCorrect output: "
              << costsVectorToString(ppathwc4->getCosts())
              << ((compareCostPointerVectors(pcopyppathwc4->getCosts(),ppathwc4->getCosts())) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopyppathwc5->getCosts():\t\t"
              << costsVectorToString(pcopyppathwc5->getCosts())
              << "\t\tCorrect output: "
              << costsVectorToString(ppathwc5->getCosts())
              << ((compareCostPointerVectors(pcopyppathwc5->getCosts(),ppathwc5->getCosts())) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;

    /* Test toString() */

    std::stringstream ss;
    std::cout << std::endl
              << "Testing toString():" << std::endl
              << std::endl;

    ss << vectorToString(pathwc0.getPath()) << ":" << costsVectorToString(pathwc0.getCosts());
    std::cout << "pathwc0.toString():\t\t\t"
              << pathwc0.toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((pathwc0.toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << vectorToString(pathwc1.getPath()) << ":" << costsVectorToString(pathwc1.getCosts());
    std::cout << "pathwc1.toString():\t\t\t"
              << pathwc1.toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((pathwc1.toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << vectorToString(pathwc2.getPath()) << ":" << costsVectorToString(pathwc2.getCosts());
    std::cout << "pathwc2.toString():\t\t\t"
              << pathwc2.toString()
              << "\tCorrect output: "
              << ss.str()
              << ((pathwc2.toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << vectorToString(ppathwc3->getPath()) << ":" << costsVectorToString(ppathwc3->getCosts());
    std::cout << "ppathwc3->toString():\t\t\t"
              << ppathwc3->toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((ppathwc3->toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << vectorToString(ppathwc4->getPath()) << ":" << costsVectorToString(ppathwc4->getCosts());
    std::cout << "ppathwc4->toString():\t\t\t"
              << ppathwc4->toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((ppathwc4->toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << vectorToString(ppathwc5->getPath()) << ":" << costsVectorToString(ppathwc5->getCosts());
    std::cout << "ppathwc5->toString():\t\t\t"
              << ppathwc5->toString()
              << "\tCorrect output: "
              << ss.str()
              << ((ppathwc5->toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");

    ss << vectorToString(copypathwc0.getPath()) << ":" << costsVectorToString(copypathwc0.getCosts());
    std::cout << "copypathwc0.toString():\t\t\t"
              << copypathwc0.toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((copypathwc0.toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << vectorToString(copypathwc1.getPath()) << ":" << costsVectorToString(copypathwc1.getCosts());
    std::cout << "copypathwc1.toString():\t\t\t"
              << copypathwc1.toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((copypathwc1.toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << vectorToString(copypathwc2.getPath()) << ":" << costsVectorToString(copypathwc2.getCosts());
    std::cout << "copypathwc2.toString():\t\t\t"
              << copypathwc2.toString()
              << "\tCorrect output: "
              << ss.str()
              << ((copypathwc2.toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << vectorToString(copyppathwc3.getPath()) << ":" << costsVectorToString(copyppathwc3.getCosts());
    std::cout << "copyppathwc3.toString():\t\t"
              << copyppathwc3.toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((copyppathwc3.toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << vectorToString(copyppathwc4.getPath()) << ":" << costsVectorToString(copyppathwc4.getCosts());
    std::cout << "copyppathwc4.toString():\t\t"
              << copyppathwc4.toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((copyppathwc4.toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << vectorToString(copyppathwc5.getPath()) << ":" << costsVectorToString(copyppathwc5.getCosts());
    std::cout << "copyppathwc5.toString():\t\t"
              << copyppathwc5.toString()
              << "\tCorrect output: "
              << ss.str()
              << ((copyppathwc5.toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");

    ss << vectorToString(pcopypathwc0->getPath()) << ":" << costsVectorToString(pcopypathwc0->getCosts());
    std::cout << "pcopypathwc0->toString():\t\t"
              << pcopypathwc0->toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((pcopypathwc0->toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << vectorToString(pcopypathwc1->getPath()) << ":" << costsVectorToString(pcopypathwc1->getCosts());
    std::cout << "pcopypathwc1->toString():\t\t"
              << pcopypathwc1->toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((pcopypathwc1->toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << vectorToString(pcopypathwc2->getPath()) << ":" << costsVectorToString(pcopypathwc2->getCosts());
    std::cout << "pcopypathwc2->toString():\t\t"
              << pcopypathwc2->toString()
              << "\tCorrect output: "
              << ss.str()
              << ((pcopypathwc2->toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << vectorToString(pcopyppathwc3->getPath()) << ":" << costsVectorToString(pcopyppathwc3->getCosts());
    std::cout << "pcopyppathwc3->toString():\t\t"
              << pcopyppathwc3->toString()
              << "\t\t\tCorrect output: "
              << ss.str()
              << ((pcopyppathwc3->toString() == ss.str()) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << vectorToString(pcopyppathwc4->getPath()) << ":" << costsVectorToString(pcopyppathwc4->getCosts());
    std::cout << "pcopyppathwc4->toString():\t\t"
              << pcopyppathwc4->toString()
              << "\t\tCorrect output: "
              << ss.str()
              << ((pcopyppathwc4->toString() == ss.str()) ? "\t\tOK" : "\t\tTEST FAILED")
              << std::endl;
    ss.str("");
    ss << vectorToString(pcopyppathwc5->getPath()) << ":" << costsVectorToString(pcopyppathwc5->getCosts());
    std::cout << "pcopyppathwc5->toString():\t\t"
              << pcopyppathwc5->toString()
              << "\tCorrect output: "
              << ss.str()
              << ((pcopyppathwc5->toString() == ss.str()) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    ss.str("");

    /* Test operator== */

    std::cout << std::endl
              << "Testing operator==:" << std::endl
              << std::endl;

    std::cout << "Check that a PathWithCosts object equals itself:" << std::endl;
    std::cout << "pathwc0 == pathwc0:\t\t\t"
              << ((pathwc0 == pathwc0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pathwc0 == pathwc0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pathwc1 == pathwc1:\t\t\t"
              << ((pathwc1 == pathwc1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pathwc1 == pathwc1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pathwc2 == pathwc2:\t\t\t"
              << ((pathwc2 == pathwc2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pathwc2 == pathwc2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*ppathwc3 == *ppathwc3:\t\t\t"
              << ((*ppathwc3 == *ppathwc3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*ppathwc3 == *ppathwc3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*ppathwc4 == *ppathwc4:\t\t\t"
              << ((*ppathwc4 == *ppathwc4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*ppathwc4 == *ppathwc4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*ppathwc5 == *ppathwc5:\t\t\t"
              << ((*ppathwc5 == *ppathwc5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*ppathwc5 == *ppathwc5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypathwc0 == copypathwc0:\t\t"
              << ((copypathwc0 == copypathwc0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copypathwc0 == copypathwc0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypathwc1 == copypathwc1:\t\t"
              << ((copypathwc1 == copypathwc1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copypathwc1 == copypathwc1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypathwc2 == copypathwc2:\t\t"
              << ((copypathwc2 == copypathwc2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copypathwc2 == copypathwc2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copyppathwc3 == copyppathwc3:\t\t"
              << ((copyppathwc3 == copyppathwc3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copyppathwc3 == copyppathwc3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copyppathwc4 == copyppathwc4:\t\t"
              << ((copyppathwc4 == copyppathwc4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copyppathwc4 == copyppathwc4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copyppathwc5 == copyppathwc5:\t\t"
              << ((copyppathwc5 == copyppathwc5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((copyppathwc5 == copyppathwc5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopypathwc0 == *pcopypathwc0:\t\t"
              << ((*pcopypathwc0 == *pcopypathwc0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopypathwc0 == *pcopypathwc0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopypathwc1 == *pcopypathwc1:\t\t"
              << ((*pcopypathwc1 == *pcopypathwc1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopypathwc1 == *pcopypathwc1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopypathwc2 == *pcopypathwc2:\t\t"
              << ((*pcopypathwc2 == *pcopypathwc2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopypathwc2 == *pcopypathwc2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopyppathwc3 == *pcopyppathwc3:\t"
              << ((*pcopyppathwc3 == *pcopyppathwc3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopyppathwc3 == *pcopyppathwc3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopyppathwc4 == *pcopyppathwc4:\t"
              << ((*pcopyppathwc4 == *pcopyppathwc4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopyppathwc4 == *pcopyppathwc4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*pcopyppathwc5 == *pcopyppathwc5:\t"
              << ((*pcopyppathwc5 == *pcopyppathwc5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*pcopyppathwc5 == *pcopyppathwc5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl << std::endl;

    std::cout << "Check that the address of a PathWithCosts object equals its own address:" << std::endl;
    std::cout << "&pathwc0 == &pathwc0:\t\t\t"
              << ((&pathwc0 == &pathwc0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&pathwc0 == &pathwc0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&pathwc1 == &pathwc1:\t\t\t"
              << ((&pathwc1 == &pathwc1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&pathwc1 == &pathwc1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&pathwc2 == &pathwc2:\t\t\t"
              << ((&pathwc2 == &pathwc2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&pathwc2 == &pathwc2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "ppathwc3 == ppathwc3:\t\t\t"
              << ((ppathwc3 == ppathwc3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((ppathwc3 == ppathwc3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "ppathwc4 == ppathwc4:\t\t\t"
              << ((ppathwc4 == ppathwc4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((ppathwc4 == ppathwc4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "ppathwc5 == ppathwc5:\t\t\t"
              << ((ppathwc5 == ppathwc5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((ppathwc5 == ppathwc5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copypathwc0 == &copypathwc0:\t\t"
              << ((&copypathwc0 == &copypathwc0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copypathwc0 == &copypathwc0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copypathwc1 == &copypathwc1:\t\t"
              << ((&copypathwc1 == &copypathwc1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copypathwc1 == &copypathwc1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copypathwc2 == &copypathwc2:\t\t"
              << ((&copypathwc2 == &copypathwc2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copypathwc2 == &copypathwc2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copyppathwc3 == &copyppathwc3:\t\t"
              << ((&copyppathwc3 == &copyppathwc3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copyppathwc3 == &copyppathwc3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copyppathwc4 == &copyppathwc4:\t\t"
              << ((&copyppathwc4 == &copyppathwc4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copyppathwc4 == &copyppathwc4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&copyppathwc5 == &copyppathwc5:\t\t"
              << ((&copyppathwc5 == &copyppathwc5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((&copyppathwc5 == &copyppathwc5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypathwc0 == pcopypathwc0:\t\t"
              << ((pcopypathwc0 == pcopypathwc0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopypathwc0 == pcopypathwc0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypathwc1 == pcopypathwc1:\t\t"
              << ((pcopypathwc1 == pcopypathwc1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopypathwc1 == pcopypathwc1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypathwc2 == pcopypathwc2:\t\t"
              << ((pcopypathwc2 == pcopypathwc2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopypathwc2 == pcopypathwc2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopyppathwc3 == pcopyppathwc3:\t\t"
              << ((pcopyppathwc3 == pcopyppathwc3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopyppathwc3 == pcopyppathwc3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopyppathwc4 == pcopyppathwc4:\t\t"
              << ((pcopyppathwc4 == pcopyppathwc4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopyppathwc4 == pcopyppathwc4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopyppathwc5 == pcopyppathwc5:\t\t"
              << ((pcopyppathwc5 == pcopyppathwc5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pcopyppathwc5 == pcopyppathwc5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl << std::endl;

    std::cout << "Check that a PathWithCosts object equals a copy, but that" << std::endl
              << "the addresses of a PathWithCosts object and a copy differ:" << std::endl;
    std::cout << "pathwc0 == copypathwc0:\t\t\t"
              << ((pathwc0 == copypathwc0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pathwc0 == copypathwc0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&pathwc0 == &copypathwc0:\t\t"
              << ((&pathwc0 == &copypathwc0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&pathwc0 == &copypathwc0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pathwc0 == *pcopypathwc0:\t\t"
              << ((pathwc0 == *pcopypathwc0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pathwc0 == *pcopypathwc0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&pathwc0 == pcopypathwc0:\t\t"
              << ((&pathwc0 == pcopypathwc0) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&pathwc0 == pcopypathwc0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pathwc1 == copypathwc1:\t\t\t"
              << ((pathwc1 == copypathwc1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pathwc1 == copypathwc1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&pathwc1 == &copypathwc1:\t\t"
              << ((&pathwc1 == &copypathwc1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&pathwc1 == &copypathwc1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pathwc1 == *pcopypathwc1:\t\t"
              << ((pathwc1 == *pcopypathwc1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pathwc1 == *pcopypathwc1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&pathwc1 == pcopypathwc1:\t\t"
              << ((&pathwc1 == pcopypathwc1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&pathwc1 == pcopypathwc1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pathwc2 == copypathwc2:\t\t\t"
              << ((pathwc2 == copypathwc2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pathwc2 == copypathwc2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&pathwc2 == &copypathwc2:\t\t"
              << ((&pathwc2 == &copypathwc2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&pathwc2 == &copypathwc2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pathwc2 == *pcopypathwc2:\t\t"
              << ((pathwc2 == *pcopypathwc2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((pathwc2 == *pcopypathwc2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "&pathwc2 == pcopypathwc2:\t\t"
              << ((&pathwc2 == pcopypathwc2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(&pathwc2 == pcopypathwc2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*ppathwc3 == copyppathwc3:\t\t"
              << ((*ppathwc3 == copyppathwc3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*ppathwc3 == copyppathwc3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "ppathwc3 == &copyppathwc3:\t\t"
              << ((ppathwc3 == &copyppathwc3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(ppathwc3 == &copyppathwc3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*ppathwc3 == *pcopyppathwc3:\t\t"
              << ((*ppathwc3 == *pcopyppathwc3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*ppathwc3 == *pcopyppathwc3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "ppathwc3 == pcopyppathwc3:\t\t"
              << ((ppathwc3 == pcopyppathwc3) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(ppathwc3 == pcopyppathwc3) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*ppathwc4 == copyppathwc4:\t\t"
              << ((*ppathwc4 == copyppathwc4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*ppathwc4 == copyppathwc4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "ppathwc4 == &copyppathwc4:\t\t"
              << ((ppathwc4 == &copyppathwc4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(ppathwc4 == &copyppathwc4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*ppathwc4 == *pcopyppathwc4:\t\t"
              << ((*ppathwc4 == *pcopyppathwc4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*ppathwc4 == *pcopyppathwc4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "ppathwc4 == pcopyppathwc4:\t\t"
              << ((ppathwc4 == pcopyppathwc4) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(ppathwc4 == pcopyppathwc4) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*ppathwc5 == copyppathwc5:\t\t"
              << ((*ppathwc5 == copyppathwc5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*ppathwc5 == copyppathwc5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "ppathwc5 == &copyppathwc5:\t\t"
              << ((ppathwc5 == &copyppathwc5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(ppathwc5 == &copyppathwc5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "*ppathwc5 == *pcopyppathwc5:\t\t"
              << ((*ppathwc5 == *pcopyppathwc5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "TRUE"
              << ((*ppathwc5 == *pcopyppathwc5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "ppathwc5 == pcopyppathwc5:\t\t"
              << ((ppathwc5 == pcopyppathwc5) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(ppathwc5 == pcopyppathwc5) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl << std::endl;
    
    std::cout << "Spot check that different PathWithCosts objects are not equal:" << std::endl;
    std::cout << "pathwc0 == pathwc1:\t\t\t"
              << ((pathwc0 == pathwc1) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pathwc0 == pathwc1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pathwc0 == pathwc2:\t\t\t"
              << ((pathwc0 == pathwc2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pathwc0 == pathwc2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pathwc1 == pathwc2:\t\t\t"
              << ((pathwc1 == pathwc2) ? "TRUE" : "FALSE")
              << "\t\t\tCorrect output: "
              << "FALSE"
              << (!(pathwc1 == pathwc2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;

    /* Test operator* */

    std::cout << std::endl
              << "Testing operator*:" << std::endl
              << std::endl;

    std::cout << "pathwc0*pathwc0:\t\t\t"
              << (pathwc0*pathwc0)->toString()
              << "\t\t\tCorrect output: "
              << INVALID_PATH->toString()
              << ((pathwc0*pathwc0 == INVALID_PATH) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pathwc0*copypathwc0:\t\t\t"
              << (pathwc0*copypathwc0)->toString()
              << "\t\t\tCorrect output: "
              << (pathwc0*pathwc0)->toString()
              << ((pathwc0*copypathwc0 == pathwc0*pathwc0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pathwc0*(*pcopypathwc0):\t\t"
              << (pathwc0*(*pcopypathwc0))->toString()
              << "\t\t\tCorrect output: "
              << (pathwc0*pathwc0)->toString()
              << ((pathwc0*(*pcopypathwc0) == pathwc0*pathwc0) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pathwc1*pathwc1:\t\t\t"
              << (pathwc1*pathwc1)->toString()
              << "\t\t\tCorrect output: "
              << INVALID_PATH->toString()
              << ((pathwc1*pathwc1 == INVALID_PATH) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pathwc1*copypathwc1:\t\t\t"
              << (pathwc1*copypathwc1)->toString()
              << "\t\t\tCorrect output: "
              << (pathwc1*pathwc1)->toString()
              << ((pathwc1*copypathwc1 == pathwc1*pathwc1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pathwc1*(*pcopypathwc1):\t\t"
              << (pathwc1*(*pcopypathwc1))->toString()
              << "\t\t\tCorrect output: "
              << (pathwc1*pathwc1)->toString()
              << ((pathwc1*(*pcopypathwc1) == pathwc1*pathwc1) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pathwc2*pathwc2:\t\t\t"
              << (pathwc2*pathwc2)->toString()
              << "\t\t\tCorrect output: "
              << INVALID_PATH->toString()
              << ((pathwc2*pathwc2 == INVALID_PATH) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pathwc2*copypathwc2:\t\t\t"
              << (pathwc2*copypathwc2)->toString()
              << "\t\t\tCorrect output: "
              << (pathwc2*pathwc2)->toString()
              << ((pathwc2*copypathwc2 == pathwc2*pathwc2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pathwc2*(*pcopypathwc2):\t\t"
              << (pathwc2*(*pcopypathwc2))->toString()
              << "\t\t\tCorrect output: "
              << (pathwc2*pathwc2)->toString()
              << ((pathwc2*(*pcopypathwc2) == pathwc2*pathwc2) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*ppathwc3)*(*ppathwc3):\t\t"
              << ((*ppathwc3)*(*ppathwc3))->toString()
              << "\t\t\tCorrect output: "
              << INVALID_PATH->toString()
              << (((*ppathwc3)*(*ppathwc3) == INVALID_PATH) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*ppathwc3)*copyppathwc3:\t\t"
              << ((*ppathwc3)*copyppathwc3)->toString()
              << "\t\t\tCorrect output: "
              << ((*ppathwc3)*(*ppathwc3))->toString()
              << (((*ppathwc3)*copyppathwc3 == (*ppathwc3)*(*ppathwc3)) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*ppathwc3)*(*pcopyppathwc3):\t\t"
              << ((*ppathwc3)*(*pcopyppathwc3))->toString()
              << "\t\t\tCorrect output: "
              << ((*ppathwc3)*(*ppathwc3))->toString()
              << (((*ppathwc3)*(*pcopyppathwc3) == (*ppathwc3)*(*ppathwc3)) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*ppathwc4)*(*ppathwc4):\t\t"
              << ((*ppathwc4)*(*ppathwc4))->toString()
              << "\t\t\tCorrect output: "
              << INVALID_PATH->toString()
              << (((*ppathwc4)*(*ppathwc4) == INVALID_PATH) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*ppathwc4)*copyppathwc4:\t\t"
              << ((*ppathwc4)*copyppathwc4)->toString()
              << "\t\t\tCorrect output: "
              << ((*ppathwc4)*(*ppathwc4))->toString()
              << (((*ppathwc4)*copyppathwc4 == (*ppathwc4)*(*ppathwc4)) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*ppathwc4)*(*pcopyppathwc4):\t\t"
              << ((*ppathwc4)*(*pcopyppathwc4))->toString()
              << "\t\t\tCorrect output: "
              << ((*ppathwc4)*(*ppathwc4))->toString()
              << (((*ppathwc4)*(*pcopyppathwc4) == (*ppathwc4)*(*ppathwc4)) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*ppathwc5)*(*ppathwc5):\t\t"
              << ((*ppathwc5)*(*ppathwc5))->toString()
              << "\t\t\tCorrect output: "
              << INVALID_PATH->toString()
              << (((*ppathwc5)*(*ppathwc5) == INVALID_PATH) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*ppathwc5)*copyppathwc5:\t\t"
              << ((*ppathwc5)*copyppathwc5)->toString()
              << "\t\t\tCorrect output: "
              << ((*ppathwc5)*(*ppathwc5))->toString()
              << (((*ppathwc5)*copyppathwc5 == (*ppathwc5)*(*ppathwc5)) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "(*ppathwc5)*(*pcopyppathwc5):\t\t"
              << ((*ppathwc5)*(*pcopyppathwc5))->toString()
              << "\t\t\tCorrect output: "
              << ((*ppathwc5)*(*ppathwc5))->toString()
              << (((*ppathwc5)*(*pcopyppathwc5) == (*ppathwc5)*(*ppathwc5)) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl << std::endl;

    std::cout << "pathwc0*pathwc2:\t\t\t"
              << (pathwc0*pathwc2)->toString()
              << "\t\t\tCorrect output: "
              << INVALID_PATH->toString()
              << ((pathwc0*pathwc2 == INVALID_PATH) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pathwc0*(*ppathwc5):\t\t\t"
              << (pathwc0*(*ppathwc5))->toString()
              << "\t\t\tCorrect output: "
              << INVALID_PATH->toString()
              << ((pathwc0*(*ppathwc5) == INVALID_PATH) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    expectedPathVector.push_back(2);
    expectedPathVector.push_back(5);
    const Cost* ac7 = new AdditiveCost(2+5);
    expectedCostsVector.push_back(ac7);
    PathWithCosts expectedPathWithCosts(expectedPathVector, expectedCostsVector);
    std::cout << "pathwc2*(*ppathwc5):\t\t\t"
              << (pathwc2*(*ppathwc5))->toString()
              << "\tCorrect output: "
              << expectedPathWithCosts.toString()
              << ((*(pathwc2*(*ppathwc5)) == expectedPathWithCosts) ? "\tOK" : "\tTEST FAILED")
              << std::endl;
    expectedPathVector.clear();
    expectedCostsVector.at(0) = NULL;
    expectedCostsVector.clear();

    
    /* Test destructor */

    std::cout << std::endl
              << "Testing the destructor:" << std::endl
              << std::endl;

    std::cout << "\tdelete ppathwc3;" << std::endl;
    delete ppathwc3;
    std::cout << "\tdelete ppathwc4;" << std::endl;
    delete ppathwc4;
    std::cout << "\tdelete ppathwc5;" << std::endl;
    delete ppathwc5;
    std::cout << "\tdelete pcopypathwc0;" << std::endl;
    delete pcopypathwc0;
    std::cout << "\tdelete pcopypathwc1;" << std::endl;
    delete pcopypathwc1;
    std::cout << "\tdelete pcopypathwc2;" << std::endl;
    delete pcopypathwc2;
    std::cout << "\tdelete pcopyppathwc3;" << std::endl;
    delete pcopyppathwc3;
    std::cout << "\tdelete pcopyppathwc4;" << std::endl;
    delete pcopyppathwc4;
    std::cout << "\tdelete pcopyppathwc5;" << std::endl;
    delete pcopyppathwc5;
    
    std::cout << std::endl;

}

#endif
