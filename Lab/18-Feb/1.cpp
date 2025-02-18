#include <iostream>
using namespace std;

float diff(float a, float b)
{
    return a - b;
}
int main()
{
    int a, b;
    cout << "Enter a Number: ";
    cin >> a;
    cout << "Enter a Number: ";
    cin >> b;
    cout << "The Difference of " << a << " and " << b << " is: " << diff(a, b) << endl;
    return 0;
}