#include <iostream>
using namespace std;

class Vehicle
{
public:
    void virtual display()
    {
        cout << "This is a vehicle." << endl;
    }
};
class Car : public Vehicle
{
public:
    void display() override
    {
        cout << "This is a Car." << endl;
    }
};
class Bike : public Vehicle
{
public:
    void display() override
    {
        cout << "This is a Bike." << endl;
    }
};

int main()
{
    Vehicle *v1 = new Car();
    Vehicle *v2 = new Bike();

    v1->display();
    v2->display();

    delete v1;
    delete v2;

    return 0;
}
