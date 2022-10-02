#include <iostream>

using namespace std;

int search(int* arr, int el, int size) {
	int idx = -1;
	for (int i = 0; i < size; i++) {
		if (arr[i] == el) {
			idx = i;

			if (idx == 0) {
				break;
			}
			else {
				swap(arr[i], arr[i - 1]);
			}
		}
	}
	return idx;
}

int main() {
	const int n = 10;
	int arr[n]{};
	cout << "Enter the elements of array:" << endl;
	for (int i = 0;i < n;i++) {
		cout << "array[" << i << "] = ";
		cin >> arr[i];
	}
	int el;
	cout << "Enter the value for search: ";
	cin >> el;
	for (int i = 0; i < n; i++) {
		cout << "\nSearch " << i << endl;
		int res = search(arr, el, n);
		if (res == -1) {
			cout << "The array doesn't contain " << el << endl;
			break;
		}
		else {
			cout << "The index of " << el << " is " << res << endl;
			if (res == 0) {
				break;
			}
			else {
				cout << "\n\t...processing new search..." << endl;
			}
		}

	}

	return 0;
}

