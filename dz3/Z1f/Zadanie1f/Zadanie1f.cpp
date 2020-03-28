#include <iostream> 
#include <time.h>
int main()
{
    int arr[10];
    int i;
    srand(time(0));
    for (i = 0; i < 10; i++) {
        arr[i] = 0 + rand() % 20;
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    std::getchar();
    std::getchar();
    return 0;
}