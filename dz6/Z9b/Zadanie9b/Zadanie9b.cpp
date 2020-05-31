/*
Объявить, реализовать заполнение данными с клавиатуры ИЛИ из файла и вывести на экран матрицу, описывающую следующие сущности. 
b. Состояние робота на шахматной доске. Робот характеризуется уровнем заряда, скоростью движения.
*/
#include <iostream>
int main()
{
	const int rows = 2;
	const int cols = 10;
	int mat[rows][cols];
	std::cout << "Input charge level: \n";

	for (int j = 0; j < cols; j++) {
		std::cout << "[" << 0 << "][" << j << "] = ";
		std::cin >> mat[0][j];
	}

	std::cout << "Input speed: \n";

	for (int j = 0; j < cols; j++){
		std::cout << "[" << 0 << "][" << j << "] = ";
		std::cin >> mat[1][j];
	}	

	std::cout << "\nMatrix: \n";

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			std::cout << mat[i][j] << "\t";
		std::cout << "\n";
	}
	getchar();
	getchar();
	return 0;
}