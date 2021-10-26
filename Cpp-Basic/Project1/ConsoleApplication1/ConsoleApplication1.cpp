

#include <iostream>

#include <string>
using namespace std;

int main()
{
    std::cout << "Hello BT-D05-K13\t";
    cout << "Hello BT-D05-K13\n";

    std::string name;
    int age;
    string address;

    cout << "Enter your name: ";
    //cin >> name;
    std::getline(std::cin, name);

    cout << "Enter your age: ";
    cin >> age;

    //ignore newline
    std::cin.ignore(1000, '\n');

    cout << "Enter your address: ";
    //cin >> address;
    std::getline(std::cin, address);

    cout << "Hello my name is " << name << '\n';
    cout << "I am " << age << '\n';
    cout << "Im from " << address << '\n';

}
