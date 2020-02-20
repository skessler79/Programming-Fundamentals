#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    ifstream testIn; 
    
    testIn.open("test.dat");
    
    if(!testIn) cout << "shit happened";
    
}
