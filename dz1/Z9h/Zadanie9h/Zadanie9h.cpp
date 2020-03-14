#include <iostream>
#include <locale>
int main()
{
    setlocale(LC_ALL,"Russian");
    __int64 chislo;
    int select, select1;
    __int64 otvet;
    std::cout << " 1.Гигакалорий в минуту \n"
        << " 2.Калорий в час \n"
        << " 3.Джоуль в час \n"
        << " 4.Эрг в секунду \n"
        << "Выберите величу из которой переводите : ";
    std::cin >> select;
    std::cout << " 1.Гигакалорий в минуту \n"
        << " 2.Калорий в час \n"
        << " 3.Джоуль в час \n"
        << " 4.Эрг в секунду \n"
        << "Выберите величу в которую переводите : ";
    std::cin >> select1;

    if (select == select1) {
        std::cout << "Так нельзя? Попробуйте еще раз..." << "\n";
        
     }
    else {
    std::cout << " Введите число : ";
    std::cin >> chislo;
         //гигакалории в
         if (select == 1 && select1 == 2) {
             otvet = chislo * 60000000000;
        } 
         if (select == 1 && select1 == 3) {
             otvet = chislo * 251208000000;
         }
         if (select == 1 && select1 == 4) {
             otvet = chislo * 697800000000000;
         }
         //калории в
         if (select == 2 && select1 == 1) {
             otvet = chislo * 0.00000000001667;
         }
         if (select == 2 && select1 == 3) {
             otvet = chislo * 4.187;
         }
         if (select == 2 && select1 == 4) {
             otvet = chislo * 11630;
         }
         //джоули в
         if (select == 3 && select1 == 1) {
             otvet = chislo * 0.000000000003981;
         }
         if (select == 3 && select1 == 2) {
             otvet = chislo * 0.2388;
         }
         if (select == 3 && select1 == 4) {
             otvet = chislo * 2778;
         }
         //эрг в
         if (select == 4 && select1 == 1) {
             otvet = chislo * 0.000000000000001433;
         }
         if (select == 4 && select1 == 2) {
             otvet = chislo * 0.00008598;
         }
         if (select == 4 && select1 == 3) {
             otvet = chislo * 0.00036;
         }   
         std::cout << "Ответ : " << otvet << "\n";
    }
    system("PAUSE");
    return 0;
}

