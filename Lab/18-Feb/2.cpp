#include <iostream>
using namespace std;

unsigned long long factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int a;
    cout << "Enter a Number: ";
    cin >> a;
    cout << "Factorial of " << a << " is: " << factorial(a) << endl;
    return 0;
}