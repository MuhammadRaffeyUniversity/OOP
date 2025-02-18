#include <iostream>
using namespace std;

void output()
{
    cout << "******\n";
}
void output(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << n;
    }
    cout << endl;
}
void output(int n, char c)
{
    for (int i = 0; i < n; i++)
    {
        cout << c;
    }
    cout << endl;
}

int main()
{
    output();
    cout << "--------------------------------\n";
    output(5);
    cout << "--------------------------------\n";
    output(5, 'r');
    cout << "--------------------------------\n";
    return 0;
}