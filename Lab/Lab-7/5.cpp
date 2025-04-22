#include <iostream>
using namespace std;

class Boolean
{
private:
    bool value;

public:
    Boolean(bool v) : value(v) {}
    bool display() const
    {
        return value;
    }
    Boolean operator!() const
    {
        return Boolean(!value);
    }
};
int main()
{
    Boolean b1(true);
    cout << "Orignal Value: " << b1.display() << endl;
    b1 = !b1;
    cout << "Inverted Value: " << b1.display() << endl;

    return 0;
}