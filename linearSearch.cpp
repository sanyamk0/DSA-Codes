// Basic Code for Linear Search of Element Without Duplicacy
#include <iostream>
using namespace std;

bool search(int arr[], const int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key) // Comparing Value of Array with Key
        {
            return 1;
        }
    }
    return 0;
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
    cout << "Enter Element to Search: ";
    int key;
    cin >> key;
    bool found = search(arr, size, key); // Calling Search Function
    if (found)
    {
        cout << key << " is Present in Array." << endl;
    }
    else
    {
        cout << key << " is Not Present in Array." << endl;
    }
    return 0;
}
