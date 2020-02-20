#include <iostream>

using namespace std;

int search(int arr[], int count, int sec)
{
	for(int i = 0; i < count; i++)
		if(arr[i] == sec) return i;
	return -1;
}

int main()
{
	int count, sec;
	cin >> count;

	int *arr = new int[count];
	for(int i = 0; i < count; i++) cin >> arr[i];

	cin >> sec;

	int find = search(arr, count, sec);

	if(find == -1) cout << "Error 404\n";
	else cout << "Found at " << find << endl;
}