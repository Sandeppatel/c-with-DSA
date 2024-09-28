// #include <iostream>
// using namespace std;

// void merge(int arr1[], int n, int arr2[], int m, int arr3[]) {
//     int i = 0, j = 0, k = 0;

//     // Merging elements from both arrays while both have elements left
//     while (i < n && j < m) {
//         if (arr1[i] < arr2[j]) {
//             arr3[k] = arr1[i];
//             k++;
//             i++;
//         } else {
//             arr3[k] = arr2[j];
//             k++;
//             j++;
//         }
//     }

//     // If arr1 has remaining elements, copy them to arr3
//     while (i < n) {
//         arr3[k] = arr1[i];
//         k++;
//         i++;
//     }

//     // If arr2 has remaining elements, copy them to arr3
//     while (j < m) {
//         arr3[k] = arr2[j];
//         k++;
//         j++;
//     }
// }

// int main() {
//     int arr1[5] = {1, 3, 5, 7, 9};
//     int arr2[3] = {2, 4, 6};
//     int arr3[8] = {0};

//     // Calling the merge function
//     merge(arr1, 5, arr2, 3, arr3);

//     // Printing the merged array
//     cout << "Merged array: ";
//     for (int i = 0; i < 8; i++) {
//         cout << arr3[i] << " ";
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0, k = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    while (i < n)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    while (j < m)
    {
        arr3[k] = arr1[j];
        k++;
        j++;
    }
}
void printArray(int arr3[] , int k){

    for(int i = 0 ; i < k ; i++){
        cout << arr3[i] << " " ;
    }
    cout << endl ;
}

int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};
    int arr3[8] = {0};

    merge(arr1 ,  5 , arr2 , 3 , arr3) ;
      printArray(arr3 , 8) ;
}