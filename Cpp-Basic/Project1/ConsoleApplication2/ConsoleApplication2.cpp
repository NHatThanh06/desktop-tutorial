
#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::cout << " Enter number of student: ";
    short number; //so luong sv
    cin >> number;

    cin.ignore(1000, '\n');

    string name[50];
    short age[50];
    string klass[50];

    double math[50], physical[50], chemistry[50], avg[50];

    for (int i = 0; i < number; ++i) {

        cout << "Enter name of student" << i + 1 << " : ";
        getline(cin, name[i]);

        cout << "Enter age: ";
        cin >> age[i];

        cin.ignore(1000, '\n');

        cout << "Enter class: ";
        getline(cin, klass[i]);

        //cout << name[i] << '\n';
        //cout << age[i] << '\n';
        //cout << klass[i] << '\n';

        cout << "Enter mask: ";
        cin >> math[i] >> physical[i] >> chemistry[i];

        avg[i] = (math[i] + physical[i] + chemistry[i]) / 3;

        cin.ignore(1000, '\n');
    }

    for (int i = 0; i < number; ++i) {
        cout << "student " << i + 1 << ": " << name[i] << '\n';
        cout << "math: " << math[i] << '\n';
        cout << "physical: " << physical[i] << '\n';
        cout << "chemistry: " << chemistry[i] << '\n';
        cout << "avg: " << avg[i] << '\n';
    }
}

/*
1. Input 2 intergers. Print to console max, min.
2. Giai PT bac 1:
    ax + b = 0
3. Viet phuong trinh nhap vao 1 so  co 2 chu so, sau do in ra cach doc bang tieng viet
    VD: 12 -> muoi hai
        56 -> nam sau
        97 -> chin bay
4* Bai tap nang cao
   một quán karaoke tinh tien cho khách hàng theo công thức sau: 
   - mỗi giờ trong 3 giờ đầu tính 30000đ/giờ 
   - mỗi giờ tiếp theo  có đơn giá giảm 30% so với giá 3 giờ đầu.
   - nếu thuê phòng từ 8h - 17h thì được giảm giá 10% (giờ hát từ 8h - 24h)
   Viết CT nhập vào giờ bắt đầu, giờ kết thúc  và in ra số tiền khách phải trả.
   */

