#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char string1[20] ="Total Eclipse ";
	char string2[11] = "of the Sun";
	cout << string1 << endl;
	cout << string2 << endl;
	strcat(string1,string2);
	cout << string1 << endl;
}