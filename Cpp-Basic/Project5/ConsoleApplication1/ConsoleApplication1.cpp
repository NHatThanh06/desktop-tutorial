// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <string>

using namespace std;


int main()
{
    std::cout << "Hello BKC-D05-K13\n";
    std::cout << "Hello World!\n";
    std::string name;
    int age;
    std::string address;
    int point;
    std::string favorite;
    std::string rank;

    cout << "Enter your name: ";
    //cin >> name;
    std::getline(std::cin, name);

    cout << "Enter your age: ";
    cin >> age;

    //ignore newline
    std::cin.ignore(100000, '\n');

    cout << "Enter your address: ";
    cin >> address; 
    std::getline(std::cin, address);

    cout << "Enter your point toan: ";
    cin >> point;
   
    cout << "Enter your point li: ";
    cin >> point;

    cout << "Enter your point hoa: ";
    cin >> point;

    cout << "Enter your favorite: ";
    cin >> favorite;
    std::getline(std::cin, favorite);

    cout << "Enter your point : ";
    cin >> point;

    cout << "Enter your rank : ";
    cin >> rank;
    std::getline(std::cin, rank);



    cout << "Hello my name is " << name << '\n';
    cout << "I am " << age << "years old" << '\n';
    cout << "I am from " << address << '\n';
    cout << "point toan " << point << '\n';
    cout << "point li " << point << '\n';
    cout << "point hoa " << point << '\n';
    cout << "My favorite" << favorite << '\n';
    cout << "tb" << point << '\n';
    cout << "rank" << rank << '\n';

} 


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
