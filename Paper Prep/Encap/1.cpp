#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance; // Hidden data (encapsulation)

public:
    BankAccount(double initialBalance)
    {
        if (initialBalance >= 0)
            balance = initialBalance;
        else
            balance = 0;
    }

    void deposit(double amount)
    {
        if (amount > 0)
            balance += amount;
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
            balance -= amount;
    }

    double getBalance() const
    {
        return balance;
        // balance = 5000; // ❌ Not allowed (Const Function)
    }
};

int main()
{
    BankAccount account(1000);
    account.deposit(500);
    account.withdraw(200);

    // account.balance = 5000; // ❌ Not allowed (information hidden)
    cout << "Current balance: " << account.getBalance() << endl; // ✅

    return 0;
}
