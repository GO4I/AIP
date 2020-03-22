#include <iostream>
#include <math.h>
#include <locale>
#include <fstream>
int main()
{
    setlocale(LC_ALL, "Russian");
    std::fstream f;
    f.open("Zadanie3b.txt", std::ios::out);
    float x, ch, y, i;
    std::cout << "Введите Ч: ";
    std::cin >> ch;
    std::cout << "Введите x: ";
    std::cin >> x;
    i = 1;
    y = 0;
    double sum = 0;
    for (int i = 1; i <= ch; i++) {
        y = 1 / (i * x);
        sum += y;
    }
    std::cout << "Ответ: " << sum;
    f << sum;
    f.close();
    std::getchar();
    std::getchar();
    return 0;
}