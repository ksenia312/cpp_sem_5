#include <iostream>
#include<cmath>

using namespace std;

int main()
{

    cout << "Enter the perimeter of an equilateral triangle: ";
    double P;
    cin >> P; // ввод периметра

    double a = P / 3; // сторона
    double S = sqrt(P / 2 * pow((P / 2 - a), 3)); // площадь


    cout.precision(3); // округление в выводе до 2 знаков после запятой

    cout << "Side\tArea\n";
    cout << a << '\t' << S << endl;
    return 0;
}