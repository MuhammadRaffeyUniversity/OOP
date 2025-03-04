#include <iostream>
using namespace std;
class BankAcc
{
private:
    int accNo;
    float balance;
    string name;

public:
    BankAcc(int acc, float bal, string n)
    {
        accNo = acc;
        balance = bal;
        name = n;
    }
    void withDraw(float amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient balance" << endl;
        }
        else
        {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        }
    }
    void deposit(float amount)
    {
        balance += amount;
        cout << "Deposit successful. New balance: " << balance << endl;
    }
    void checkBal() const
    {
        cout << "Account balance: " << balance << endl;
    }
};
int main()
{
    string name;
    int accNo;
    float balance;
    cout << "Enter account number: ";
    cin >> accNo;
    cout << "Enter account holder name: ";
    cin >> name;
    cout << "Enter initial balance: ";
    cin >> balance;
    BankAcc b1(accNo, balance, name);
    b1.checkBal();
    b1.withDraw(500);
    b1.withDraw(600);
    b1.deposit(200);
    return 0;
}