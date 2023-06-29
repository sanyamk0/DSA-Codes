#include <iostream>
using namespace std;
void selectionSort(int arr[], int n)
{
    if (n == 0 || n == 1)
        return;
    int minIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[minIndex] > arr[i])
        {
            minIndex = i;
        }
    }
    swap(arr[minIndex], arr[0]);
    selectionSort(arr + 1, n - 1);
}
int main()
{
    int arr[10] = {4, 5, 2, 13, 56, 4, 7, 90, 8, 67};
    selectionSort(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
