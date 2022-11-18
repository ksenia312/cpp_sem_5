#include <iostream>
#include <string>

using namespace std;

template <class T>
T average(T array[], int size)
{
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += array[i];

	}
	return sum / size;
}


template <class T>
void print_average(string type, T array[], int size) {
	cout << "Arithmetic mean for " << type << " array - " << average<T>(array, size) << endl;
}

int main() {
	double double_array[] = { 0.5, 1.0, 1.5, 2.0, 2.5, 3.0 };
	print_average("double", double_array, 6);

	int int_array[] = { 3, 3, 3, 105, 3, 2 };
	print_average("int", int_array, 6);

	long long_array[] = { 573743546, 475067245, 253957947, 733947945, 153577948 };
	print_average("long", long_array, 5);

	char char_array[] = { 'A', 'B', 'C', 'D', 'E' };
	print_average("char", char_array, 5);
}

//Arithmetic mean for double array - 1.75
//Arithmetic mean for int array - 19
//Arithmetic mean for long array - 438058926
//Arithmetic mean for char array - C