#include <iostream>
using namespace std;

class Account
{
public:
    void showDetails()
    {
        cout << "This is an Account." << endl;
    }
};
class SavingsAccount : public Account
{
public:
    void showDetails()
    {
        cout << "This is a SavingsAccount." << endl;
    }
};

int main()
{
    Account a;
    a.showDetails();
    SavingsAccount sa;
    sa.showDetails();
    return 0;
}
