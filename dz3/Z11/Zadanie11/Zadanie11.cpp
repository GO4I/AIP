#include <iostream>     
#include <stdlib.h>
#include <time.h>
#include <locale>
int main()
{
    setlocale(LC_ALL, "Russian");
    int arr[15], summa = 0;
    float sra = 0;
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 0 + rand() % 15;
        std::cout << arr[i] << " ";
        summa += arr[i];
        sra = summa/10;
    }
    std::cout << "\n Среднее арифметическое = " << sra << "\n";
    std::cout << "\n";
    for (int i = 0; i < 10; i++) {
        if (arr[i] < sra) std::cout << arr[i] << " ";
    }
    std::getchar();
    std::getchar();
    return 0;
}