#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	char last[10]={};

	int index = 0;

	/*
	string str;
	cin >> str;
	stringstream ss(str);
	while(ss >> last[index]) index++;
	*/

	cin.getline(last, 10);

	for(int i = 0; i < 10; i++)
	{
		cout << last[i];
	}
	cout << endl;
}