#include <iostream>
using namespace std;

class ShoppingCart
{
private:
    int cartID;

public:
    double *totalprice;
    ShoppingCart(int id, double price)
    {
        cartID = id;
        totalprice = new double(price);
    }

    ShoppingCart(ShoppingCart &other)
    {
        cartID = other.cartID;
        totalprice = other.totalprice; //Shallow Copy
        // totalprice = new double(*other.totalprice); // Deep Copy
    }

    void display()
    {
        cout << "Cart ID: " << cartID << ", Total Price: $" << *totalprice << endl;
    }
};

int main()
{
    double price = 59.99;
    ShoppingCart cart1(101, price);
    ShoppingCart cart2 = cart1;

    cart1.display();
    cart2.display();

    *cart1.totalprice = 79.99;
    cout << "\nAfter changing price through cart1:" << endl;
    cart1.display();
    cart2.display();

    return 0;
}