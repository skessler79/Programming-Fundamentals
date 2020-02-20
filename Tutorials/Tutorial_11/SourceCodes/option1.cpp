#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// This program demonstrates partially initialized structure variables

// PLACE YOUR NAME HERE

struct taxPayer
{
	string name;
	long socialSecNum;
	float taxRate;
	float income;
	float taxes;
};

int main()
{
	taxPayer citizen[10];
	// Fill in code to initialize a structure variable named citizen1 so that
	// the first three members are initialized.	Assume the name is Tim
	// McGuiness, the social security number is 255871234, and the tax rate is .35
	citizen[0] = {"Tim McGuiness", 255871234, 0.35};

	// Fill in code to initialize a structure variable named citizen2 so that
	// the first three members are initialized.	Assume the name is John Kane,
	// the social security number is 278990582, and the tax rate is .29
	citizen[1] = {"John Kane", 278990582, 0.29};

	cout << fixed << showpoint << setprecision(2);

	// calculate taxes due for citizen1

	// Fill in code to prompt the user to enter this year's income for the citizen1
	cout << "Input income for citizen1\n";

	// Fill in code to read in this income to the appropriate structure member
	cin >> citizen[0].income;

	// Fill in code to determine this year's taxes for citizen1
	citizen[0].taxes = citizen[0].income * citizen[0].taxRate;

	cout << "Name: " << citizen[0].name << endl;

	cout << "Social Security Number: " << citizen[0].socialSecNum << endl;

	cout << "Taxes due for this year: $" << citizen[0].taxes << endl << endl;

	// calculate taxes due for citizen2

	// Fill in code to prompt the user to enter this year's income for citizen2
	cout << "Input income for citizen2\n";

	// Fill in code to read in this income to the appropriate structure member
	cin >> citizen[1].income;

	// Fill in code to determine this year's taxes for citizen2
	citizen[1].taxes = citizen[1].income * citizen[1].taxRate;

	cout << "Name: " << citizen[1].name << endl;

	cout << "Social Security Number: " << citizen[1].socialSecNum << endl;

	cout << "Taxes due for this year: $" << citizen[1].taxes << endl << endl;

	return 0;
}