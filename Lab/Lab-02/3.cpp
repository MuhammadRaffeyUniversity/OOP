#include <iostream>
using namespace std;

int charCount(char c, char arr[], int i)
{
    arr[i] = tolower(arr[i]);
    if (arr[i] == '\0')
        return 0;
    if (arr[i] == c)
        return 1 + charCount(c, arr, i + 1);
    if (arr[i] != c)
    {
        return charCount(c, arr, i + 1);
    }

    return charCount(c, arr, i + 1);
}

int main()
{
    char arr[70] = "I am an Agentic AI Engineer and I use Python to build AI Agents";
    cout << charCount('a', arr, 0) << endl;
    return 0;
}