#include <iostream>
using namespace std;
int sum(int a = 2, int b = 4, int c = 7)
{
    return a + b + c;
}

int main()
{
    int a = 10, b = 20, c = 30;
    cout << sum(a) << endl;
    cout << sum(a, b) << endl;
    cout << sum(a, b, c) << endl;
    return 0;
}