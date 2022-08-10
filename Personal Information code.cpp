// Personal Information code.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main(){
    string name, surname, nationality, idnumber, gender, city;
    int age;

    cout << "Enter your name" << endl;
    cin >> name;
    cout << "Enter your surname" << endl;
    cin >> surname;
    cout << "Enter your age" << endl;
    cin >> age;
    cout << "Enter your nationality" << endl;
    cin >> nationality;
    cout << "Enter your idnumber" << endl;
    cin >> idnumber;
    cout << "Enter your gender" << endl;
    cin >> gender;
    cout << "Enter your city" << endl;
    cin >> city;

    cout << "Your names are:" << name << endl;
    cout << "Your surname is:" << surname << endl;
    cout << "Your age is: " << age << "years old" << endl;
    cout << "Your nationality is:" << nationality << endl;
    cout << "Your idnumber is:" << idnumber << endl;
    cout << "Your gender is:" << gender << endl;
    cout << "Your city is:" << city << endl;
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
