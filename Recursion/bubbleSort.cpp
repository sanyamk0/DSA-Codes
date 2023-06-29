#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
    if (n == 0 || n == 1)
        return;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }
    bubbleSort(arr, n - 1);
}
int main()
{
    int arr[10] = {4, 5, 2, 13, 56, 4, 7, 90, 8, 67};
    bubbleSort(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
