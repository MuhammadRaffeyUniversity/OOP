#include <iostream>
using namespace std;

class First
{
    int a;
    friend class Second;

public:
    First() : a(0) {}
    void print()
    {
        cout << "The result is " << a << endl;
    }
};
class Second
{
public:
    void change(First &firstClassObj, int x)
    {
        firstClassObj.a = x;
        firstClassObj.print();
    }
};
int main()
{
    First obj1;
    Second obj2;
    obj1.print();
    obj2.change(obj1, 50);
    return 0;
}
