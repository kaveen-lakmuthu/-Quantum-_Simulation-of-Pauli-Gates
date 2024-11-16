#include <iostream>
#include <Eigen/Dense>
#include <complex>

int main() {
    // Define the Pauli-Y matrix as a 2x2 complex matrix
    Eigen::Matrix2cd pauli_y;
    pauli_y << std::complex<double>(0, 0), std::complex<double>(0, -1),
               std::complex<double>(0, 1), std::complex<double>(0, 0);

    // Define qubit states |0> and |1> as complex vectors
    Eigen::Vector2cd qubit_zero(1, 0); // |0>
    Eigen::Vector2cd qubit_one(0, 1);  // |1>

    // Apply Pauli-Y to |0>
    Eigen::Vector2cd result_zero = pauli_y * qubit_zero;
    std::cout << "Pauli-Y applied to |0>: " << result_zero.transpose() << std::endl;

    // Apply Pauli-Y to |1>
    Eigen::Vector2cd result_one = pauli_y * qubit_one;
    std::cout << "Pauli-Y applied to |1>: " << result_one.transpose() << std::endl;

    return 0;
}