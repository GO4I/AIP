#include <iostream>
#include <time.h>
#include <locale>
const int N = 10;
int main()
{
	setlocale(LC_ALL, "Russian");
	int arr[N], max, min, n1 = 0, n2 = 0;
	srand(time(0));
	for (int i = 0; i < N; i++) {
		arr[i] = 0 + rand() % 20;
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
	max = arr[0];
	min = arr[0];
	for (int i = 1; i < N; i++)
	{
		if (max < arr[i]) {
			max = arr[i]; 
			n1 = i;
		}
		if (min > arr[i]) { 
			min = arr[i]; 
			n2 = i;
		}
	}
	std::cout << "Min: " << min << "\n";
	std::cout << "Max: " << max << "\n";
	std::cout << "индекс Min: " << n2 << "\n";
	std::cout << "индекс Max: " << n1 << "\n";
	std::getchar();
	std::getchar();
	return 0;
}