#include <iostream>
using namespace std;
// Composition
class Heart
{
private:
    int heartRate;

public:
    Heart(int rate) : heartRate(rate)
    {
        cout << "Heart created with rate: " << heartRate << endl;
    }
    void displayHeartRate()
    {
        cout << "Heart Rate: " << heartRate << endl;
    }
    ~Heart()
    {
        cout << "Heart destroyed" << endl;
    }
};
class Human
{
private:
    Heart heart;
    string name;

public:
    Human(string n, int rate) : name(n), heart(rate)
    {
        cout << "Human created: " << name << endl;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        heart.displayHeartRate();
    }
    ~Human()
    {
        cout << "Human destroyed: " << name << endl;
    }
};

int main()
{
    Human human("Raffey", 72);
    human.display();
    return 0;
}