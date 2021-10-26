#include <iostream>
using namespace std;

int main() {
    int x;
    cout << " Enter a number which is grater than 9" << '\n';
    cin >> x;
    if (x < 10) {
        cout << "error";
    }
    if (x > 99) {
        cout << "error";
    }
    if (x >= 10) {
        switch (x / 10) {
        case 1:
            cout << "muoi";
            break;
        case 2:
            cout << "hai muoi";
            break;
        case 3:
            cout << "ba muoi";
            break;
        case 4:
            cout << "bon muoi";
            break;
        case 5:
            cout << "nam muoi";
            break;
        case 6:
            cout << "sau muoi";
            break;
        case 7:
            cout << "bay muoi";
            break;
        case 8:
            cout << "tam muoi";
            break;
        case 9:
            cout << "chin muoi";
            break;

        }
        switch (x % 10) {
        case 1: cout << " mot"; break;
        case 2: cout << " hai"; break;
        case 3: cout << " ba"; break;
        case 4: cout << " bon"; break;
        case 5: cout << " nam"; break;
        case 6: cout << " sau"; break;
        case 7: cout << " bay"; break;
        case 8: cout << " tam"; break;
        case 9: cout << " chin"; break;
            return 0;
        }
        }