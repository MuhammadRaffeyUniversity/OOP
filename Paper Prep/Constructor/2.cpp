#include <iostream>
#include <string>

using namespace std;

// Function to print an integer
void print(int num)
{
    cout << "Integer: " << num << endl;
}

void print(int num1, int num2)
{
    cout << "Two Integers: " << num1 << ", " << num2 << endl;
}

// Function to print a float
void print(float num)
{
    cout << "Float: " << num << endl;
}

// Function to print a string
void print(string str)
{
    cout << "String: " << str << endl;
}

int main()
{
    print(5);       // Calls print(int)
    print(3.14f);   // Calls print(float)
    print("Hello"); // Calls print(const string&)
    return 0;
}