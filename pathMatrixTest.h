//
//  pathMatrixTest.h
//  Pathfinder
//
//  Created by Bradley Denby on 11/11/13.
//  Copyright (c) 2013 Bradley Denby. All rights reserved.
//

#ifndef Pathfinder_pathMatrixTest_h
#define Pathfinder_pathMatrixTest_h

#include "PathMatrix.h"
#include <fstream>

std::string matrixVectorToString(const std::vector<const PathMatrixCell*>& m, const unsigned int n) {
    std::stringstream ss;
    for (int row=0; row<n; row++) {
        ss << "+-------------------------------------------- Row " << row << " ---------------------------------------------+" << std::endl;
        for (int column=0; column<n; column++) {
            std::stringstream temp;
            temp << "| Column " << column << ": " << m.at(row*n+column)->toString();
            ss << std::left << std::setw(97) << temp.str() << "|" << std::endl;
        }
    }
    ss << "+------------------------------------------------------------------------------------------------+" << std::endl;
    return ss.str();
}

bool comparePathMatrixCellPointerVectors(const std::vector<const PathMatrixCell*>& m1, const std::vector<const PathMatrixCell*>& m2) {
    if (m1.size() != m2.size()) {
        return false;
    }
    else {
        for (int i=0; i<m1.size(); i++) {
            const PathMatrixCell* m1celli = m1.at(i);
            const PathMatrixCell* m2celli = m2.at(i);
            if ((*m1celli).getPaths().size() != (*m2celli).getPaths().size()) {
                return false;
            }
            else {
                for (int j=0; j<(*m1celli).getPaths().size(); j++) {
                    if (!(*((*m1celli).getPaths().at(j)) == *((*m2celli).getPaths().at(j)))) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
}

void pathMatrixTest() {
    
    /************ Test the PathMatrix class ************/

    std::cout << std::endl
              << "****** Testing the PathMatrix class ******" << std::endl
              << std::endl;

    /* Read in the data */
    
    std::cout << "Reading in the data..." << std::endl
              << std::endl;
    
    unsigned int numberOfVertices = 4;
    unsigned int costsPerEdge = 3;
    std::vector<const PathMatrixCell*> fmatrix0(numberOfVertices*numberOfVertices, INVALID_CELL);
    std::vector<const PathMatrixCell*> fmatrix1(numberOfVertices*numberOfVertices, INVALID_CELL);
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
        for (int i=0; i<fmatrix1.size(); i++) {
            fmatrix1.at(i) = new PathMatrixCell(*(fmatrix0.at(i)));
        }
    }
    else {
        std::cout << "TEST FAILED: pathMatrixTest.csv cannot be opened" << std::endl;
        return;
    }
    
    /* Test the constructors */
    
    std::cout << std::endl
              << "Testing the constructors:" << std::endl
              << std::endl;
    
    std::cout << "\tPathMatrix matrix0(fmatrix0, numberOfVertices);" << std::endl;
    PathMatrix matrix0(fmatrix0, numberOfVertices);
    std::cout << "\tPathMatrix *pmatrix1 = new PathMatrix(fmatrix1, numberOfVertices);" << std::endl;
    PathMatrix *pmatrix1 = new PathMatrix(fmatrix1, numberOfVertices);

    std::cout << std::endl
              << "\tPathMatrix copymatrix0(matrix0);" << std::endl;
    PathMatrix copymatrix0(matrix0);
    std::cout << "\tPathMatrix copypmatrix1(*pmatrix1)" << std::endl;
    PathMatrix copypmatrix1(*pmatrix1);

    std::cout << std::endl
              << "\tPathMatrix *pcopymatrix0 = new PathMatrix(matrix0);" << std::endl;
    PathMatrix *pcopymatrix0 = new PathMatrix(matrix0);
    std::cout << "\tPathMatrix *pcopypmatrix1 = new PathMatrix(*pmatrix1);" << std::endl;
    PathMatrix *pcopypmatrix1 = new PathMatrix(*pmatrix1);
    
    /* Test getPathMatrix() */
    
    std::cout << std::endl
              << "Testing getPathMatrix():" << std::endl
              << std::endl;

    std::cout << "matrix0.getPathMatrix():" << std::endl
              << matrixVectorToString(matrix0.getPathMatrix(), numberOfVertices)
              << "Correct output:" << std::endl
              << matrixVectorToString(fmatrix0, numberOfVertices)
              << ((comparePathMatrixCellPointerVectors(matrix0.getPathMatrix(),fmatrix0)) ? "OK" : "TEST FAILED")
              << std::endl << std::endl;
    std::cout << "pmatrix1->getPathMatrix():" << std::endl
              << matrixVectorToString(pmatrix1->getPathMatrix(), numberOfVertices)
              << "Correct output:" << std::endl
              << matrixVectorToString(fmatrix1, numberOfVertices)
              << ((comparePathMatrixCellPointerVectors(pmatrix1->getPathMatrix(),fmatrix1)) ? "OK" : "TEST FAILED")
              << std::endl << std::endl;

    std::cout << "copymatrix0.getPathMatrix():" << std::endl
              << matrixVectorToString(copymatrix0.getPathMatrix(), numberOfVertices)
              << "Correct output:" << std::endl
              << matrixVectorToString(fmatrix0, numberOfVertices)
              << ((comparePathMatrixCellPointerVectors(copymatrix0.getPathMatrix(),fmatrix0)) ? "OK" : "TEST FAILED")
              << std::endl << std::endl;
    std::cout << "copypmatrix1.getPathMatrix():" << std::endl
              << matrixVectorToString(copypmatrix1.getPathMatrix(), numberOfVertices)
              << "Correct output:" << std::endl
              << matrixVectorToString(fmatrix1, numberOfVertices)
              << ((comparePathMatrixCellPointerVectors(copypmatrix1.getPathMatrix(),fmatrix1)) ? "OK" : "TEST FAILED")
              << std::endl << std::endl;

    std::cout << "pcopymatrix0->getPathMatrix():" << std::endl
              << matrixVectorToString(pcopymatrix0->getPathMatrix(), numberOfVertices)
              << "Correct output:" << std::endl
              << matrixVectorToString(fmatrix0, numberOfVertices)
              << ((comparePathMatrixCellPointerVectors(pcopymatrix0->getPathMatrix(),fmatrix0)) ? "OK" : "TEST FAILED")
              << std::endl << std::endl;
    std::cout << "pcopypmatrix1->getPathMatrix():" << std::endl
              << matrixVectorToString(pcopypmatrix1->getPathMatrix(), numberOfVertices)
              << "Correct output:" << std::endl
              << matrixVectorToString(fmatrix1, numberOfVertices)
              << ((comparePathMatrixCellPointerVectors(pcopypmatrix1->getPathMatrix(),fmatrix1)) ? "OK" : "TEST FAILED")
              << std::endl;
    
    /* Test getNumberOfVertices() */

    std::cout << std::endl
              << "Testing getNumberOfVertices():" << std::endl
              << std::endl;
    
    std::cout << "matrix0.getNumberOfVertices():\t\t"
              << matrix0.getNumberOfVertices()
              << "\t\t\tCorrect output: "
              << numberOfVertices
              << ((matrix0.getNumberOfVertices() == numberOfVertices) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pmatrix1->getNumberOfVertices():\t"
              << pmatrix1->getNumberOfVertices()
              << "\t\t\tCorrect output: "
              << numberOfVertices
              << ((pmatrix1->getNumberOfVertices() == numberOfVertices) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    
    std::cout << "copymatrix0.getNumberOfVertices():\t"
              << copymatrix0.getNumberOfVertices()
              << "\t\t\tCorrect output: "
              << numberOfVertices
              << ((copymatrix0.getNumberOfVertices() == numberOfVertices) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "copypmatrix1.getNumberOfVertices():\t"
              << copypmatrix1.getNumberOfVertices()
              << "\t\t\tCorrect output: "
              << numberOfVertices
              << ((copypmatrix1.getNumberOfVertices() == numberOfVertices) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;

    std::cout << "pcopymatrix0->getNumberOfVertices():\t"
              << pcopymatrix0->getNumberOfVertices()
              << "\t\t\tCorrect output: "
              << numberOfVertices
              << ((pcopymatrix0->getNumberOfVertices() == numberOfVertices) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;
    std::cout << "pcopypmatrix1->getNumberOfVertices():\t"
              << pcopypmatrix1->getNumberOfVertices()
              << "\t\t\tCorrect output: "
              << numberOfVertices
              << ((pcopypmatrix1->getNumberOfVertices() == numberOfVertices) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
              << std::endl;

    /* Test toString() */

    std::stringstream ss;
    std::cout << std::endl
              << "Testing toString():" << std::endl
              << std::endl;
    
    std::cout << "matrix0.toString():" << std::endl
              << matrix0.toString() << std::endl
              << "Compare to:" << std::endl
              << matrixVectorToString(matrix0.getPathMatrix(), numberOfVertices)
              << std::endl;
    
    /* Test operator<< */

    std::cout << std::endl
              << "Testing operator<<:" << std::endl
              << std::endl;
    
    std::cout << "cout << matrix0:" << std::endl
              << matrix0 << std::endl
              << "Compare to:" << std::endl
              << matrix0.toString() << std::endl
              << std::endl;

    /* Test operator* */

    std::cout << std::endl
              << "Testing operator*:" << std::endl
              << std::endl;

    std::cout << "matrix0*matrix0:" << std::endl
              << matrixVectorToString((matrix0*matrix0)->getPathMatrix(), numberOfVertices) << std::endl;
    //              << "\t\t\tCorrect output: "
    //              << INVALID_CELL->toString()
    //              << ((cell0*cell0 == INVALID_CELL) ? "\t\t\tOK" : "\t\t\tTEST FAILED")
    //              << std::endl;


    
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
    std::cout << std::endl
              << "for (int i=0; i<fmatrix1.size(); i++) {" << std::endl
              << "\tfmatrix1.at(i) = NULL;" << std::endl
              << "}" << std::endl
              << "fmatrix1.clear();" << std::endl << std::endl;
    for (int i=0; i<fmatrix1.size(); i++) {
        fmatrix1.at(i) = NULL;
    }
    fmatrix1.clear();
    
    std::cout << "\tdelete pmatrix1;" << std::endl;
    delete pmatrix1;
    std::cout << "\tdelete pcopymatrix0;" << std::endl;
    delete pcopymatrix0;
    std::cout << "\tdelete pcopypmatrix1;" << std::endl;
    delete pcopypmatrix1;
    
    std::cout << std::endl;

    
}

#endif
