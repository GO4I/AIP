#include <iostream>
#include <locale>
#include <fstream>
int main()
{
    setlocale(LC_ALL, "Russian");
    std::fstream f;
    int h;
    char a;
    std::cout << "1. Взять данные с файла.\n";
    std::cout << "2. Ввести вручную\n";
    std::cout << "Ответ : ";
    std::cin >> a;
    switch (a) {
    case '1':
        f.open("Zadanie1.txt", std::ios::in);
        f >> h; 
        for (int i = 1; i < h + 1; i++) {
            for (int j = 0; j < i; j++)
                std::cout << 0;
            std::cout << std::endl;
        }
        f.close();
        break;
    case '2':
        std::cout << "Введите количество строк : ";
        std::cin >> h;
        for (int i = 1; i < h + 1; i++) {
            for (int j = 0; j < i; j++)
                std::cout << 0;
            std::cout << std::endl;
            }
        break;
    default:
            std::cout << "Такой ответ не принимается!\n";
        break;
    }
    system("PAUSE");
    return 0;
}
