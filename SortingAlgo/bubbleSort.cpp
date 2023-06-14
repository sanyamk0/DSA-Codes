#include <iostream>
using namespace std;

// Optimised Code
void bubbleSort(int arr[], int n) // Bubble Sort Func
{
    for (int i = 0; i < n - 1; i++) // For no. of Rounds
    {
        bool swapped = false;               // Shuru me har Round ke liye swapped ki value false rhegi
        for (int j = 0; j < n - i - 1; j++) // For each Round checking Elements
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // Agar kisi round me swap nhi hua hoga toh swapped=true nhi hoga aur loop break ho jayegi
        if (!swapped)
        {
            break;
        }
    }
}

// void bubbleSort(int arr[], int n) // Bubble Sort Func
// {
//     for (int i = 0; i < n - 1; i++) // For no. of Rounds
//     {
//         for (int j = 0; j < n - 1; j++) // For each Round checking Elements
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
// }

void printArray(int arr[], int n) // Print Func
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[10] = {4, 65, 67, 3, 7, 2, 4, 78, 90, 61};
    bubbleSort(arr, 10);
    cout << "Sorted Array: ";
    printArray(arr, 10);
    return 0;
}
