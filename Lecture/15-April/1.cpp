#include <iostream>
using namespace std;

class First
{

private:
    void print()
    {
        cout << "I am FIrst Class\n";
    }
    friend class Second;
};

class Second
{

public:
    void print()
    {
        cout << "I am Second Class\n";
    }
};

int main()
{
    First f;
    Second s;

    // f.print();
    s.print();

    return 0;
}