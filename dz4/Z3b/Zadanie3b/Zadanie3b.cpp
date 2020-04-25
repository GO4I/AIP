#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <string>
#include <fstream>

struct Book {
	std::string author;
	int shelfnumber;
	int numberofpages;
};

void randString(std::string& str) {
	static const char alphabet[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";
	str = "     ";
	for (int i = 0; i < str.length(); i++) {
		int r = rand() % (sizeof(alphabet) - 1);
		str[i] = alphabet[r];
	}
	str[str.length()] = 0;
}

void showBooks(const Book p) {
	std::cout << p.author << "\t"
		<< p.shelfnumber << "\t"
		<< p.numberofpages <<"\n";
}

int findBooksMark(const Book p[], const int l, const float key) {
	int count = 0;
	for (int i = 0; i < l; i++) {
		if (p[i].shelfnumber > key) {
			showBooks(p[i]);
			count++;
		}
	}
	return count;
}

void selectionSort(Book books[], int Size) {
	int j = 0;
	Book tmp;
	for (int i = 0; i < Size; i++) {
		j = i;

		for (int k = i; k < Size; k++) {
			if (books[j].numberofpages > books[k].numberofpages) {
				j = k;
			}
		}
		tmp = books[i];
		books[i] = books[j];
		books[j] = tmp;
	}
}

void write2File(const Book p[], const int l) {
	std::ofstream f;
	f.open("data.txt");
	for (int i = 0; i < l; i++)
		f << p[i].author << "\t"
		<< p[i].shelfnumber << "\t"
		<< p[i].numberofpages << "\n";
	f.close();
}

int main() {
	setlocale(LC_ALL, "Ru");
	int const Size = 15;
	Book books[Size];

	for (int i = 0; i < Size; i++)
	{
		books[i].shelfnumber = 80 + rand() % 150;
		books[i].numberofpages = 725 + rand() % 250;
		randString(books[i].author);
		showBooks(books[i]);

	}
	int Numberofpages = 100;
	std::cout << "\n" << "Find all who more than " << Numberofpages << "\n";
	int findCount = findBooksMark(books, Size, Numberofpages);
	std::cout << "Total " << findCount << " elements!" << "\n";
	std::cout << "\n" << "=======Sorted======" << "\n";
	selectionSort(books, Size);
	for (int i = 0; i < Size; i++)
		showBooks(books[i]);
	write2File(books, Size);
	return 0;
}