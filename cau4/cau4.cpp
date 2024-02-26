#include <iostream>
using namespace std;
int main() {
	int a, b;
	float thuong;
	cout << "chuong trinh tinh thuong\n";
	cout << "nhap a:"; cin >> a;
	cout << "nhap b:"; cin >> b;
	if (b != 0) {
		thuong = (float)a / b;
		cout << a << "/" << b << " =" << thuong << endl;
	}
	else {
		cout << "Khong the chia " << a << "cho 0\n";
	}
	return 0;
}