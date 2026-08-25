#include <Windows.h>
#include <iostream>
using namespace std;
double add(double a, double b) {
	return a + b;
}
double minuss(double a, double b) {
	return a - b;
}
double multiplication(double a, double b) {
	return a * b;
}
double division(double a, double b) {
	if (b == 0)
	{
		cout << "Не можна поділити на 0";
		return 0;
	}

	return a / b;
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double a, b;
	int viber;
	do
	{
		cout << "\n===== КАЛЬКУЛЯТОР =====\n";
		cout << "1.Додавання \n";
		cout << "2.Віднімання \n";
		cout << "3.Множення \n";
		cout << "4.Ділення \n";
		cout << "5.Завершення програми \n";
		cout << "Ваш вибір: ";
		cin >> viber;
		if (viber >= 1 && viber <= 4) {

			cout << "Введіть перше число: ";
			cin >> a;

			cout << "Введіть друге число: ";
			cin >> b;
		}
		switch (viber) {
		case 1: cout << "Результат:" << add(a, b) << endl; break;
		case 2: cout << "Результат:" << minuss(a, b) << endl; break;
		case 3: cout << "Результат:" << multiplication(a, b) << endl; break;
		case 4: cout << "Результат:" << division(a, b) << endl; break;
		case 5: cout << "Програму закінчено" << endl; break;
		default: cout << "\nВиберіть від 1 до 5" << endl;
		}
	} while (viber != 5);
	return 0;
}