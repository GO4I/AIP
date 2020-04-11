#include <iostream>     
#include <stdlib.h>
#include <time.h>
#include <locale>


int main()
{
    setlocale(LC_ALL, "Russian");
    int arr[15], k = 0;
    
    srand(time(0));
    for (int i = 0; i < 15; i++)
    {
        arr[i] = 0 + rand() % 15;
        std::cout << arr[i] << " ";
        if (arr[i] > 0) k++;
    }
    std::cout << "\n Колличество чисел (больших 0): " << k << "\n";
    std::getchar();
    std::getchar();
    return 0;


}