#include <iostream>
#include <string>

using namespace std;

// Triangle with exceptions
class Triangle
{
public:
	class Exception
	{
	public:
		Exception() {}
		void print() const { cout << error; }
	private:
		string error = "The irregular sides of the triangle are introduced";

	};

	Triangle(int a, int b, int c)
	{
		if (a <= 0 || b <= 0 || c <= 0 || (a + b < c) || (a + c < b) || (b + c < a))
		{
			throw Exception();
		}
		else {
			Triangle::a = a;
			Triangle::b = b;
			Triangle::c = c;
		}
	}

private:
	int a, b, c;
};

int main()
{
	int a, b, c;
	cout << "Enter sides in 'a b c' format" << endl;
	cin >> a >> b >> c;

	try {
		Triangle triangle1 = Triangle(a, b, c);
	}
	catch (Triangle::Exception& error)
	{
		cout << "Exception (";
		error.print();
		cout << ")\n";
	}

}