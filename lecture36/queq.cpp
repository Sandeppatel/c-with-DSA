#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s]; // set pivot to arr[s] instead of arr[0]
    int count = 0;

    // count elements smaller than pivot
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] < pivot)
        {
            count++;
        }
    }

    // place pivot at the right position
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // handle the left and right parts
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    
    return pivotIndex; // return the pivot index after partition
}

void quickSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int p = partition(arr, s, e);
    // sort the left part
    quickSort(arr, s, p - 1);

    // sort the right part
    quickSort(arr, p + 1, e);
}

int main()
{
    int arr[9] = {4, 9, 1, 8, 2, 7, 3, 6, 5};
    int n = 9;

    quickSort(arr, 0, n - 1);

    // print the sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
