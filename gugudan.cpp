#include <iostream>
using namespace std;

int main() {
	//please change 9 to 10
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++)
			cout << i << " * " << j << " = " << i * j << "  ";
		cout << endl;
	}

	return 0;
}