#include <iostream>
using namespace std;

//int main()
//{
//	system("chcp 1251");
//	double a, b;
//	cout << "Введите a и b:\n";
//	cin >> a; // ввод с клавиатуры значения a
//	cin >> b; // ввод с клавиатуры значения b
//	double x = a / b; // вычисление значения x
//	//int x = a / b;
//
//	cout.precision(3);
//
//
//	cout << "\nx = " << x << endl; //вывод результата на экран
//	cout << sizeof(a / b) << ends << sizeof(x) << endl;
//	return 0;
//}

int main()
{
	system("chcp 1251");
	string name;
	cout << "Введите свое имя\n";
	double a, b;
	cout << "Введите a и b:\n";
	cin >> a;
	cin >> name;
	cin >> b;
	double x = a / b;
	cout << "\nx = " << x << endl;
	cout << "Привет, " << name << "!\n";
	return 0;
}
