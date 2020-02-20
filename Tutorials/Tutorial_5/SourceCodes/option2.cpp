#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int choice = 0, number = 0;
    int count [4] = {};
    
    while(choice != -1)
    {
        cout << "Please input your choice of drink (a number from 1 to 4)\n1  -  Coffee\n2  -  Tea\n3  -  Coke\n4  -  Orange Juice\n-1 - QUIT\n";
        cin >> choice;
        
        if(choice == -1)
        {
            break;
        }
        
        number++;
        count[choice-1]++;
        
    }
    cout << "The results are as follows:\n\nBeverage\tNumber of Votes\n" << left << setw(15) << "Coffee" << setw(15) << count[0] << endl
     << setw(15) << "Tea" << setw(15) << count[1] << endl << setw(15) << "Coke" << setw(15) << count[2] << endl << setw(15) << "Orange Juice" << setw(15) << count[3] << endl;
}
