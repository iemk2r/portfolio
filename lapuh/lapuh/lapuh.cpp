#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	/* pn-pt=budnij sb i nd= vihidnij
	cout << "Введіть день: ";
	string a;
	cin >> a;
	if (a == "пн" || a == "вт" || a == "ср" || a == "чт" || a == "пт") {
		cout << "Будній день";
	}
	else if (a == "сб" || a == "нд") {
		cout << "Вихідний";
	}
	else cout << "це що таке?";*//*коричтовачу не може бути більше 120 і менше 0 і вивисти скіки років

	cout << "Введіть рік народження: ";
	int a;
	cin >> a;
	if (a <= 2026 && a >= 1906) {
		cout << 2026 - a;
	}
	else {
		cout << "zahist";
	}*/

	/*cout << "Введіть ФІ: ";/*Богдан Оксантюк
	string a;
	getline(cin, a);
	a[0] = toupper(a[0]);
	for (int i = 0; i <= a.length(); i++) {
		a[i] = toupper(a[i]);
	}
	cout << a; */
	/*int a;
	cout << "Введіть число: ";
	cin >> a;
	for (int i = a; 0 <= i; i--) {
		cout << i << "\n";
	}*/
	// bohdan = nadhob
	/*
	6=0
	5=1
	4=2
	3=3
	2=4
	1=5
	0=6
	*/
cout << "Введіть імя: ";
string a;
getline(cin, a);
for (int i = a.length() -1; i >= 0; i--) 
	cout << a[i];
}
