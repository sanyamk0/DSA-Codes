#include <iostream>
using namespace std;

void reverse(int arr[], int size) // Reverse Func
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]); // In-Built Swap Func
        start++;
        end--;
    }
}

void printArray(int arr[], int size) // Print Func
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter Size of Array: ";
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " No. of Elements in Array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i]; // Taking Input as Values for Array
    }
    reverse(arr, size); // Calling Reverse Func
    cout << "Reversed Array: ";
    printArray(arr, size); // Calling Print Func
    return 0;
}
