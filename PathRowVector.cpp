//
//  PathRowVector.cpp
//  Pathfinder
//
//  Created by Bradley Denby on 12/19/13.
//  Copyright (c) 2013 Bradley Denby. All rights reserved.
//

#include "PathRowVector.h"
#include <iomanip>

const PathRowVector* const INVALID_ROW = new PathRowVector(*INVALID_MATRIX, 0);

PathRowVector::PathRowVector(const PathMatrix& pathMatrix, const unsigned int rowNumber) : __rowNumber(rowNumber) {
    for (int column=0; column<pathMatrix.getNumberOfVertices(); column++) {
        const PathMatrixCell* celli = pathMatrix.getPathMatrix().at(rowNumber*pathMatrix.getNumberOfVertices()+column);
        __rowVector.push_back(celli->clone());
        celli = NULL;
    }
}

PathRowVector::PathRowVector(const std::vector<const PathMatrixCell*>& rowVector, const unsigned int rowNumber) : __rowVector(rowVector), __rowNumber(rowNumber) {}

PathRowVector::PathRowVector(const PathRowVector& pathRowVector) : __rowNumber(pathRowVector.getRowNumber()) {
    for (int column=0; column<pathRowVector.getRowVector().size(); column++) {
        const PathMatrixCell* celli = pathRowVector.getRowVector().at(column);
        __rowVector.push_back(celli->clone());
        celli = NULL;
    }
}

PathRowVector::~PathRowVector() {
    for (int i=0; i<__rowVector.size(); i++) {
        if (__rowVector.at(i) != INVALID_CELL) {
            delete __rowVector.at(i);
        }
        __rowVector.at(i) = NULL;
    }
    __rowVector.clear();
}

const std::vector<const PathMatrixCell*>& PathRowVector::getRowVector() const {
    return __rowVector;
}

const unsigned int PathRowVector::getRowNumber() const {
    return __rowNumber;
}

const PathRowVector* PathRowVector::prependDepartureVertex() const {
    std::vector<const PathMatrixCell*> prependedRowVector;
    for (int i=0; i<__rowVector.size(); i++) {
        const PathMatrixCell* celli = __rowVector.at(i);
        prependedRowVector.push_back(celli->cloneAndPrepend(__rowNumber));
        celli = NULL;
    }
    return new PathRowVector(prependedRowVector, __rowNumber);
}

// assumes the length of the PathRowVector is equal to the number of vertices in the path matrix
const PathRowVector* PathRowVector::operator*(const PathMatrix& pathMatrix) const {
    unsigned int numberOfVertices = pathMatrix.getNumberOfVertices();
    std::vector<const PathMatrixCell*> vectorProduct(numberOfVertices, INVALID_CELL);
    for (int matrixColumn=0; matrixColumn<numberOfVertices; matrixColumn++) {
        for (int vectorsIterator=0; vectorsIterator<numberOfVertices; vectorsIterator++) {
            const PathMatrixCell* dotProductTerm = (*(__rowVector.at(vectorsIterator)))*(*(pathMatrix.getPathMatrix().at(vectorsIterator*numberOfVertices+matrixColumn)));
            vectorProduct.at(matrixColumn) = (*(vectorProduct.at(matrixColumn)))+(*dotProductTerm);
        }
    }
    return new PathRowVector(vectorProduct, __rowNumber);
}

std::string PathRowVector::toString() const {
    std::stringstream ss;
    std::stringstream rowZeros;
    if (__rowNumber < 1000) {
        rowZeros << 0;
        if (__rowNumber < 100) {
            rowZeros << 0;
            if (__rowNumber < 10) {
                rowZeros << 0;
            }
        }
    }
    ss << std::left << std::setfill('-') << std::setw(59) << "+"
       << " Row " << rowZeros.str() << __rowNumber << " "
       << std::right << std::setfill('-') << std::setw(59) << "+"
       << std::endl;
    std::stringstream columnZeros;
    for (int column=0; column<__rowVector.size(); column++) {
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
        std::vector<std::string> pathCellStringVector(__rowVector.at(column)->toStringVector());
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

std::ostream& operator<<(std::ostream& output, const PathRowVector& pathRowVector) {
    output << pathRowVector.toString();
    return output;
}