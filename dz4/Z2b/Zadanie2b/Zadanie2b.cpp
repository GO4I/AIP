#include <iostream>
#include <ctime>
#include <stdlib.h>
int q = 0;

void insertionSort(float data[], int len) {
	float key = 0;
	int j = 0;
	for (int i = 1; i < len; i++) {
		key = data[i]; 
		j = i - 1;
		while (j >= 0 && data[j] > key) {
			data[j + 1] = data[j];
			j = j - 1;
			data[j + 1] = key;
			q++;
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
	std::cout << "\nВыберите сортировку: \n" << "1.Вставками\n" << "\n";
	std::cin >> ValueInput;
	switch (ValueInput)
	{
	case 1:
		insertionSort(data, Size);
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
|  data[Size]   |  100  | 1000  | 5000  | 10000   | 100000          |
+ - - - - - - - + - - - + - - - + - - - + - - - - + - - - - - - - - +
|qty Insertion 1| 2557  |243275 |5982158|24372418 | 1887633026      |
+ - - - - - - - + - - - + - - - + - - - + - - - - + - - - - - - - - +
|qty Insertion 2| 2423  |240533 |5953056|24352212 | 1897634146      |
+ - - - - - - - + - - - + - - - + - - - + - - - - + - - - - - - - - +
|qty Insertion 3| 2492  |244292 |6080715|24230585 | 1789634056      |
+ - - - - - - - + - - - + - - - + - - - + - - - - + - - - - - - - - +

*/

//Из всех 3 методов которые я использовал в задании 2 ас и задании 2 b самым лучшим методом сортировки по прежнему является методот сортировки Выбором!

