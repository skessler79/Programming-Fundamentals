#include <iostream>

using namespace std;

int main(){
    float american, modern, french;
    
    cout << "Please input the number of American Colonial chairs sold\n";
    cin >> american;
    american *=85;
    
    cout << "\nPlease input the number of Modern chairs sold\n";
    cin >> modern;
    modern *=57.5;
    
    cout << "\nPlease input the number of French classical chairs sold\n";
    cin >> french;
    french *=127.75;
    
    cout.precision(2);
    cout << fixed;
    cout << "\nThe total sales of American Colonial chairs  $" << american << endl;
    cout << "\nThe total sales of Modern chairs  $" << modern << endl;
    cout << "\nThe total sales of French Classical chairs  $" << french << endl;
    cout << "\nThe total sales of all chairs  $" << american + modern + french << endl;

}
