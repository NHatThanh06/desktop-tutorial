#include <iostream>
#include <string>

using namespace std;


int factorial(int n) {
	int fact{ 1 };

	for (int i{ 1 }; i <= n; ++i) {
		fact *= i;
	}
	return fact;
}
int main()

{

	int numbers[50]{};
	cout << "Enter number of array: ";
	int number;
	cin >> number;
	cin.ignore(1000, '\n');

	for (int i{ 0 }; i < number; ++i) {
		cout << "Enter array[" << i << "]: ";
		cin >> numbers[i];

	}

	int sum{ 0 };
	for (int i{ 1 }; i < number; ++i) {
		sum = sum + factorial(numbers[i]);
	}

	cout << "summary: " << sum;




}
