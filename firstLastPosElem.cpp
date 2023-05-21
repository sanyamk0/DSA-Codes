// Finding First and Last Occurence of Element in a Sorted Array
#include <iostream>
using namespace std;

int firstOccur(int arr[], int n, int k) // To find first occurence
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            end = mid - 1; // although element mil gya h but ho skta h left me bhi present ho
        }
        else if (arr[mid] < k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int lastOccur(int arr[], int n, int k) // To find last occurence
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            start = mid + 1; // although element mil gya h but ho skta h right me bhi present ho
        }
        else if (arr[mid] < k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arr[10] = {1, 2, 3, 3, 3, 4, 5, 5, 6, 7};

    int firstIndex = firstOccur(arr, 10, 3);
    int lastIndex = lastOccur(arr, 10, 3);

    cout << "First Occurence of 3 at index " << firstIndex << endl;
    cout << "Last Occurence of 3 at index " << lastIndex << endl;

    return 0;
}
