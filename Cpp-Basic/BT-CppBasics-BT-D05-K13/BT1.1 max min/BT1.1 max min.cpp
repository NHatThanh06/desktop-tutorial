#include <cmath>
#include <iostream>

using namespace std;

int main() {
	int x;
	int y;
	cout << " Enter two number";
	cin >> x;
	cin >> y;

	if (x > y) {
		cout << x << " max" << '\n';
		cout << y << " min" << '\n';
	}
	else if (x < y) {
		cout << y << " max" << '\n';
		cout << x << " min" << '\n';
	}
	else {
		cout << " Error" << '\n';
	}
	return 0;
}