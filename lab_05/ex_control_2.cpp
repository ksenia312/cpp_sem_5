#include <iostream>
#include <algorithm>

using namespace std;
int* max_vect(int kc, int a[], int b[]) {
	int* res = new int[kc];
	for (int i = 0; i < kc; i++) {
		res[i] = a[i] > b[i] ? a[i] : b[i];
	}
	return res;
}
int main()
{
	int a[] = { 1,2,3,4,5,6,7,2 };
	int b[] = { 7,6,5,4,3,2,1,3 };
	int kc = sizeof(a) / sizeof(a[0]);
	int* c;
	c = max_vect(kc, a, b);
	for (int i = 0;i < kc; i++)
		cout << c[i] << " ";
	// 7 6 5 4 5 6 7 3
	cout << endl;
	delete[]c;

}
