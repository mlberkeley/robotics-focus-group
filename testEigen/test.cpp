#include <iostream>
// angle brackets is looking in the library directory 
#include "Eigen/Dense"
// quotes is looking in the current working directory 

using namespace std;
using namespace Eigen;

int main()
{
    // Making a 3x3 matrix of zeroes
    // Matrix <type, rows, columns>
    Matrix<float, 3, 3> matrixA;
    matrixA.setZero();
    cout << matrixA << endl;
}
