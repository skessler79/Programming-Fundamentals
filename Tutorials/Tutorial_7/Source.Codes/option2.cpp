#include <iostream>

using namespace std;

int grades(char array[], int num, char c)
{
    int count = 0;
    for(int i = 0; i < num; i++)
    {
        if(c == array[i]) count++;
    }
    return count;
}

int main()
{
    int num;
    cout << "Please input the number of grades to be read in.\n";
    cin >> num;
    
    char *array = new char[num];
    
    for(int i = 0; i < num; i++)
    {
        cout << "Input a grade\n";
        cin >> array[i];
    }
    
    for(int i = 0; i < 5; i++)
    {
        char c = 'A' + i;
        cout << "Number of " << c << " = " << grades(array, num, c) << endl;
    }
}
