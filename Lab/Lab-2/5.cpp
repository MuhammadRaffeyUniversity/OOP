#include <iostream>
using namespace std;

struct studentInfo
{
    int rollNo;
    int marks[5];
    float totalMarks;
    float avg;

    void getTotalMarks()
    {
        totalMarks = 0;
        for (int i = 0; i < 5; i++)
        {
            totalMarks += marks[i];
        }
    }
    void getAvg()
    {
        avg = totalMarks / 5.0;
    }
};

int main()
{
    studentInfo s;
    cout << "Enter roll number: ";
    cin >> s.rollNo;
    cout << "Enter marks of 5 subjects: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << ": ";
        cin >> s.marks[i];
    }
    s.getTotalMarks();
    s.getAvg();
    cout << "Roll number: " << s.rollNo << endl;
    cout << "Total marks: " << s.totalMarks << endl;
    cout << "Average: " << s.avg << endl;
    return 0;
}