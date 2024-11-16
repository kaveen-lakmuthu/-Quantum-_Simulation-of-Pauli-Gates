#include <iostream>
#include <Eigen/Dense>

int main() {
    // Define the Pauli-Z gate as a 2x2 matrix
    Eigen::Matrix2d pauli_z;
    pauli_z << 1, 0,
               0, -1;

    // Define qubit states |0> and |1>
    Eigen::Vector2d qubit_zero(1, 0); // |0>
    Eigen::Vector2d qubit_one(0, 1);  // |1>

    // Apply Pauli-Z to |0>
    Eigen::Vector2d result_zero = pauli_z * qubit_zero;
    std::cout << "Pauli-Z applied to |0>: " << result_zero.transpose() << std::endl;

    // Apply Pauli-Z to |1>
    Eigen::Vector2d result_one = pauli_z * qubit_one;
    std::cout << "Pauli-Z applied to |1>: " << result_one.transpose() << std::endl;

    return 0;
}
