#include <iostream>
#include <math.h>

int main()
{
    char a;
    const int rows = 3;
    const int cols = 3;
    int mat1[rows][cols];
    int mat2[rows][cols];
    int mat3[rows][cols];
    int t = 0;
    std::cout << "Vvod matrix 1: \n";

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << "[" << i << "][" << j << "] = ";
            std::cin >> mat1[i][j];
        }
    }
    std::cout << "Vvod matrix 2: \n";

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << "[" << i << "][" << j << "] = ";
            std::cin >> mat2[i][j];
        }
    }
    std::cout << "Viberite chto delat s Matritsami: \n" << "1. Slojit\n" << "2. Vichest\n" << "3. Umnojit\n" << "4. Transpnirovat\n" << "Vibor: ";
    std::cin >> a;

    switch (a) {
    case '1':
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++) {
                mat3[i][j] = mat1[i][j] + mat2[i][j];
            }
        std::cout << "-----Otvet-----\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                std::cout << mat3[i][j] << "    ";
            }
            std::cout << "\n";
        }
        break;

    case '2':
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++) {
                mat3[i][j] = mat1[i][j] - mat2[i][j];
            }
        std::cout << "-----Otvet-----\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                std::cout << mat3[i][j] << "    ";
            }
            std::cout << "\n";
        }
        break;

    case '3':
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++) {
                mat3[i][j] = 0;
                for (int k = 0; k < 3; k++)
                    mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        std::cout << "-----Otvet-----\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                std::cout << mat3[i][j] << "    ";
            }
            std::cout << "\n";
        }
        break;

    case '4':
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++) {
                t = mat1[i][j];
                mat1[i][j] = mat1[j][i];
                mat1[j][i] = t;
            }
        std::cout << "-----Otvet-----\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                std::cout << mat1[j][i] << "    ";
            }
            std::cout << "\n";
        }
        break;
    }
    getchar();
    getchar();
    return 0;
}
