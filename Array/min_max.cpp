#include <iostream>
using namespace std;

int getMax(int arr[], int n) // Max Func
{
    double max = INT64_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int getMin(int arr[], int n) // Min Func
{
    double min = INT64_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int size;
    cout << "Enter Size of Array: ";
    cin >> size;
    int num[100000];
    cout << "Enter " << size << " No. of Elements for Array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << "Max value: " << getMax(num, size) << endl; // Calling Max Func
    cout << "Min value: " << getMin(num, size) << endl; // Calling Min Func
    return 0;
}
