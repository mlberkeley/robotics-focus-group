#include<iostream>
#include<Eigen/Dense>

using namespace std;
using namespace Eigen;

int main()
{
    // Making a 3x3 matrix of zeroes 
    // Matrix <type, rows, columns> 
    Matrix <float, 3,3> matrixA;
    matrixA.setZero();
    cout << matrixA << endl;
    
    // Alternative way of making 3x3 matrix of zeros using -typedef declaration 
    Matrix3f matrixA1;
    matrixA1.setZero();

    // Most common way of making 3x3 matrix of zeros 
    MatrixXf matrix1zeros; 
    matrix1zeros = MatrixXf::Zero(rowNumber, columnNumber);


    // -typedef declaration 
    Matrix3d matrix_33 = Matrix3d::Zero();
    // Dynamic matrix
    MatrixXd matrixx_x 
    // Making a dynamic matrix, explicit declaration 
    Matrix<float, Dynamic, Dynamic> matrixB;

    // Making a dynamic matrix, -typedef declaration 
    Matrix3f matrixB1;

    // Making a dynamic matrix, constructor 
    MatrixXd matrixC(10,10);

    // Eigen indicates (0,0) as the top left
    matriXd matrixC1(2,2);
    matrixC1(0,0) = 1;
    matrixC1(0,1) = 2;
    matrixC1(1,0) = 3 
    matrixC1(1,1) = 3
    cout << endl << matrixC1 << endl; 
    
    // Declaring and instantiating a matrix with numbers

    Matrix4f matrixD;
    matrixD << 1, 2, 3, 4
            5, 6, 7, 8
            9, 10, 11, 12,
            13, 14, 15, 16;
    cout << endl << matrixD <<endl;

    // 2 x 3 matrix 
    Matrix4f matrixE;
    matrixE <<1,2,3,4,5,6; 

    // Making a random matrix: 
    Matrix_33 = Matrix3d::Random()
    // Transposing the matrix
    cout << "transpose: \n" << matrix_33.transpose() << endl;
    // Summing all values 
    cout << "sum: " << matrix_33.sum() << endl;    
    // Scaling all inputs by 10 
    cout << "times 10: \n" << 10 ∗ matrix_33 << endl;
    // Finding inverse 
    cout << "inverse: \n" << matrix_33.inverse() << endl;
    
}




Matrix <float, Dynamic, Dynamic> 
MatrixXd matrixC(10,10);
Maxtrix