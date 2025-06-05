#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void makeSound()
    {
        cout << "Some generic animal sound" << endl;
    }
    virtual ~Animal()
    {
        cout << "Animal destructor" << endl;
    }
};

class Dog : public Animal
{
public:
    void makeSound() override final
    {
        cout << "Woof!" << endl;
    }
    ~Dog() override
    {
        cout << "Dog destructor" << endl;
    }
};

class Cat : public Dog
{
public:
    // void makeSound() override
    // {
    //     cout << "Meow!" << endl;
    // }
    ~Cat() override
    {
        cout << "Cat destructor" << endl;
    }
};

int main()
{
    Animal *animal1 = new Dog();
    Animal *animal2 = new Cat();

    animal1->makeSound(); // Outputs: Woof!
    animal2->makeSound(); // Outputs: Meow!

    delete animal1; // Outputs: Dog destructor, then Animal destructor
    delete animal2; // Outputs: Cat destructor, then Animal destructor

    animal1 = nullptr;
    animal2 = nullptr;

    return 0;
}