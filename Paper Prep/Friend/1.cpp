#include <iostream>
using namespace std;

class Box
{
private:
    int width;

public:
    Box() : width(0) {}
    void setWidth(int w) { width = w; }
    friend void printWidth(Box b);
};

void printWidth(Box b)
{
    cout << "Width of box: " << b.width << endl;
}

int main()
{
    Box b;
    printWidth(b);
    b.setWidth(10);
    printWidth(b);
    return 0;
}