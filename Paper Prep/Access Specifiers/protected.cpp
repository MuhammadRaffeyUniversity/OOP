#include <iostream>
using namespace std;

class Person
{
protected:
    string name;

public:
    void display() const
    {
        cout << "Name: " << name << endl;
    }
};
class Student : public Person
{
private:
    int rollNo;

public:
    Student(int r, string n) : rollNo(r)
    {
        name = n; // Accessing protected member from base class
    }

    void display() const
    {
        cout << "Roll No: " << rollNo << ", ";
        Person::display();
    }
};

int main()
{
    Student s1(101, "Alice");
    Student s2(102, "Bob");
    s1.display();
    s2.display();
    // s1.name; // Error: 'name' is protected in base class 'Person'
    // s2.name; // Error: 'name' is protected in base class 'Person'

    return 0;
}