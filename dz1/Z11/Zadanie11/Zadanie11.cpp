#include<iostream>
#include <locale>

int main() {
    setlocale(LC_ALL, "Russian");
    int number1, number2, number3;
    int Min, Max;
    std::cout << "Введите первое число : ";
    std::cin >> number1;
    Min = number1;
    std::cout << "Введите второе число : ";
    std::cin >> number2;
    Max = number2;
    if (number2 < Min) Min = number2;
    else if (number2 > Min) Max = number2;
    std::cout << "Введите третье число : ";
    std::cin >> number3;
    if (number3 < Min) Min = number3;
    else if (number3 > Min) Max = number3;
    std::cout << "Ответ : " << "\n";
    std::cout << "Минимальное-3 : " << Min - 3 << "\n";
    std::cout << "Максимальное+5 : " << Max + 5 << "\n";
    system("PAUSE");
    return 0;
}