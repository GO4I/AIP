/*
В квадратной матрице найти сумму положительных элементов, лежащих на и выше главной диагонали и расположенных в чётных столбцах.
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

    int sum = 0;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) {
            if (j >= i)
                if (j % 2 == 1)
                    if (mat[i][j] > 0) 
                        sum += mat[i][j];                     
        }
    std::cout << "Otvet: \n" << sum;
    getchar();
    getchar();
    return 0;
}