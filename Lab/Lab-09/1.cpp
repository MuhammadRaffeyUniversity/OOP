#include <iostream>
using namespace std;

int main()
{
    try
    {
        int a, b;
        cout << "Enter two integers: ";
        cin >> a >> b;
        if (b == 0)
        {
            throw string("Division by zero error");
        }
        cout << "Result: " << a / b << endl;
    }
    catch (string a)
    {
        cout << a << endl;
    }

    return 0;
}