#include <iostream>
#include <windows.h>
#include <math.h>
#include<string.h>

using namespace std;


int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");
	string str;
	// Создание переменных

	int const a = 7;
	int mass[a], sred = 0, summ = 0;
	int counter = 0;
	bool marker = false;

	// Заполнение массива 
	cout << "Расчет потраченых средств в неделю";
	cout << "Введите сумму потраченных Вами долларов в день по очерёдности: \n";

	for (int i = 0; i < a; i++)
	{
		cin >> mass[i];
	}
	cout << "\n\n";

	//Средняя потраченная сумма
	for (int i = 0; i < a; i++)
	{
		sred = sred + mass[i];
	}
	cout << "Сумма потраченного за неделю: " << sred;
	cout << "\n\n";
	sred = sred / 7;
	cout << "Средняя потраченная сумма " << sred;
	cout << "\n\n";

	//Количество дней и сам день если больше 100 дллларов
	for (int i = 0; i < a; i++)
	{
		char  numdays = 0;
		if (mass[i] > 100)
		{
			counter++;
			switch (i)
			{
			case 0:
			{

				str = "Понедельник ";
				break;
			}
			case 1:
			{
				str = "Вторник ";
				break;
			}
			case 2:
			{
				str = "Среда ";
				break;
			}
			case 3:
			{
				str = "Четверг ";
				break;
			}
			case 4:
			{
				str = "П'ятница ";
				break;
			}
			case 5:
			{
				str = "Суббота ";
				break;
			}
			case 6:
			{
				str = "Воскресение ";
				break;
			}

			}
			cout << "Дни недели в которых расход превышал 100$ " << str << "\n";;
		}

	}
	cout << "\nКол-во дней,в которых расход превышал 100$: " << counter << endl;



	return 0;
}
