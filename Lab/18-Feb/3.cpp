#include <iostream>
using namespace std;

float celciusToFaren(float c)
{
    return (1.8 * c) + 32;
}
int main()
{
    float c;
    cout << "Enter the temperature in Celcius: ";
    cin >> c;
    cout << "Temperature in Farenheit: " << celciusToFaren(c) << endl;
    return 0;
}