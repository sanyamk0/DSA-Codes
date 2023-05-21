#include <iostream>
using namespace std;

int peakIndex(int arr[], int n)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e) // Yaha s<=e krne pe last me s aur e ek hi element ko point krrhe h isliye last me hamesha equal honge aur while ki condition hmesha true hogi aur ye infinite loop me fas jayega.
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 5, 4, 3, 2};

    int index = peakIndex(arr, 10);
    cout << "Peak Element Present at index: " << index << endl;
    return 0;
}
