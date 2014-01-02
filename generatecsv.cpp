//
//  generatecsv.cpp
//
//  Pathfinder, an optimal path finding program for graphs with
//  multi-weighted edges under specified constraints.
//
//  Copyright (c) 2014 Bradley Denby.
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

#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <sstream>

#define MAX_CAC 4
#define MAX_CPC 4

std::string usageDescription() {
    std::stringstream ss("");
    ss << std::endl
       <<  "Usage:" << std::endl
       << std::endl
       << "    Let n represent an integer equal to the number of vertices," << std::endl
       << "    let a represent the number of constrained additive costs per edge, and" << std::endl
       << "    let p represent the number of constrained probability costs per edge." << std::endl
       << "    Correct usage follows the form:" << std::endl
       << "    ./generatecsv n a p";
    return ss.str();
}

std::string licenseBoilerplate() {
    std::stringstream ss("");
    ss << "Part of Pathfinder, an optimal path finding program for graphs with" << std::endl
       << "multi-weighted edges under specified constraints." << std::endl
       << std::endl
       << "Copyright (c) 2014 Bradley Denby." << std::endl
       << std::endl
       << "This program is free software: you can redistribute it and/or modify" << std::endl
       << "it under the terms of the GNU General Public License as published by" << std::endl
       << "the Free Software Foundation, either version 3 of the License, or" << std::endl
       << "(at your option) any later version." << std::endl
       << std::endl
       << "This program is distributed in the hope that it will be useful," << std::endl
       << "but WITHOUT ANY WARRANTY; without even the implied warranty of" << std::endl
       << "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the" << std::endl
       << "GNU General Public License for more details." << std::endl
       << std::endl
       << "You should have received a copy of the GNU General Public License" << std::endl
       << "along with this program.  If not, see {http://www.gnu.org/licenses/}.";
    return ss.str();
}

void printFailureMessage() {
    std::cout << usageDescription() << std::endl
              << std::endl;
    std::cout << licenseBoilerplate() << std::endl
              << std::endl;
    std::cout << "Program terminated, no file generated." << std::endl
              << std::endl;
}

int main(int argc, const char * argv[]) {
    
    unsigned int numberOfVertices = 0;
    unsigned int numberOfConstrainedAdditiveCosts = 0;
    unsigned int numberOfConstrainedProbabilityCosts = 0;
    std::stringstream fileName("");
    fileName << "dataSet";
    std::stringstream recommendedConstraints("");
    recommendedConstraints << "(";
    std::srand(unsigned(std::time(NULL)));
    
    if (argc != 4) {
        printFailureMessage();
        return 0;
    }
    else if (!(std::stringstream(argv[1]) >> numberOfVertices)) {
        printFailureMessage();
        return 0;
    }
    else if (!(std::stringstream(argv[2]) >> numberOfConstrainedAdditiveCosts)) {
        printFailureMessage();
        return 0;
    }
    else if (!(std::stringstream(argv[3]) >> numberOfConstrainedProbabilityCosts)) {
        printFailureMessage();
        return 0;
    }
    else {
        
        std::cout << std::endl
                  << licenseBoilerplate() << std::endl
                  << std::endl;
        
        (void)((numberOfVertices<100000)&&(fileName<<0));
        (void)((numberOfVertices<10000)&&(fileName<<0));
        (void)((numberOfVertices<1000)&&(fileName<<0));
        (void)((numberOfVertices<100)&&(fileName<<0));
        (void)((numberOfVertices<10)&&(fileName<<0));
        fileName << numberOfVertices;
        if (numberOfConstrainedAdditiveCosts > MAX_CAC) {
            std::cout << "More than " << MAX_CAC << " constrained additive costs is not recommended at this time." << std::endl
                      << "Number of constrained additive costs changed from " << numberOfConstrainedAdditiveCosts << " to " << MAX_CAC << "." << std::endl
                      << std::endl;
            numberOfConstrainedAdditiveCosts = MAX_CAC;
        }
        for (unsigned int i=0; i<MAX_CAC; i++) {
            if (i < numberOfConstrainedAdditiveCosts) {
                fileName << "A";
            }
            else {
                fileName << "0";
            }
        }
        if (numberOfConstrainedProbabilityCosts > MAX_CPC) {
            std::cout << "More than " << MAX_CPC << " constrained probability costs is not recommended at this time." << std::endl
                      << "Number of constrained probability costs changed from " << numberOfConstrainedProbabilityCosts << " to " << MAX_CPC << "." << std::endl
                      << std::endl;
            numberOfConstrainedProbabilityCosts = MAX_CPC;
        }
        for (unsigned int i=0; i<MAX_CPC; i++) {
            if (i < numberOfConstrainedProbabilityCosts) {
                fileName << "P";
            }
            else {
                fileName << "0";
            }
        }
        fileName << ".csv";
        
        std::ofstream ofile(fileName.str().c_str());
        if (ofile.is_open()) {
            for (unsigned int row=0; row<numberOfVertices; row++) {
                for (unsigned int column=0; column<numberOfVertices; column++) {
                    if ( double(std::rand())/double(RAND_MAX) < double(4)/double(numberOfVertices) ) {
                        for (unsigned int caci=numberOfConstrainedAdditiveCosts; caci>0; caci--) {
                            int maxi = 1;
                            for (int i=0; i<caci; i++) {
                                maxi *= 10;
                            }
                            ofile << int(double(std::rand())/double(RAND_MAX)*double(maxi)) << ",";
                        }
                        for (unsigned int cpci=numberOfConstrainedProbabilityCosts; cpci>0; cpci--) {
                            int mini = 60 + int(double(30)/double(numberOfConstrainedProbabilityCosts)*double(cpci));
                            ofile << std::fixed << std::showpoint << std::setprecision(2)
                                  << double(std::rand()%(100-mini)+mini)/double(100) << ",";
                        }
                    }
                    else {
                        for (unsigned int caci=0; caci<numberOfConstrainedAdditiveCosts; caci++) {
                            ofile << ",";
                        }
                        for (unsigned int cpci=0; cpci<numberOfConstrainedProbabilityCosts; cpci++) {
                            ofile << ",";
                        }
                    }
                }
                ofile << std::endl;
            }
            for (unsigned int caci=numberOfConstrainedAdditiveCosts; caci>0; caci--) {
                int maxi = 1;
                for (int i=0; i<caci; i++) {
                    maxi *= 10;
                }
                recommendedConstraints << int(double(maxi)/double(2)*double(3));
                if (caci != 1 || numberOfConstrainedProbabilityCosts != 0) {
                    recommendedConstraints << ", ";
                }
            }
            for (unsigned int cpci=numberOfConstrainedProbabilityCosts; cpci>0; cpci--) {
                int mini = 60 + int(double(30)/double(numberOfConstrainedProbabilityCosts)*double(cpci));
                double averageValue = (double(100-mini)/double(2)+double(mini))/double(100);
                double recommendedConstraint = averageValue;
                for (int j=0; j<2; j++) {
                    recommendedConstraint *= averageValue;
                }
                recommendedConstraints << std::fixed << std::showpoint << std::setprecision(2)
                                       << recommendedConstraint;
                if (cpci != 1) {
                    recommendedConstraints << ", ";
                }
            }
            recommendedConstraints << ")";
            
            std::cout << "File generated: " << fileName.str() << std::endl
                      << std::endl
                      << "    " << numberOfVertices << " vertices," << std::endl
                      << "    " << numberOfConstrainedAdditiveCosts << " constrained additive costs per edge," << std::endl
                      << "    " << numberOfConstrainedProbabilityCosts << " constrained probability costs per edge." << std::endl
                      << std::endl;
            std::cout << "Recommended constraints: " << recommendedConstraints.str() << std::endl
                      << std::endl;
            
            ofile.close();
        }
        else {
            std::cout << "Error: " << fileName.str() << "could not be opened." << std::endl
                      << std::endl;
            std::cout << licenseBoilerplate() << std::endl
                      << std::endl;
            std::cout << "Program terminated, no file generated." << std::endl
                      << std::endl;
        }
    }
    
    return 0;
}
