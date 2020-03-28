#include <iostream>
#include <stdlib.h>
#include <locale>
#include <time.h>
#include <cmath>
int main()
{
    setlocale(LC_ALL, "Russian");
    const int n = 20;
    int arr[n];
    srand(time(0));
    //Массив от -10 до 10, чтобы учитывать отрицательные числа
    for (int i = 0; i < n; i++)
        arr[i] = -10 + rand() % n;
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
	    std::cout << std::endl;
	    int max_number = arr[0];  

    for (int i = 1; i < n; i++)  
    if (max_number < abs(arr[i]))   
        max_number = abs(arr[i]);
        std::cout << "Максимальное в массиве = " << max_number << "\n";

    for (int i = 1; i < n; i++)
    if (max_number > abs(arr[i]))
        max_number = abs(arr[i]);
        std::cout << "Минимальное в массиве = " << max_number << "\n";
	    std::cin.get();
	    std::cin.get();
    return 0;
}
