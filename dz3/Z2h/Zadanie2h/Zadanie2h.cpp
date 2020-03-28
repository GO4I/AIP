#include <iostream>     
#include <stdlib.h>
#include <time.h>
#include <locale>
int main()
{
    setlocale(LC_ALL, "Russian");
    int arr[10], summa = 0, k = 6;
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 0 + rand() % 10;
        std::cout << arr[i] << " ";
        if (arr[i] < k)
            summa += arr[i];
    }
    std::cout << "\n Сумма = " << summa << "\n";
    std::getchar();
    std::getchar();
    return 0;


}