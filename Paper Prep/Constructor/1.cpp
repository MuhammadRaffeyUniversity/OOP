// Demonstration of constructor overloading in C++
#include <iostream>
using namespace std;

class Rectangle
{
    int width, height;

public:
    // Default constructor // No Argument Constructor
    Rectangle()
    {
        width = 0;
        height = 0;
    }
    // Parameterized constructor
    Rectangle(int w, int h) : width(w), height(h)
    {
        // width = w;
        // height = h;
    }
    // Copy constructor
    Rectangle(const Rectangle &rect)
    {
        width = rect.width;
        height = rect.height;
    }
    int area()
    {
        return width * height;
    }
    void display()
    {
        cout << "Width: " << width << ", Height: " << height << endl;
    }
};

int main()
{
    Rectangle r1;        // Calls default constructor
    Rectangle r2(20, 7); // Calls parameterized constructor
    Rectangle r3 = r2;   // Calls copy constructor

    cout << "Rectangle 1: ";
    r1.display();
    cout << "Area: " << r1.area() << endl;

    cout << "Rectangle 2: ";
    r2.display();
    cout << "Area: " << r2.area() << endl;

    cout << "Rectangle 3: ";
    r3.display();
    cout << "Area: " << r3.area() << endl;

    return 0;
}