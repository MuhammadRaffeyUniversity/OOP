#include <iostream>
using namespace std;

class Vehicle
{

private:
    string make;
    string model;
    int year;

public:
    Vehicle()
    {
        make = "Unknown";
        model = "Unknown";
        year = 0;
    }
    Vehicle(string m, string mo, int y)
    {
        make = m;
        model = mo;
        year = y;

        cout << "Vehicle Make: " << make << endl;
        cout << "Vehicle Model: " << model << endl;
        cout << "Vehicle Year: " << year << endl;
    }

    ~Vehicle()
    {
        cout << "Object Destroyed Successfully!" << endl;
    }
};

int main()
{
    Vehicle obj1;
    obj1.~Vehicle();
    string make, model;
    int year;
    cout << "Enter Vehicle Make: ";
    cin >> make;
    cout << "Enter Vehicle Model: ";
    cin >> model;
    cout << "Enter Vehicle Year: ";
    cin >> year;
    Vehicle obj2(make, model, year);
    cout << "Enter Vehicle Make: ";
    cin >> make;
    cout << "Enter Vehicle Model: ";
    cin >> model;
    cout << "Enter Vehicle Year: ";
    cin >> year;
    Vehicle obj3(make, model, year);
    obj2.~Vehicle();
    obj3.~Vehicle();
}