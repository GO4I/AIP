#include <iostream>
#include <math.h>
#include <locale>
#define PI 3.14


int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, s, p;
    std::cout << "Введите длину большей полуоси элипса (a) : ";
	std::cin >> a;
	std::cout << "Введите длину меньшей полуоси элипса (b) : ";
	std::cin >> b;
	s = PI * a * b;
	p = 2 * PI * sqrt((pow(a, 2)+pow(b, 2))/2);
	std::cout.precision(4);
	std::cout << "Площадь : " << s << "\n" << "Периметр : " << p << "\n";
	system("PAUSE");
	return 0;
}

