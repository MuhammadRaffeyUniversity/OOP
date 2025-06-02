#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;

public:
    Student(int r, string n) : rollNo(r), name(n) {}

    void display() const
    {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }
};

int main()
{
    Student s1(101, "Alice");
    Student s2(102, "Bob");
    // s2.rollNo;
    s2.display();
    return 0;
}