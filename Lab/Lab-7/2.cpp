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
    Number operator+(const Number &other) const
    {
        return Number(num + other.num);
    }
    Number operator-(const Number &other) const
    {
        return Number(num - other.num);
    }
};

int main()
{
    Number b(12);
    Number c(18);
    Number e(23);

    Number res = b + c - e;
    cout << res.display() << endl;

    return 0;
}