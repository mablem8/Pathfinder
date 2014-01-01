//
//  PathMatrix.cpp
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

#include "PathMatrix.h"
#include <iomanip>

const PathMatrix* const INVALID_MATRIX = new PathMatrix(std::vector<const PathMatrixCell*>(), 0);

PathMatrix::PathMatrix(const std::vector<const PathMatrixCell*>& pathMatrix, const unsigned int numberOfVertices) : __matrix(pathMatrix), __order(numberOfVertices) {}

PathMatrix::PathMatrix(const PathMatrix& pathMatrix) : __order(pathMatrix.getNumberOfVertices()) {
    for (int i=0; i<pathMatrix.getPathMatrix().size(); i++) {
        const PathMatrixCell* celli = pathMatrix.getPathMatrix().at(i);
        __matrix.push_back(celli->clone());
        celli = NULL;
    }
}

PathMatrix::~PathMatrix() {
    for (int i=0; i<__matrix.size(); i++) {
        if (__matrix.at(i) != INVALID_CELL) {
            delete __matrix.at(i);
        }
        __matrix.at(i) = NULL;
    }
    __matrix.clear();
}

const std::vector<const PathMatrixCell*>& PathMatrix::getPathMatrix() const {
    return __matrix;
}

const unsigned int PathMatrix::getNumberOfVertices() const {
    return __order;
}

// assumes that the order of this and pathMatrix are the same
const PathMatrix* PathMatrix::operator*(const PathMatrix& pathMatrix) const {
    std::vector<const PathMatrixCell*> matrixProduct(__order*__order, INVALID_CELL);
    for (int leftMatrixRowPosition=0; leftMatrixRowPosition<__order; leftMatrixRowPosition++) {
        for (int rightMatrixColumnPosition=0; rightMatrixColumnPosition<__order; rightMatrixColumnPosition++) {
            for (int vectorsIterator=0; vectorsIterator<__order; vectorsIterator++) {
                const PathMatrixCell* dotProductTerm = (*(__matrix.at(leftMatrixRowPosition*__order+vectorsIterator)))*(*(pathMatrix.getPathMatrix().at(vectorsIterator*__order+rightMatrixColumnPosition)));
                matrixProduct.at(leftMatrixRowPosition*__order+rightMatrixColumnPosition) = (*(matrixProduct.at(leftMatrixRowPosition*__order+rightMatrixColumnPosition))) + (*dotProductTerm);
            }
        }
    }
    return new PathMatrix(matrixProduct, __order);
}

std::string PathMatrix::toString() const {
    std::stringstream ss;
    std::stringstream rowZeros;
    for (int row=0; row<__order; row++) {
        rowZeros.str("");
        (void)((row<1000)&&(rowZeros<<0));
        (void)((row<100)&&(rowZeros<<0));
        (void)((row<10)&&(rowZeros<<0));
        ss << std::left << std::setfill('-') << std::setw(59) << "+"
           << " Row " << rowZeros.str() << row << " "
           << std::right << std::setfill('-') << std::setw(59) << "+"
           << std::endl;
        std::stringstream columnZeros;
        for (int column=0; column<__order; column++) {
            columnZeros.str("");
            (void)((column<1000)&&(columnZeros<<0));
            (void)((column<100)&&(columnZeros<<0));
            (void)((column<10)&&(columnZeros<<0));
            std::stringstream columnTermString;
            columnTermString.str("");
            std::vector<std::string> pathCellStringVector(__matrix.at(row*__order+column)->toStringVector());
            columnTermString << "| Column " << columnZeros.str() << column << ": " << pathCellStringVector.at(0);
            ss << std::left << std::setfill(' ') << std::setw(127) << columnTermString.str() << "|" << std::endl;
            for (int columnTerm=1; columnTerm<pathCellStringVector.size(); columnTerm++) {
                columnTermString.str("");
                columnTermString << "|              " << pathCellStringVector.at(columnTerm);
                ss << std::left << std::setfill(' ') << std::setw(127) << columnTermString.str() << "|" << std::endl;
            }
        }
    }
    ss << std::left << std::setfill('-') << std::setw(127) << "+" << "+";
    return ss.str();
}

std::ostream& operator<<(std::ostream& output, const PathMatrix& pathMatrix) {
    output << pathMatrix.toString();
    return output;
}