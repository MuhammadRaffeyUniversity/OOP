#include <iostream>
using namespace std;

class Circle
{
    double rad;

public:
    Circle(double r)
    {
        rad = r;
    }

    double getArea()
    {
        return rad * rad * 3.142;
    }
};

int main()
{
    Circle c1(5.0);
    cout << "Area = " << c1.getArea();
    return 0;
}
