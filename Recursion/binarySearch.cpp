#include <iostream>
using namespace std;
bool binarySearch(int arr[], int start, int end, int key)
{
    int mid = start + (end - start) / 2;
    if (start > end)
        return false;
    if (arr[mid] == key)
        return true;
    if (arr[mid] > key)
        return binarySearch(arr, start, mid - 1, key);
    else
        return binarySearch(arr, mid + 1, end, key);
}
int main()
{
    int arr[10] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 5;
    int start = 0, end = size - 1;
    bool ans = binarySearch(arr, start, end, key);
    cout << ans << endl;
    return 0;
}
