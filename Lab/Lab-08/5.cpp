#include <iostream>
using namespace std;

class Device
{
public:
    virtual void specs()
    {
        cout << "This is an Electronic Device." << endl;
    }
};
class OnePlus : public Device
{
public:
    void specs() override final
    {
        cout << "This is OnePlus 10 series" << endl;
    }
};
class OnePlus10pro : public OnePlus
{
public:
    // void specs() override // Will give error
    // {
    //     cout << "This is OnePlus 10 pro with Snapdragon 8 gen 1" << endl;
    // }
};

int main()
{
    Device d;
    OnePlus op;
    OnePlus10pro op10;

    d.specs();
    op.specs();
    // op10.specs();
    return 0;
}