#include <iostream>
using namespace std;

struct data
{
    string name;
    int rollNo;
    float marks;
};

int main()
{
    data student;
    cout << "Enter Information: " << endl;
    cout << "Enter name: ";
    getline(cin, student.name);
    cout << "Enter roll number: ";
    cin >> student.rollNo;
    cout << "Enter marks: ";
    cin >> student.marks;

    cout << endl;
    cout << endl;

    cout << "Displaying Information: " << endl;
    cout << "Name: " << student.name << endl;
    cout << "Roll number: " << student.rollNo << endl;
    cout << "Marks: " << student.marks << endl;
    return 0;
}