#include <iostream>
#include <fstream>

using namespace std;

void sort(int arr[], int count)
{
    for(int i = 0; i < count - 1; i++)
    {
        for(int j = 0; j < count - i - 1; j++)
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

int search(int arr[], int count, int value)
{
    int middle;
    int first = 0, last = count - 1;
    
    while(first <= last)
    {
        middle = first + (last - first)/2;
        
        if(arr[middle] == value)
            return middle;
        else if(arr[middle] > value)
            last = middle - 1;
        else
            first = middle + 1;
    }
    return -1;
}

int main()
{
    ifstream fin;
    fin.open("array.txt");
    int count;
    fin >> count;
    int value;
    fin >> value;
    
    cout << count << " " << value << endl;
    
    int *arr = new int[count];
    for(int i = 0; i < count; i++)
    {
        fin >> arr[i];
    }
    
    sort(arr, count);
    
    for(int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    int location = search(arr, count, value);
    
    if(location == -1)
        cout << "Error 404 : Not Found\n";
    else
        cout << location << endl;
    
    return 0;
}
