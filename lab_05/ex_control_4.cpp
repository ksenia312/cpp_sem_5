#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	if (argc >= 4) {
		if (strncmp(argv[1], "-a", 2) == 0) {
			cout << "Sum is " << atoi(argv[2]) + atoi(argv[3]) << endl;
		}
		else if (strncmp(argv[1], "-m", 2) == 0) {
			cout << "Multiplication is " << atoi(argv[2]) * atoi(argv[3]) << endl;
		}
		else {
			cout << "Invalid flag" << endl;
		}
	}
	else {
		cout << "Invalid number of arguments" << endl;
	}
}
