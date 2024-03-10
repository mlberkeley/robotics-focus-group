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
    cout << "first zero matrix:  \n"
         << matrixA << endl;

    // Alternative way of making 3x3 matrix of zeros using -typedef declaration
    Matrix3f matrixA1;
    matrixA1.setZero();
    cout << "second zero matrix: \n"
         << matrixA1 << endl;

    // Most common way of making 3x3 matrix of zeros
    int rowNumber = 3;
    int colNumber = 4;
    MatrixXf matrix1zeros;
    matrix1zeros = MatrixXf::Zero(rowNumber, colNumber);
    cout << "third zero matrix: \n"
         << matrix1zeros << endl;

    // Basic arithmetic operatoins on a random matrix:
    Eigen::Matrix3d random_matrix = Eigen::Matrix3d::Random();
    // Transposing the matrix
    cout << "transpose: \n"
         << random_matrix.transpose() << endl;
    // Summing all values
    cout << "sum: " << random_matrix.sum() << endl;
    // // Finding inverse
    // Finding the inverse
    cout << "inverse: \n"
         << random_matrix.inverse() << endl;

    if (random_matrix.determinant() != 0)
    {
        cout << "invertible matrix: \n"
             << random_matrix.inverse() << endl;
    }
    else
    {
        cout << "matrix not invertible";
    }

    // Making a dynamic matrix
    Eigen::MatrixXd dynamic_matrix = Eigen::MatrixXd::Random(3,3);
    cout << "dynamic matrix \n" << dynamic_matrix << endl; 

    //Quarternion rotation of a rotation 90 degrees around the z-axis

    Eigen::Quaterniond q;
    q = Eigen::AngleAxisd(M_PI / 2, Eigen::Vector3d::UnitZ());

    // Define a vector to rotate
    Eigen::Vector3d v(1, 0, 0);

    // Rotate the vector using the quaternion
    Eigen::Vector3d rotated_v = q * v;

    std::cout << "Original vector: " << v.transpose() << std::endl;
    std::cout << "Rotated vector: " << rotated_v.transpose() << std::endl;

    return 0;
}
