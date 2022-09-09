#include <iostream>
#include<cmath>

using namespace std;

int main()
{

    cout << "Enter the perimeter of an equilateral triangle: ";
    double P;
    cin >> P; // perimiter

    double a = P / 3; // side
    double S = sqrt(P / 2 * pow((P / 2 - a), 3)); // area


    cout.precision(3); // rounding to 2 decimal places in the output

    cout << "Side\tArea\n";
    cout << a << '\t' << S << endl;
    return 0;
}