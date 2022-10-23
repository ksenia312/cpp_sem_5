#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

// arrays to a file
int main()
{
	const int n = 10;
	int mas[n];

	for (int i = 0; i < n; i++)
	{
		cout << "mas[" << i << "]=";
		cin >> mas[i];
	}
	int sorted_mas[n];
	copy(begin(mas), end(mas), begin(sorted_mas));

	int min = 0;
	int buf = 0;
	for (int i = 0; i < n; i++)
	{
		min = i;
		for (int j = i + 1; j < n; j++)
			min = (sorted_mas[j] < sorted_mas[min]) ? j : min;

		if (i != min)
		{
			buf = sorted_mas[i];
			sorted_mas[i] = sorted_mas[min];
			sorted_mas[min] = buf;
		}
	}

	ofstream out;
	out.open("C:/Users/Ksenia/Documents/5 sem/cpp/lab_06/ex_control_2/arrays.txt");

	if (out.is_open())
	{
		out << "Init array: ";
		for (int i = 0; i < n; i++)
		{
			out << mas[i];
			if (i != n - 1) out << ", ";
			else out << "\n";
		}
		out << "Sorted array: ";
		for (int i = 0; i < n; i++)
		{
			out << sorted_mas[i];
			if (i != n - 1) out << ", ";
			else out << "\n";
		}
	}
	cout << "Saved to C:/Users/Ksenia/Documents/5 sem/cpp/lab_06/ex_control_2/arrays.txt" << endl;

}