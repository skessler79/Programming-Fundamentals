#include <iostream>

using namespace std;

double sum(double arr[], int count)
{
	double total = 0;
	for(int i = 0; i < count; i++) total+=arr[i];
	return total;
}

double mean(double arr[], int count)
{
	double avg = 0;
	for(int i = 0; i < count; i++) avg+=arr[i]/count;
	return avg;
}

int main()
{
	int count, total = 0;
	cin >> count;

	double *arr = new double[count];

	for(int i = 0; i < count; i++)
	{
		cin >> arr[i];
	}
	printf("total %0.2lf\n", sum(arr, count));
	printf("average %0.2lf\n", mean(arr, count));
}