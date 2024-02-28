#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;


int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "Rus");
    // Создание переменных
    int const a = 10, b = 5;
    int min = 10, max = 20;
    int mass[a], mass1[b], mass2[b];
    // Заполнение массива а
    for (int i = 0; i < a; i++)
    {
        mass[i] = min + rand() % (max - min);
        cout << mass[i] << " ";
    }
    cout << "\n\n";
    // Распределение по массивам по 5
    for (int i = 0; i < b; i++)
    {
        mass1[i] = mass[i];
        mass2[i] = mass[i + 5];
    }
    // Вывод в консоль
    for (int i = 0; i < b; i++)
    {
        cout << "\t" << mass1[i] << " " << mass2[i] << "\n";
    }


    return 0;
}
