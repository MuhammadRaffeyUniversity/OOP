#include <iostream>
using namespace std;

class Box
{
private:
    int width;

public:
    void setWidth(int w) { width = w; }
    Box() : width(0) {}
    friend void printWidth(Box b);
};

void printWidth(Box b)
{
    b.setWidth(68);
    cout << "Width of box: " << b.width << endl;
}

int main()
{
    Box b;
    b.setWidth(10);
    printWidth(b);
    return 0;
}