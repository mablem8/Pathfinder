//
//  PathMatrix.cpp
//  Pathfinder
//
//  Created by Bradley Denby on 11/11/13.
//  Copyright (c) 2013 Bradley Denby. All rights reserved.
//

#include "PathMatrix.h"

const PathMatrix* const INVALID_MATRIX = new PathMatrix(std::vector<const PathMatrixCell*>(), 0);

PathMatrix::PathMatrix(const std::vector<const PathMatrixCell*>& pathMatrix, const unsigned int numberOfVertices) : __matrix(pathMatrix), __order(numberOfVertices) {}

PathMatrix::PathMatrix(const PathMatrix& pathMatrix) : __order(pathMatrix.getNumberOfVertices()) {
    for (int i=0; i<pathMatrix.getPathMatrix().size(); i++) {
        const PathMatrixCell* celli = new PathMatrixCell(*(pathMatrix.getPathMatrix().at(i)));
        __matrix.push_back(celli);
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
    for (int row=0; row<(__order-1); row++) {
        for (int column=0; column<__order; column++) {
            ss << __matrix.at(row*__order+column)->toString() << " ";
        }
        ss << std::endl;
    }
    for (int column=0; column<__order; column++) {
        ss << __matrix.at((__order-1)*__order+column)->toString() << " ";
    }
    return ss.str();
}

std::ostream& operator<<(std::ostream& output, const PathMatrix& pathMatrix) {
    output << pathMatrix.toString();
    return output;
}