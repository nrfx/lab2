#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	float n, x;
	int k;
	//	Точное значение f_a (x), используя библиотечные математические функции; 
	cout << "введите х (|x|<1): "; cin >> x;
	cout << "введите n: "; cin >> n;

	float u = x;
	float y = 0;
	k = 0;
	//цикл for
	for (k = 1; k <= n; k++) {
		y += u;
		u = (pow(x,2*k))/ (tgamma(2*k + 1));
	}
	cout << "y= " << y << endl;

	u = x;
	y = 0;
	k = 0;

	//цикл while 
	cout << "через цикл while" << endl;

	while (k < n) {
		k++;
		y += u;
		u = (pow(x, 2 * k)) / tgamma(2 * k + 1);
	}
	cout << "y= " << y << endl;

	//цикл do while

	u = x;
	y = 0;
	k = 0;

	cout << "через цикл do while" << endl;
	do {
		k++;
		y += u;
		u = (pow(x, 2 * k)) / tgamma(2 * k + 1);
	} while (k < n);
	cout << "y= " << y << endl;
}

	// Вычислить сумму с заданной погрешностью eps
	//float  eps;
	//cin >> "Введите eps= " >> eps >> endl;
//}
