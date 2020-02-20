#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0, count = 0;
    bool prime = true;
    
    cout << "Input a range of integers.\n";
    while(a <= 1)
    {
        cout << "From integer a ( a must be greater than 1 ) :\n";
        cin >> a;
    }
    while(b < a)
    {
        cout << "To integer b ( b must be greater than or equal to a ) :\n";
        cin >> b;
    }

    for (int i = a; i <= b; i++)
    {
        prime = true;
        for (int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                prime = false;
                break;
            }
        }
        if(prime)
        {
            cout << i << " ";
            count++;
        }
    }
    cout << "\n" << count << " prime numbers.\n";
}
