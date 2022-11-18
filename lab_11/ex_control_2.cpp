#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm> 

using namespace std;
// Point operator overloading

class Point
{
public:
	Point(double x, double y) : x(x), y(y) {}

	double radius()
	{
		return sqrt(x * x + y * y);
	}

	bool operator<(Point point)
	{
		return this->radius() < point.radius();
	}

	bool operator>(Point point)
	{
		return this->radius() < point.radius();

	}

	friend ostream& operator<<(ostream& out, const Point& point)
	{
		out << "(" << point.x << ", " << point.y << ")";
		return out;
	}

private:
	double x, y;
};

int main()
{
	vector<Point> vector;
	vector.push_back(Point(1, 2));
	vector.push_back(Point(10, 12));
	vector.push_back(Point(21, 7));
	vector.push_back(Point(4, 8));

	sort(vector.begin(), vector.end());

	for (auto& point : vector)
		cout << point << '\n';
}