#include <iostream>
#include <cmath>
using namespace std;

int tinhgiaithua(int x) {
	int giai_thua = 1;

	for (int i = 1; i <= x; ++i) {
		giai_thua *= i;
	}
	return giai_thua;
}

int main() {
	int result = 0;
	int soluong = 0;
	int x = 0;
	int mangsotunhien[900];

	cout << " Nhap vao so luong so tu nhien" << endl;
	cin >> soluong;

	for (int i = 0; i < soluong; i++) {
		cout << " Nhap so thu " << i + 1 << ":" << endl;
		cin >> x;//result = result + tinhgiaithua(x);
		mangsotunhien[i] = tinhgiaithua(x);
	}
	for (int i = 0; i < soluong; i++) {
		result = result + mangsotunhien[i];
	}

	cout << " Ket qua la:" << result << endl;

	return 0;
}
