#include <iostream>

const int size = 5; // Задайте розмір матриці, наприклад, 5x5

int main() {
    int matrix[size][size];

    // Заповнення матриці значеннями (приклад)
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = i * size + j;
        }
    }

    // Відображення початкової матриці
    std::cout << "Початкова матриця:" << std::endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    // Відображення симетричної матриці
    std::cout << "Симетрична матриця:" << std::endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << matrix[j][i] << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}
