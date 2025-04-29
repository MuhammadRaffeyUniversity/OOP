#include <iostream>
using namespace std;
class Person
{
private:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}
    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main()
{
    Person *p = new Person("Raffey", 19);
    p->display();
    delete p;
    p->display();
    p = nullptr;
    return 0;
}