// BT-cong-so-nguyen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;

int main() {
    int k, x = 0;
    cout << "enter an integer: " << '\n';
    cin >> k;
    for (int i = 1; i <= k; i++)
    {
        x = x + i;
    }
    cout << x;
    return 0;
}
