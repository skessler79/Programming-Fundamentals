#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	string str, reverse;
	cin >> str;

	for(int i = 0; i < str.length(); i++)
	{
		reverse.push_back(str[str.length() - 1 - i]);
	}

	if(str == reverse)
		cout << "palindrome\n";
	else
		cout << "not\n";
}