#include <iostream>
#include<cmath>

using namespace std;

int main()
{

    cout << "Enter the perimeter of an equilateral triangle: ";
    double P;
    cin >> P; // ���� ���������

    double a = P / 3; // �������
    double S = sqrt(P / 2 * pow((P / 2 - a), 3)); // �������


    cout.precision(3); // ���������� � ������ �� 2 ������ ����� �������

    cout << "Side\tArea\n";
    cout << a << '\t' << S << endl;
    return 0;
}