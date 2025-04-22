#include <iostream>
using namespace std;

class Number
{
private:
    int num;

public:
    Number(int n) : num(n) {}
    int display() const
    {
        // cout << "Number: " << num << endl;
        return num;
    }
    bool operator==(const Number &other) const
    {
        return (num == other.num);
    }
};

int main()
{
    Number n1(10);
    Number n2(10);
    cout << "Number 1: " << n1.display() << endl;
    cout << "Number 2: " << n2.display() << endl;

    if (n1 == n2)
    {
        cout << "Numbers are equal." << endl;
    }
    else
    {
        cout << "Numbers are not equal." << endl;
    }

    cout << "Number 1 was: " << n1.display() << endl;
    cout << "Number 2 was: " << n2.display() << endl;
    return 0;
}