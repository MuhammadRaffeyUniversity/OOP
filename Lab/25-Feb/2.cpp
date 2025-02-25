#include <iostream>
using namespace std;

int findGCD(int a, int b)
{
    // a=15 b=10
    if (a == 0)
        return b;
    return findGCD(b % a, a); // findGCD(10%15, 15) => findGCD(10, 10)
                              // findGCD(10%10, 10) => findGCD(0, 10)
                              // findGCD(0, 10) => 10
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int g = findGCD(a, b);
    cout << "The Greatest Common Divisor is: " << g << endl;
    return 0;
}