// BT-tinh-so-nguyen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
	int x;
	int y;
	cout << "Enter two number";
	cin >> x;
	cin >> y;
	int a = 1;
	int b = 1;
	for (int i = 1; i <= x; ++i)
		a *= i;
	for (int i = 1; i <= y; ++i)
		b *= i;
	cout << "x! + y! = " << a + b << '\n';
}


// in ra n so nguyen tinh tong so nguyen
// 6. nhap vao 2 so nguyen m n. tinh va in ra (m! + n!)
// 7. nhap array gom n so nguyen 
// tinh ra tong cac giai thua.
// function: factorial(n) -> n!
// array, for 