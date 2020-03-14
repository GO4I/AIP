#include <iostream>
#include <math.h>
#include <locale>

int main()
{
    setlocale(LC_ALL, "Russian");
    int x;
    std::cout << "Введите x : ";
    std::cin >> x;
    x = abs(x) + pow(x,5);
    std::cout << "Ответ : " << x << "\n";
    system("PAUSE");
    return 0;
}
