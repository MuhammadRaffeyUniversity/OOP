#include <iostream>
#include <string>
using namespace std;

int main()
{
    try
    {
        string name, password;
        cout << "Enter your name: ";
        getline(cin, name);
        cout << "Enter your password: ";
        getline(cin, password);
        if (password.length() < 6)
        {
            throw string("password must contain at least 6 characters");
        }

        bool has_digit = false;
        for (char c : password)
        {
            if (isdigit(c))
            {
                has_digit = true;
                break;
            }
        }
        if (!has_digit)
        {
            throw string("password must contain at least one digit");
        }
    }
    catch (string a)
    {
        cout << a << endl;
    }

    return 0;
}