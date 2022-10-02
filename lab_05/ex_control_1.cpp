#include <iostream>
#include <algorithm>
using namespace std;

int sum(int n, int mas[]) {
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += mas[i];
	}
	return s;
}
double average(int n, int mas[]) {
	return sum(n, mas) / n;
}

double sum_negative(int n, int mas[]) {
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] < 0) {
			s += mas[i];
		}
	}
	return s;
}
double sum_positive(int n, int mas[]) {
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] > 0) {
			s += mas[i];
		}
	}
	return s;
}
double sum_odd_idx(int n, int mas[]) {
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 != 0) {
			s += mas[i];
		}
	}
	return s;
}
double sum_even_idx(int n, int mas[]) {
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0) {
			s += mas[i];
		}
	}
	return s;
}

void print_sorted_array(int n, int mas[]) {
	int min = 0;
	int buf = 0;

	for (int i = 0; i < n; i++)
	{
		min = i;
		for (int j = i + 1; j < n; j++)
			min = (mas[j] < mas[min]) ? j : min;

		if (i != min)
		{
			buf = mas[i];
			mas[i] = mas[min];
			mas[min] = buf;
		}
	}

	cout << '[';
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << "";
		if (mas[i] != mas[n - 1]) {
			cout << ", ";
		}
	}
	cout << ']';
}

int main()
{
	const int n = 10;
	int mas[n];

	for (int i = 0; i < n; i++)
	{
		cout << "mas[" << i << "]=";
		cin >> mas[i];
	}

	cout << "Sum of array is " << sum(n, mas) << endl;
	cout << "Average value of array is " << average(n, mas) << endl;
	cout << "Sum of positive elements of array is " << sum_positive(n, mas) << endl;
	cout << "Sum of negative elements of array is " << sum_negative(n, mas) << endl;
	cout << "Sum of odd indexed elements of array is " << sum_odd_idx(n, mas) << endl;
	cout << "Sum of even indexed elements of array is " << sum_even_idx(n, mas) << endl;
	cout << "The min element of array is " << *min_element(begin(mas), end(mas)) << endl;
	cout << "The max element of array is " << *max_element(begin(mas), end(mas)) << endl;
	cout << "The sorted array: " << endl;
	print_sorted_array(n, mas);
}
