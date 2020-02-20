#include <iostream>

using namespace std;

int main(){
    float total, state, local;
    
    cout << "Please input the total sales for the month\n";
    cin >> total;
    
    cout << "\nPlease input the state tax percentage in decimal form (.02 for 2%)\n";
    cin >> state;
    state *=total;
    
    cout << "\nPlease input the local tax percentage in decimal form (.02 for 2%)\n";
    cin >> local;
    local *=total;
    
    cout.precision(2);
    cout << fixed;
    cout << "\nThe Total sales for the month is  $" << total << endl;
    cout << "\nTotal sales without tax is  $" << total - state - local << endl;
    cout << "\nThe State tax for the month is  $" << state << endl;
    cout << "\nThe Local tax for the month is  $" << local << endl;

}
