#include <iostream>
using namespace std;

int fibonacci(int a, int b, int n)
{
    if (a > n)
    {
        return 0;
    }
    cout << a << "\t";
    return fibonacci(b, a + b, n);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    fibonacci(0, 1, n);
    return 0;
}
