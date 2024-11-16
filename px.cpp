#include <iostream>
#include <Eigen/Dense>

int main() {
    // Define the Pauli-X matrix
    Eigen::Matrix2d pauli_x;
    pauli_x << 0, 1,
               1, 0;

    // Define qubit states |0> and |1>
    Eigen::Vector2d qubit_zero(1, 0); // |0>
    Eigen::Vector2d qubit_one(0, 1);  // |1>

    // Apply Pauli-X to |0>
    Eigen::Vector2d result_zero = pauli_x * qubit_zero;
    std::cout << "Pauli-X applied to |0>: " << result_zero.transpose() << std::endl;

    // Apply Pauli-X to |1>
    Eigen::Vector2d result_one = pauli_x * qubit_one;
    std::cout << "Pauli-X applied to |1>: " << result_one.transpose() << std::endl;

    return 0;
}