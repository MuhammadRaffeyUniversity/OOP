#include <iostream>
using namespace std;

int main()
{
    try
    {
        int age;
        cout << "Enter your age: ";
        cin >> age;
        if (age < 18)
        {
            throw string("Age is less than 18, can not vote");
        }
        cout << "You are eligible to vote." << endl;
    }
    catch (string a)
    {
        cout << a << endl;
    }

    return 0;
}