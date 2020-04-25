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
		<< p.numberofpages << "\n";
}

int findShelfnumber(const Book p[], const int l, const float key) {
	int count = 0;
	for (int i = 0; i < l; i++) {
		if (p[i].shelfnumber > key) {
			showBooks(p[i]);
			count++;
		}
	}
	return count;
}

int findNumberofpages(const Book p[], const int l, const float key) {
	int count = 0;
	for (int i = 0; i < l; i++) {
		if (p[i].numberofpages > key) {
			showBooks(p[i]);
			count++;
		}
	}
	return count;
}

void sortAuthor(Book books[], int Size) {
	int j = 0;
	Book tmp;
	for (int i = 0; i < Size; i++) {
		j = i;

		for (int k = i; k < Size; k++) {
			if (books[j].author > books[k].author) {
				j = k;
			}
		}
		tmp = books[i];
		books[i] = books[j];
		books[j] = tmp;
	}
}

void sortShelfnumber(Book books[], int Size) {
	int j = 0;
	Book tmp;
	for (int i = 0; i < Size; i++) {
		j = i;

		for (int k = i; k < Size; k++) {
			if (books[j].shelfnumber > books[k].shelfnumber) {
				j = k;
			}
		}
		tmp = books[i];
		books[i] = books[j];
		books[j] = tmp;
	}
}

void sortNumberofpages(Book books[], int Size) {
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
	int find1 = 150;
	int find2 = 800;
	int findCount;
	int const Size = 15;
	int choice;
	Book books[Size];

	for (int i = 0; i < Size; i++)
	{
		books[i].shelfnumber = 80 + rand() % 150;
		books[i].numberofpages = 725 + rand() % 250;
		randString(books[i].author);
		showBooks(books[i]);

	}
	std::cout << "\nСортировать по: \n" << "1. Автор\n" << "2. Номеру полки\n" << "3. Кол-ву страниц\n";
	std::cin >> choice;

	switch (choice) {
	case 1:
		std::cout << "\n" << "=======Sorted======" << "\n";
		sortAuthor(books, Size);
		for (int i = 0; i < Size; i++)
			showBooks(books[i]);
		write2File(books, Size);
	break;
	case 2:
		std::cout << "\n" << "=======Sorted======" << "\n";
		sortShelfnumber(books, Size);
		for (int i = 0; i < Size; i++)
			showBooks(books[i]);
		write2File(books, Size);
	break;
	case 3:
		std::cout << "\n" << "=======Sorted======" << "\n";
		sortNumberofpages(books, Size);
		for (int i = 0; i < Size; i++)
			showBooks(books[i]);
		write2File(books, Size);
	break;
	default:
		std::cout << "\n" << "=======Error=======" << "\n";
	break;
	}

	choice = 0;
	std::cout << "\nПоиск по: \n" << "1. Номеру полки\n" << "2. Кол-ву страниц\n";
	std::cin >> choice;

	switch (choice) {
	case 1:
		std::cout << "\n" << "=======Found=======" << "\n";
		findCount = findShelfnumber(books, Size, find1);
		std::cout << "Total " << findCount << " elements!" << "\n";
	break;
	case 2:
		std::cout << "\n" << "=======Found=======" << "\n";
		findCount = findNumberofpages(books, Size, find2);
		std::cout << "Total " << findCount << " elements!" << "\n";
	break;
	default:
		std::cout << "\n" << "=======Error=======" << "\n";
	break;
	}
	return 0;
}