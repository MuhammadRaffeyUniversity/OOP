#include <iostream>
#include <string>
using namespace std;
class BankAccount
{
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNum, double bal) : accountNumber(accNum), balance(bal) {}
    friend void transferFunds(BankAccount &acc1, BankAccount &acc2);
    void display()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
    double getBal() const
    {
        return balance;
    }
};
void transferFunds(BankAccount &acc1, BankAccount &acc2)
{
    double amount;
    cout << "Enter the amount to transfer: ";
    cin >> amount;
    if (amount > 0 && amount <= acc1.balance)
    {
        acc2.balance += amount;
        acc1.balance -= amount;
        cout << "Transfer successful!" << endl;
    }
    else
    {
        cout << "Invalid transfer amount." << endl;
    }
}
int main()
{
    BankAccount account1(123456, 1000.0);
    BankAccount account2(789450, 1000.0);

    cout << "Initial Balance:" << endl;
    account1.display();
    account2.display();
    double balance = account1.getBal();
    transferFunds(account1, account2);
    cout << "\n\nUpdated Balance:" << endl;
    account1.display();
    account2.display();
    return 0;
}