#include <iostream>

class Base
{
public:
    virtual void show() { std::cout << "Base\n"; }
};

class Derived : public Base
{
public:
    void show() override { std::cout << "Derived\n"; }
    void derivedOnly() { std::cout << "Derived only method\n"; }
};

int main()
{
    Base *b = new Base(); // Not actually a Derived

    // Using static_cast (no runtime check)
    Derived *d1 = static_cast<Derived *>(b);
    std::cout << "Using static_cast:\n";
    d1->show();        // Undefined behavior — might call Base::show()
    d1->derivedOnly(); // Undefined behavior — memory corruption risk!

    // Using dynamic_cast (safe)
    Derived *d2 = dynamic_cast<Derived *>(b);
    std::cout << "Using dynamic_cast:\n";
    if (d2)
    {
        d2->show();
    }
    else
    {
        std::cout << "dynamic_cast failed: not a Derived\n";
    }

    delete b;
    return 0;
}