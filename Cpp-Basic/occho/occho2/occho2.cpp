#include <iostream>

using namespace std;

int main() {   
    int bo;
    int con;
    int c;
    cout << "Nhap tuoi bo: ";
    cin >> bo;
    cout << "Nhap tuoi con = ";
    cin >> con;
    cout << "nhap so 0: ";
    cin >> c;
        
    while (bo/con>=2) {
        cout << "tuoi bo gap tuoi con" << bo / con << '/n';
        bo = bo + 1;
        con = con + 1;
        c = c + 1;
        cout << "sau" << c << "nam tuoi bo gap 2 lan tuoi con" << '/n';
}
}
