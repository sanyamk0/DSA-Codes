// Code Written for Sorted Array in Increasing Order
#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;

    // int mid = (start + end) / 2;  In this case adding extreme values ((2^31)-1) for int may cause (start + end) to go out of range of int
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        // As Array is in Increasing Order so we Search key in Right Part of Array
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        // mid = (start + end) / 2;
        mid = start + (end - start) / 2;
    }
    return -1; // It Means Key Not Found
}

int main()
{
    int n, key;
    cout << "Enter Size of Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter Array Elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter Element to Search: ";
    cin >> key;
    int index = binarySearch(arr, n, key);
    cout << key << " Present at Index " << index;
    return 0;
}
