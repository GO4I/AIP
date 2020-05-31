/*
Дана матрица.  Элементы первой строки — мощность электромотора, второй строки — категория мотора (число от 1 до 3). Найти самый мощный мотор категории 3.
*/
#include <iostream>
using namespace std;

int main() {
    const int rows = 2;
    const int cols = 5;
    int mat[rows][cols] = { 
                          {9,7,9,5,2}, 
                          {2,3,1,3,2} 
                          };

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << mat[i][j] << "    ";
        cout << endl;
    }

    int sum = 0;
    int max = sum;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat[1][j] == 3) sum = mat[0][j] + mat[1][j];
            if (sum > max) max = sum; 
        }
    }
    cout << "Otvet: " << max;
    getchar();
    getchar();
    return 0;
}
