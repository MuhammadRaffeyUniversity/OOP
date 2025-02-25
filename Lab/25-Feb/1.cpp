#include <iostream>
using namespace std;

int numSeries(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    cout << n << " ";
    return numSeries(n - 1);
}

int main()
{
    int n;
    cout << "Enter a positive Number: ";
    cin >> n;
    numSeries(n);
    cout << endl;
    return 0;
}