#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int fallTime, height;
    
    cout << "Please input the time of fall in seconds:\n";
    cin >> fallTime;
    
    cout << "Please input the height of the bridge in meters:\n";
    cin >> height;
    
    cout << setw(22) << "Time Falling (seconds)\t" << "Distance Fallen (meters)\n";
    cout << setfill('*') << setw(22) << "\t" << setw(25) << "\n" << setfill(' ');
    for(int i = 0; i <= fallTime; i++)
    {
        cout << right << setw(22) << i << setw(25) << 0.5 * 9.8 * i * i << endl;
    }
    if((0.5 * 9.8 * fallTime * fallTime) > height)
    {
        cout << "WARNING-Bad Data:  The distance fallen exceeds the height of the bridge\n";
    }
}
