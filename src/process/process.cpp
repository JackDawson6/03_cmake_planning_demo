#include <iostream>
#include "process.h"
#include <Eigen/Dense>
using std::cout, std::endl;
using Eigen::MatrixXd;

void Process::planProcess(){
    cout << "this is planing process" << endl;
    my_map.mapInfo();

    MatrixXd matrix(2, 2);
    matrix(0, 0) = 1;
    matrix(0, 1) = 2;
    matrix(1, 0) = 3;
    matrix(1, 1) = 4;
    cout << "Matrix:" << endl;
    cout << matrix << endl;

    cout << "planning success!" << endl;
}
