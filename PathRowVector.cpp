//
//  PathRowVector.cpp
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
    rowZeros.str("");
    (void)((__rowNumber<1000)&&(rowZeros<<0));
    (void)((__rowNumber<100)&&(rowZeros<<0));
    (void)((__rowNumber<10)&&(rowZeros<<0));
    ss << std::left << std::setfill('-') << std::setw(59) << "+"
       << " Row " << rowZeros.str() << __rowNumber << " "
       << std::right << std::setfill('-') << std::setw(59) << "+"
       << std::endl;
    std::stringstream columnZeros;
    for (int column=0; column<__rowVector.size(); column++) {
        columnZeros.str("");
        (void)((column<1000)&&(rowZeros<<0));
        (void)((column<100)&&(rowZeros<<0));
        (void)((column<10)&&(rowZeros<<0));
        std::stringstream columnTermString;
        std::vector<std::string> pathCellStringVector(__rowVector.at(column)->toStringVector());
        columnTermString << "| Column " << columnZeros.str() << column << ": " << pathCellStringVector.at(0);
        ss << std::left << std::setfill(' ') << std::setw(127) << columnTermString.str() << "|" << std::endl;
        for (int columnTerm=1; columnTerm<pathCellStringVector.size(); columnTerm++) {
            columnTermString.str("");
            columnTermString << "|              " << pathCellStringVector.at(columnTerm);
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