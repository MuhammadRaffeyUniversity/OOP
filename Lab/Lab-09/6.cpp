#include <iostream>
#include <string>
using namespace std;

class NegativeMarks
{
private:
    string errormsg;

public:
    NegativeMarks() : errormsg("Marks can not be negative.") {}
    NegativeMarks(string msg) : errormsg(msg) {}
    string what() { return errormsg; }
};
int main()
{
    try
    {
        int marks;
        cout << "Enter your marks: ";
        cin >> marks;

        if (marks < 0)
        {
            throw NegativeMarks();
        }
        cout << "Your marks are: " << marks << endl;
    }
    catch (NegativeMarks e)
    {
        cout << e.what() << endl;
    }
    return 0;
}