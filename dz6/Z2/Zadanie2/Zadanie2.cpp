/*
Преобразовать матрицу, умножив элементы каждой строки на значение второго элемента этой строки.
*/
#include <iostream>
int main() {
    const int rows = 4;
    const int cols = 4;
    int mat[rows][cols];
    srand(0);

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            mat[i][j] = rand() % 100;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            std::cout << mat[i][j] << "    ";
        std::cout << "\n";
    }

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            mat[i][j] *= mat[i][j+1];

    std::cout << "Preobrazovannaya: \n";

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            std::cout << mat[i][j] << "    ";
        std::cout << "\n";
    }
    getchar();
    getchar();
    return 0;
}

/*
38    19    38    37
55    97    65    85
50    12    53    0
42    81    37    21
Preobrazovannaya:
722    722    1406    2035
5335    6305    5525    4250
600    636    0    0
3402    2997    777    -858993476
*/