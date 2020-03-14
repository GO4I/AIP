#include <iostream>
#include <iomanip> 
#include <math.h>  
#include <fstream>
#include <locale>
int main()
{
    setlocale (LC_ALL, "Russian");
    std::fstream f;
    float dx, xs, xf;
    const float eps = 0.000001;  
    char a;
    float y, x;
    std::cout << "1. Взять данные с файла.\n";
    std::cout << "2. Ввести вручную\n";
    std::cout << "Ответ : ";
    std::cin >> a;
    switch (a) {
    case '1':
        f.open("Zadanie2n.txt", std::ios::in);
        f >> xs;
        f >> xf;
        f >> dx;
        std::cout << "\tx\t\ty" << std::endl;
        std::cout.precision(5);
        x = xs;
        while (x < xf) {
            if (fabs(x - 2) < eps)
                std::cout << "\t" << x << "\t\t Деление на ноль" << std::endl;
            else {
                y = sqrt(2 + 3 * x) + 72 * x + tan(4 * x + 31);
                std::cout << "\t" << x << "\t\t" << y << std::endl;
            }
            x += dx;
        }
        f.close();
        break;
    case '2':
        std::cout << "Укажите диапазон! \n";
        std::cout << "от : ";
        std::cin >> xs;
        std::cout << "до : ";
        std::cin >> xf;
        std::cout << "Укажите шаг : ";
        std::cin >> dx;
        std::cout << "\tx\t\ty" << std::endl;
        std::cout.precision(5);
        x = xs;
        while (x < xf) {
            if (fabs(x - 2) < eps)
                std::cout << "\t" << x << "\t\t Деление на ноль" << std::endl;
            else {
                y = sqrt(2 + 3 * x) + 72 * x + tan(4 * x + 31);
                std::cout << "\t" << x << "\t\t" << y << std::endl;
            }
            x += dx;
        }
        break;
    default:
        std::cout << "Такой ответ не принимается!\n";
        break;
    }
    system("PAUSE");
    return 0;
}
