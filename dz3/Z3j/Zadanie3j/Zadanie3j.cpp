#include <iostream>
#include <math.h>
#include <locale>
#include <fstream>
long double fact(int N)
{
    if (N < 0)
        return 0;
    if (N == 0)
        return 1;
    return N * fact(N - 1);
}
int main()
{
    setlocale(LC_ALL, "Russian");
    std::fstream f;
    f.open("Zadanie3h.txt", std::ios::out);
    float x, ch, y, i, v, i1;
    float sum = 0;
    std::cout << "Введите Ч: ";
    std::cin >> ch;
    std::cout << "Введите x: ";
    std::cin >> x;
    i1 = 2;
    y = 0;
    for (int i = 0; i < ch; i++) {
        y = x - pow(x, i1) / (i1 + 1);
        sum += y;
        i1++;
    }
    v = (ch * x) - x;
    std::cout << "Ответ: " << abs(sum - v);
    f << abs(sum - v);
    f.close();
    std::getchar();
    std::getchar();
    return 0;
}