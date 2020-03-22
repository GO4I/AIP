#include <iostream>
#include <locale>
#include <math.h>
#include <fstream>
float x, y;
char a;
std::fstream f;
void Write2Key() {
	setlocale(LC_ALL, "Russian");
	std::cout << "Введите x: ";
	std::cin >> x;
	if (x > 1) {
		y = 3 * x - 7;
		std::cout << "Ответ: " << y << "\n";

	}
	else if (x < 1) {
		y = 3 * abs(x + 2) - 7;
		std::cout << "Ответ: " << y << "\n";
	}
	else if (x = 1) {
		y = 3;
		std::cout << "Ответ: " << y << "\n";
	}
}
void Write2File() {
    setlocale(LC_ALL, "Russian");
	f.open("Zadanie4d.txt", std::ios::in);
	f >> x;
	if (x > 1) {
		y = 3 * x - 7;
		std::cout << "Ответ: " << y << "\n";

	}
	else if (x < 1) {
		y = 3 * abs(x + 2) - 7;
		std::cout << "Ответ: " << y << "\n";
	}
	else if (x = 1) {
		y = 3;
		std::cout << "Ответ: " << y << "\n";
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
