#include <iostream>
#include <math.h>
#include <locale>

int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    std::cout << "Введите число : ";
    std::cin >> a;
    std::cout << "Квадрат : " << pow(a, 2) << "\n" << "Куб : " << pow(a, 3) << "\n";
    system("PAUSE");
    return 0;
}
