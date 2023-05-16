// Code for Linear Search of Element With Duplicacy
#include <iostream>
using namespace std;

void search(int arr[], int size, int key)
{
    int arrTemp[1000], j = 0, chk = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key) // Comparing Value of Array with Key
        {
            arrTemp[j] = i; // Storing Indices in Temporary Array
            j++;            // Incrementing Index of Temporary Array
            chk++;
        }
    }
    if (chk > 0)
    {
        cout << key << " Found at Index: ";
        size = chk;
        for (int i = 0; i < size; i++)
        {
            cout << arrTemp[i] << " ";
        }
    }
    else
    {
        cout << key << " Not Found in Given Array." << endl;
    }
}

int main()
{
    int size;
    cout << "Enter Size of Array: ";
    cin >> size;
    int arr[size]; // Array of Size Provided by User
    cout << "Enter " << size << " No. of Elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i]; // Taking Inputs of Array
    }
    int key;
    cout << "Enter Element to Search: ";
    cin >> key;
    search(arr, size, key); // Calling Search Function
    return 0;
}