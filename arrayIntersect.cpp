// 2Pointer Approach Used here
// Arrays are given to be sorted in non-decreasing order
#include <iostream>
using namespace std;

int main()
{
    int ans = 0;
    int n, m;
    cout << "Enter Size of First Array: ";
    cin >> n;
    int arr1[n];
    cout << "Enter " << n << " No. of Elements for First Array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter Size of Second Array: ";
    cin >> m;
    int arr2[m];
    cout << "Enter " << m << " No. of Elements for Second Array" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    int i = 0, j = 0;
    cout << "Common Elements in Both Arrays are: ";
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            ans = arr1[i];
            cout << ans << " ";
            i++, j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    return 0;
}
