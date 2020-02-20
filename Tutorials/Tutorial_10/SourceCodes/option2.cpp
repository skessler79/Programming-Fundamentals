#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char string1[25];
	char string2[25];
	cin.getline(string1, 25);
	cin.getline(string2, 25);

	int result = strcmp(string1, string2);
	if(result > 0)
		cout << string2 << endl << string1 << endl;
	else if(result < 0)
		cout << string1 << endl << string2 << endl;
	else
		cout << string1 << endl << string2 << endl << "Same\n";
}