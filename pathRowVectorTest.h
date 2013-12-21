//
//  pathRowVectorTest.h
//  Pathfinder
//
//  Created by Bradley Denby on 12/20/13.
//  Copyright (c) 2013 Bradley Denby. All rights reserved.
//

#ifndef Pathfinder_pathRowVectorTest_h
#define Pathfinder_pathRowVectorTest_h

#include "PathRowVector.h"
#include <fstream>

std::string rowVectorToString(const std::vector<const PathMatrixCell*>& r, const unsigned int n) {
    std::stringstream ss;
    std::stringstream rowZeros;
    if (n < 1000) {
        rowZeros << 0;
        if (n < 100) {
            rowZeros << 0;
            if (n < 10) {
                rowZeros << 0;
            }
        }
    }
    ss << std::left << std::setfill('-') << std::setw(59) << "+"
       << " Row " << rowZeros.str() << n << " "
       << std::right << std::setfill('-') << std::setw(59) << "+"
       << std::endl;
    std::stringstream columnZeros;
    for (int column=0; column<r.size(); column++) {
        columnZeros.str("");
        if (column < 1000) {
            columnZeros << 0;
            if (column < 100) {
                columnZeros << 0;
                if (column < 10) {
                    columnZeros << 0;
                }
            }
        }
        std::stringstream columnTermString;
        std::vector<std::string> pathCellStringVector(r.at(column)->toStringVector());
        columnTermString << "| Column " << columnZeros.str() << column << ": " << pathCellStringVector.at(0);
        ss << std::left << std::setfill(' ') << std::setw(127) << columnTermString.str() << "|" << std::endl;
        for (int term=1; term<pathCellStringVector.size(); term++) {
            columnTermString.str("");
            columnTermString << "|              " << pathCellStringVector.at(term);
            ss << std::left << std::setfill(' ') << std::setw(127) << columnTermString.str() << "|" << std::endl;
        }
    }
    ss << std::left << std::setfill('-') << std::setw(127) << "+" << "+";
    return ss.str();
}

void pathRowVectorTest() {
    
    /************ Test the PathRowVector class ************/

    std::cout << std::endl
              << "****** Testing the PathRowVector class ******" << std::endl
              << std::endl;
    
    /* Read in the data */
    
    unsigned int numberOfVertices = 4;
    unsigned int costsPerEdge = 3;
    std::vector<const PathMatrixCell*> fmatrix0(numberOfVertices*numberOfVertices, INVALID_CELL);
    std::ifstream ifile("pathMatrixTest.csv", std::ios::binary);
    if (ifile.is_open()) {
        std::string fileLine;
        for (int row=0; row<numberOfVertices; row++) {
            //std::cerr << "Row: " << row << std::endl;
            std::getline(ifile, fileLine);
            std::istringstream issFileLine(fileLine);
            std::string stringDouble;
            for (int column=0; column<numberOfVertices; column++) {
                //std::cerr << "Column: " << column << std::endl;
                std::vector<unsigned int> cellVertex;
                std::vector<const Cost*> cellCosts;
                std::vector<const Path*> cellPath;
                for (int k=0; k<costsPerEdge && std::getline(issFileLine, stringDouble, ','); k++) {
                    //std::cerr << "k: " << k << " stringDouble: " << stringDouble << std::endl;
                    if (stringDouble == "") {
                        int m=k+1;
                        while (m<costsPerEdge && std::getline(issFileLine, stringDouble, ',')) {
                            //std::cerr << "m: " << m << " stringDouble: " << stringDouble << std::endl;
                            m++;
                        }
                        for (m=0; m<cellCosts.size(); m++) {
                            delete cellCosts.at(m);
                            cellCosts.at(m) = NULL;
                        }
                        cellCosts.clear();
                        k = costsPerEdge;
                    }
                    else {
                        if (k==0) {
                            const Cost* newCost = new ConstrainedAdditiveCost(atof(stringDouble.c_str()), "units", 70);
                            cellCosts.push_back(newCost);
                            newCost = NULL;
                        }
                        else if(k==1) {
                            const Cost* newCost = new ConstrainedAdditiveCost(atof(stringDouble.c_str()), "units", 7);
                            cellCosts.push_back(newCost);
                            newCost = NULL;
                        }
                        else if(k==2) {
                            const Cost* newCost = new ConstrainedProbabilityCost(atof(stringDouble.c_str()), "units", 0.85);
                            cellCosts.push_back(newCost);
                            newCost = NULL;
                        }
                        else {
                            std::cerr << "Problem" << std::endl;
                        }
                    }
                }
                if (cellCosts.size() == costsPerEdge) {
                    cellVertex.push_back(column);
                    const Path* newPath = new PathWithCosts(cellVertex, cellCosts);
                    cellPath.push_back(newPath);
                    newPath = NULL;
                    const PathMatrixCell* newCell = new PathMatrixCell(cellPath);
                    fmatrix0.at(row*numberOfVertices+column) = newCell;
                    newCell = NULL;
                    cellVertex.clear();
                    for (int k=0; k<cellCosts.size(); k++) {
                        cellCosts.at(k) = NULL;
                    }
                    cellCosts.clear();
                    for (int k=0; k<cellPath.size(); k++) {
                        cellPath.at(k) = NULL;
                    }
                    cellPath.clear();
                }
            }
        }
    }
    else {
        std::cout << "TEST FAILED: pathMatrixTest.csv cannot be opened" << std::endl;
        return;
    }
    
    std::cout << matrixVectorToString(fmatrix0, numberOfVertices);

    /* Test the constructors */

    std::cout << std::endl
              << "Testing the constructors:" << std::endl
              << std::endl;
    
    std::cout << "\tPathMatrix matrix0(fmatrix0, numberOfVertices);" << std::endl;
    PathMatrix matrix0(fmatrix0, numberOfVertices);
    std::cout << "\tPathRowVector row0(matrix0, 0);" << std::endl;
    PathRowVector row0(matrix0, 0);
    
    /* Test getRowVector() */

    std::cout << std::endl
              << "Testing getRowVector():" << std::endl
              << std::endl;
    
    std::cout << "row0.getRowVector():" << std::endl
              << rowVectorToString(row0.getRowVector(), row0.getRowNumber()) << std::endl;
    
    /* Test prependDepartureVertex */
    
    std::cout << std::endl
              << "Testing prependDepartureVertex():" << std::endl
              << std::endl;
    
    std::cout << "PathRowVector* prependedRow0 = row0.prependDepartureVertex();" << std::endl;
    const PathRowVector* prependedRow0 = row0.prependDepartureVertex();
    std::cout << rowVectorToString(prependedRow0->getRowVector(),prependedRow0->getRowNumber()) << std::endl;

    
    /* Test operator* */

    std::cout << std::endl
              << "Testing operator*:" << std::endl
              << std::endl;

    std::cout << "row0*matrix0:" << std::endl
              << rowVectorToString((row0*matrix0)->getRowVector(), row0.getRowNumber()) << std::endl << std::endl;
    
    std::cout << "(*prependedRow0)*matrix0:" << std::endl
              << rowVectorToString(((*prependedRow0)*matrix0)->getRowVector(), prependedRow0->getRowNumber()) << std::endl;



    /* Test destructor */

    std::cout << std::endl
              << "Testing the destructor:" << std::endl
              << std::endl;

    std::cout << "for (int i=0; i<fmatrix0.size(); i++) {" << std::endl
              << "\tfmatrix0.at(i) = NULL;" << std::endl
              << "}" << std::endl
              << "fmatrix0.clear();" << std::endl;
    for (int i=0; i<fmatrix0.size(); i++) {
        fmatrix0.at(i) = NULL;
    }
    fmatrix0.clear();
    
    std::cout << std::endl << "\tdelete prependedRow0;" << std::endl;
    delete prependedRow0;
    
    std::cout << std::endl;
    
}

#endif
