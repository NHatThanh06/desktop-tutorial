#include <iostream>
#include <string>

using namespace std;
int factorial (int number)
int main()
{
	std::cout << "Enter your number of integer: ";
	short number; // so luong so nguyen to
	cin >> number;

	cin.ignore(1000, '\n');
	int m;
	int n;
	int p;
	cout << "nhap vao m : ";
	cin >> m;
	cout << "nhap vao n: ";
	cin >> n;
	cout << "nhap vao p: ";
	cin >> p;

	int myNum[3] = { m, n, p };


	int a = 1;
	int b = 1;
	int c = 1;
	for (int i = 1; i <= m; ++i)
		a *= i;
	for (int i = 1; i <= n; ++i)
		b *= i;
	for (int i = 1; i <= p; ++i)
		c *= i;
	cout << "tong cac giai thua bang = " << a + b + c << '\n';
}