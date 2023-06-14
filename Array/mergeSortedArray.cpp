#include <iostream>
using namespace std;
void mergerSortedArray(int arr1[], int m, int arr2[], int n, int arr3[])
{
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (arr1[i] <= arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < m)
    {
        arr3[k++] = arr1[i++];
    }
    while (j < n)
    {
        arr3[k++] = arr2[j++];
    }
}

int main()
{
    int arr1[5] = {2, 3, 5, 6, 7};
    int arr2[3] = {4, 7, 8};
    int arr3[8] = {0};
    mergerSortedArray(arr1, 5, arr2, 3, arr3);
    for (int i = 0; i < 8; i++)
    {
        cout << arr3[i] << " ";
    }
    return 0;
}
