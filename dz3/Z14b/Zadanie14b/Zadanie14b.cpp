#include <iostream>
#include <time.h>
#include <locale>
const int N = 10;
int main()
{
	setlocale(LC_ALL, "Russian");
	int arr[N], even[N], max, min, n1 = 0, n2 = 0, j=0;
	srand(time(0));
	for (int i = 0; i < N; i++) {
		arr[i] = 0 + rand() % 20;
		std::cout << arr[i] << " ";
	}
	max = arr[0];
	min = arr[0];
	std::cout << "\nИндексы четных элементов: " << "\n";
	for (int i = 0; i < N; i++)
	{
		if (arr[i] % 2 == 0) {
			even[j] = i;
			j += 1;
			if (min > arr[i]) {
				min = arr[i];
				n2 = i + 1;
			}
		}
	}
	for (int i = 0; i < j; i++) std::cout  << even[i] << " ";
	std::cout << "\nиндекс Min: " << n2 << "\n";
	std::cout << "Ответ: " << min << "\n";
	std::getchar();
	std::getchar();
	return 0;
}
