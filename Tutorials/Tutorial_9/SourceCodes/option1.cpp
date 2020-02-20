#include <iostream>

using namespace std;

void sort(int arr[], int count)
{
	for(int i = 0; i < count; i++)
	{
		for(int j = 0; j < count - 1 - i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int main()
{
	int numScores, average = 0;
	cin >> numScores;
	int *arr = new int[numScores];

	for(int i = 0; i < numScores; i++)
	{
		cin >> arr[i];
		average+=arr[numScores]/numScores;
	}

	cout << "Average : " << average << endl << "Sorted : \n";
	sort(arr, numScores);

	for(int i = 0; i < numScores; i++) cout << arr[i] << endl;

}
