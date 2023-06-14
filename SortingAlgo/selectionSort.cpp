#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) // Selection Sort Func
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
}

void printArray(int arr[], int n) // Print Func
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[10] = {5, 7, 4, 3, 13, 56, 4, 89, 54, 4};
    selectionSort(arr, 10);
    cout << "Sorted Array: ";
    printArray(arr, 10);
    return 0;
}
