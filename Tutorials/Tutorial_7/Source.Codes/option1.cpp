#include <iostream>
#include <iomanip>

using namespace std;

double average(int days, int array[])
{
    double avg = 0;
    for(int i = 0; i < days; i++)
    {
        avg += array[i];
    }
    avg /= days;
    return avg;
}

double highest_temp(int days, int array[])
{
    double highest = 0;
    for(int i = 0; i < days; i++)
    {
        if(array[i] > highest) highest = array[i];
    }
    return highest;
}

double lowest_temp(int days, int array[])
{
    double lowest = 1000;
    for(int i = 0; i < days; i++)
    {
        if(array[i] < lowest) lowest = array[i];
    }
    return lowest;
}

int main()
{
    int days;
    
    cout << "Please input the number of temperatures to be read\n";
    cin >> days;
    
    int *array = new int[days];
    
    for(int i = 1; i <= days; i++)
    {
        cout << "Input temperature " << i << ":\n";
        cin >> array[i-1];
    }
    
    cout << "The average temperature is " << fixed << setprecision(2) << average(days, array) << endl;
    cout << "The highest temperature is " << fixed << setprecision(2) << highest_temp(days, array) << endl;
    cout << "The lowest temperature is " << fixed << setprecision(2) << lowest_temp(days, array) << endl;
    
}
