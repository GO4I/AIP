#include <iostream>
#include <ctime>
#include <stdlib.h>
int q = 0;

void selectionSort(float data[], int len) {
	int j = 0;
	float tmp = 0;
	for (int i = 0; i < len; i++) {
		j = i;
		for (int k = i; k < len; k++) {
			if (data[j] > data[k]) {
				j = k;
			}
		}
		tmp = data[i];
		data[i] = data[j];
		data[j] = tmp;
		q++;
	}
	std::cout << "==========SORTED:=========" << "\n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << data[i] << ", ";
	}
	std::cout << "\nКол-во перестановок: \n";
	std::cout << q << "\n";
}

void bubbleSort(float data[], int len) {
	float tmp = 0;
		for (int i = 0; i < len; i++) {
			for (int j = len - 1; j >= i + 1; j--) {
			if (data[j] < data[j - 1]) {  
				tmp = data[j];
				data[j] = data[j - 1];
				data[j - 1] = tmp;
				q++;
			}
		}
	}
	std::cout << "==========SORTED:=========" << "\n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << data[i] << ", ";
	}
	std::cout << "\nКол-во перестановок: \n";
	std::cout << q << "\n";
}

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int ValueInput;
	int const Size = 100000;
	float data[Size];
	for (int i = 0; i < Size; i++)
	{
		data[i] = -10 + rand() % 31;
	}
	for (int i = 0; i < Size; i++)
	{
		std::cout << data[i] << ", ";
	}
	std::cout << "\nВыберите сортировку: \n" << "1.Выбором\n" << "2.Пузырьковым" << "\n";
	std::cin >>ValueInput;
	switch (ValueInput)
	{
		case 1:
			selectionSort(data, Size);
			break;
		case 2:
			bubbleSort(data, Size);
			break;
	default:
		break;
	}
	getchar();
	getchar();
}

/* 
                + - - - + - - - + - - - + - - - - + - - - - - - - - + 
                |  №1   |  №2   |  №3   |   №4    |       №5        |
+ - - - - - - - + - - - + - - - + - - - + - - - - + - - - - - - - - +
|  data[Size]   |  100  | 1000  | 5000  | 10000   |100000           |
+ - - - - - - - + - - - + - - - + - - - + - - - - + - - - - - - - - +
|qty Selection 1|  100  | 1000  | 5000  | 10000   |100000           |
+ - - - - - - - + - - - + - - - + - - - + - - - - + - - - - - - - - +
|qty Selection 2|  100  | 1000  | 5000  | 10000   |100000           |
+ - - - - - - - + - - - + - - - + - - - + - - - - + - - - - - - - - +
|qty Selection 3|  100  | 1000  | 5000  | 10000   |100000           |
+ - - - - - - - + - - - + - - - + - - - + - - - - + - - - - - - - - +
|qty Bubble 1   | 2461  |238340 |6029268|24099489 |1879246106       |
+ - - - - - - - + - - - + - - - + - - - + - - - - + - - - - - - - - +
|qty Bubble 2   | 2509  |234941 |6100770|23982623 |1899256198       |
+ - - - - - - - + - - - + - - - + - - - + - - - - + - - - - - - - - +
|qty Bubble 3   | 2601  |247038 |6026673|24096637 |1971286086       |
+ - - - - - - - + - - - + - - - + - - - + - - - - + - - - - - - - - +
*/

/*Метод сортировки Выбором лучше чем Пузырьковый. 
Потому что сортировке пузырьком число перестановок больше, чем в сортировке выбором. 
Метод сортировки выбором при любой генерации массива даст то число перестановок, сколько элементов в массиве.
*/
