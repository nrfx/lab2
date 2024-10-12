#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int n;
	cout << "введите N: " << endl;
	cin >> n;
	if (n > 0) {
		for (float x = 1; x < n; x++) {
			for (float y = 1; y < n; y++) {
				for (float z = 1; z < n; z++) {
					if (pow(x, 2) + pow(y, 2) + pow(z, 2) == n)
						cout << "x = " << x << " y = " << y << " z = " << z << endl;
				}
			}
		}
	}
	else
		cout << "число n меньше нуля" << endl;
}