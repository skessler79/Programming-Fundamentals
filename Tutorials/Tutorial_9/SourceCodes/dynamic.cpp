// This program demonstrates the use of dynamic variables

// PLACE YOUR NAME HERE

#include <iostream>
#include <sstream>
using namespace std;

const int MAXNAME = 10;

int main()
{
	int pos;
	char *name = nullptr;
	int *one = nullptr;
	int *two = nullptr;
	int *three = nullptr;
	int result;

	//	Fill in code to allocate the integer variable one here
	one = new int;

	//	Fill in code to allocate the integer variable two here
    two = new int;
    
	//	Fill in code to allocate the integer variable three here
    three = new int;

	//	Fill in code to allocate the character array pointed to by name
    name = new char[MAXNAME];

	cout << "Enter your last name with exactly 10 characters." << endl;
	cout << "If your name has < 10 characters, repeat last letter. " << endl
		 << "Blanks at the end do not count." << endl;

    string sname;
    cin >> sname;
    stringstream ss(sname);
    int index = 0;
    while(ss >> name[index])index++;
    char end = name[index - 1];
	for (pos = index; pos < MAXNAME; pos++)
		*(name + pos) = end;
		
		// Fill in code to read a character into the name array
				// WITHOUT USING a bracketed subscript

	cout << "Hi ";

	for (pos = 0; pos < MAXNAME; pos++)
		cout << name[pos];
		
	cout << endl;
		// Fill in code to a print a character from the name array
				// WITHOUT USING a bracketed subscript

	cout << endl << "Enter three integer numbers separated by blanks" << endl;

    
	// Fill in code to input three numbers and store them in the
	// dynamic variables pointed to by pointers one, two, and three.
	// You are working only with pointer variables
	cin >> *one >> *two >> *three;

	// echo print
	cout << "The three numbers are " << endl;

	// Fill in code to output those numbers
    cout << *one << " " << *two << " " << *three << endl;
    
	result = *one + *two + *three;// Fill in code to calculate the sum of the three numbers

	cout << "The sum of the three values is " << result << endl;

	// Fill in code to deallocate one, two, three and name
	delete one;
	delete two;
	delete three;
	delete name;

	return 0;
}
