#include <fstream>
#include <iostream>
using namespace std;

// PLACE YOUR NAME HERE 

const int MAXNAME = 20;

int main()
{
	ifstream inData;
	inData.open("grades.txt");

	char name[MAXNAME + 1];	// holds student name 
	float average;			// holds student average

	
	string trash;

	while (inData)
	{
		inData.get(name, MAXNAME);
		inData >> average;

		// Fill in the code to print out name and
		// student average
		for(int i = 0; i < MAXNAME; i++)
		{
			cout << name[i];
		}
		cout << "   " << average << "\n";

		// Fill in the code to complete the while
		// loop so that the rest of the student
		// names and average are read in properly
		getline(inData, trash);

	}

	return 0;
}