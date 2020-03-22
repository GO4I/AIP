#include <iostream>
#include <iomanip> 
#include <math.h>  
#include <fstream>
#include <locale>
std::fstream f;
float dx, xs, xf;
const float eps = 0.000001;
char a;
float y, x;
void Write2Key() {
    setlocale(LC_ALL, "Russian");
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
            y = pow(-2*x, 2) + 3*x - 1;
            std::cout << "\t" << x << "\t\t" << y << std::endl;
        }
        x += dx;
    }
}
void Write2File() {
    setlocale(LC_ALL, "Russian");
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
            y = pow(-2 * x, 2) + 3 * x - 1;
            std::cout << "\t" << x << "\t\t" << y << std::endl;
        }
        x += dx;
    }
    f.close();
}

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "1. Взять данные с файла.\n";
    std::cout << "2. Ввести вручную\n";
    std::cout << "Ответ : ";
    std::cin >> a;
    switch (a) {
    case '1':
        Write2File();
        break;
    case '2':
        Write2Key();
        break;
    default:
        std::cout << "Такой ответ не принимается!\n";
        break;
    }
    std::getchar();
    std::getchar();
    return 0;
}
