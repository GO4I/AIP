#include <iostream>
#include <ctime>
#include <fstream>
int main()
{
    std::fstream f;
    f.open("Zadanie10.txt", std::ios::out);
    for (int i = 0; i <= 185 / 15; i++)
        for (int j = 0; j <= 185 / 17; j++)
            for (int k = 0; k <= 185 / 21; k++)
                if (15 * i + 17 * j + 21 * k == 185) {
                f << "15*" << i << " + 17*" << j << " + 21*" << k << "=185\n";
                std::cout << "15*" << i << " + 17*" << j << " + 21*" << k << "=185\n";
                }        
    f.close();
    std::getchar();
    std::getchar();
    return 0;
}
