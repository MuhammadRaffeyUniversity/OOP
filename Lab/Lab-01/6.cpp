#include <iostream>
using namespace std;

int getAverage(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum / size;
}
int getMax(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[] = {1000, 2, 3, 17, 50};
    cout << "The Average of the Array is: " << getAverage(arr, 5) << endl;
    cout << "The Maximum Number in the Array is: " << getMax(arr, 5) << endl;
    return 0;
}