#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;


int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "Rus");

    // Создание переменных

    int const a = 10;
    int mass[a], mass1[a], sumMass[a];
    int min = 1, max = 100;

    // Заполнение массива 

    for (int i = 0; i < a; i++)
    {
        mass[i] = min + rand() % (max - min);
        mass1[i] = min + rand() % (max - min);
        sumMass[i] = mass[i] + mass1[i];
        cout << mass[i] << " + " << mass1[i] << " = " << sumMass[i] << endl;
    }

    cout << "\n\n";


    return 0;
}
