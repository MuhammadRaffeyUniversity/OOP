#include <iostream>
#include <array>
using namespace std;
// out_of_range

int main()
{
    try
    {
        int arr[5] = {1, 2, 3, 4, 5};
        int i;
        cout << "Enter an index  ";
        cin >> i;

        if (i < 0 || i >= 5)
        {
            throw out_of_range("Index out of range");
        }
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
    catch (out_of_range e)
    {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}