#include <iostream>
using namespace std;
void print(int arr[], int n)
{
    cout << "Size is: " << n << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool linearSearch(int arr[], int size, int key)
{
    print(arr, size);
    if (size == 0)
        return false;
    if (arr[0] == key)
        return true;
    else
    {
        bool ans = linearSearch(arr + 1, size - 1, key);
        return ans;
    }
}
int main()
{
    int arr[10] = {5, 6, 3, 2, 2, 1, 8, 5, 3, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 20;
    bool ans = linearSearch(arr, size, key);
    cout << ans << endl;
    return 0;
}
