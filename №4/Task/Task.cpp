#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;


int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");
	string str;
	// Создание переменных


	const int month = 12;
	int month_days, days = 0;
	double profitmonth[month], procent = 2;
	const int curs_USD_EU = 12;
	int Sumdeposit_EU = 0;
	double profit = 0, Depozit;
	double month_Curs[curs_USD_EU];
	int yars = 365;
	int Days_in_month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	cout << "Введите сумму на депозите в Евро :\n";
	cin >> Sumdeposit_EU;
	cout << endl;
	//cout << "Введите курс $ к Евро за каждый месяц \n";
	cout << "Курс $ к Евро за каждый месяц \n";
	for (int i = 0; i < curs_USD_EU; i++)
	{
		//cin >> month_Curs[i];
		month_Curs[i] = (rand() % 11 + 10) / 10.0;
	}
	for (int i = 0; i < curs_USD_EU; i++)
	{
		cout << i + 1 << " " << month_Curs[i] << "\n";
	}
	/*cout << "Введите процент за каждый месяц \n";
	for (int i = 0; i < month; i++)
	{
		 cin>>profitmonth[i];
		procent +=(profitmonth[i]/12);
	}*/
	cout << "Годовая процентная ставка составляет : " << procent << " %\n";
	cout << endl;

	cout << "Ведите номер месяца для вывода начисленной суммы на депозит : \n";
	cin >> month_days;
	for (int i = 0; i <= month_days - 1; i++)
	{
		days += Days_in_month[i];
	}
	//cout << "Искомое количество дней: "<<days<<endl;
	profit = (Sumdeposit_EU * procent * days / yars) / 100;
	cout << "Сумма начисленых % за выбраный вами период : " << profit << endl;
	Depozit = (Sumdeposit_EU + profit) / month_Curs[month_days - 1];
	cout << "Сумма начисленых финансов на депозит в $ : " << Depozit << endl;

	if (Depozit > 500)
	{
		Depozit = Depozit / 2;
		cout << "Допустимая сумма для снятия : " << Depozit << "\n";
	}
	else
	{
		cout << "Допустимая сумма для снятия в этом месяце ограничена и не должна привышать от 50 $ до " << Depozit << " $ \n";
	}



	return 0;
}
