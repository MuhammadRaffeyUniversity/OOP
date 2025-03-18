#include <iostream>
using namespace std;
class BankAcc
{
private:
    int accNo;
    float balance;
    string name;

public:
    void setInfo(int acc, float bal, string n)
    {
        accNo = acc;
        balance = bal;
        name = n;
    }
    void getInfo()
    {
        cout << "Account No: " << accNo << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: $" << balance << endl;
    }
};
int main()
{
    BankAcc b1;
    b1.setInfo(1234, 1000.5, "Ali");
    b1.getInfo();
    return 0;
}