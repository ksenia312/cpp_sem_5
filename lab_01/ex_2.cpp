#include <iostream>
using namespace std;

//int main()
//{
//	system("chcp 1251");
//	double a, b;
//	cout << "������� a � b:\n";
//	cin >> a; // ���� � ���������� �������� a
//	cin >> b; // ���� � ���������� �������� b
//	double x = a / b;  //���������� �������� x
//	//int x = a / b;
//	cout.precision(3);
//	cout << sizeof(a / b) << ends << sizeof(x) << endl;
//	cout << "\nx = " << x << endl; //����� ���������� �� �����
//	return 0;
//}

int main()
{
	system("chcp 1251");
	string name;
	cout << "������� ���� ���\n";
	double a, b;
	cout << "������� a � b:\n";
	cin >> a;
	cin >> name;
	cin >> b;
	double x = a / b;
	cout << "\nx = " << x << endl;
	cout << "������, " << name << "!\n";
	return 0;
}
