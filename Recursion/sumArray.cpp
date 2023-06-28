#include <iostream>
using namespace std;
int findSum(int arr[], int size)
{
    if (size == 1)
        return arr[0];
    int ans = arr[0] + findSum(arr + 1, size - 1);
    return ans;
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = findSum(arr, size);
    cout << ans;
    return 0;
}
