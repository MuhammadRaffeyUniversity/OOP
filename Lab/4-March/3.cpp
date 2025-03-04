#include <iostream>
using namespace std;

class RobotTaskEstimator
{
    float batteryLevel;
    int taskCount;

public:
    RobotTaskEstimator(float bLevel)
    {
        batteryLevel = bLevel;
        taskCount = 0;
    }
    void performTask(int min)
    {
        float btCon = min * 2;
        if (batteryLevel > 0 && btCon <= batteryLevel)
        {
            cout << "Performing task for " << min << " minutes." << endl;
            batteryLevel -= min * 2;
            taskCount++;
        }
        else
        {
            cout << "Battery level too low to perform task." << endl;
            cout << "Total tasks performed: " << taskCount << endl;
        }
    }
    float getBatteryLevel() const
    {
        cout << "Battery level: " << batteryLevel << "%" << endl;
        return batteryLevel;
    }
    int getTaskCount() const
    {
        cout << "Tasks performed: " << taskCount << endl;
        return taskCount;
    }
};

int main()
{
    RobotTaskEstimator robot(100.0);
    do
    {
        int minutes;
        cout << "Enter task duration in minutes (0 to exit): ";
        cin >> minutes;
        if (minutes == 0)
            break;
        robot.performTask(minutes);
        float bt = robot.getBatteryLevel();

    } while (true);

    return 0;
}