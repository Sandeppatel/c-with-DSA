#include <iostream>
using namespace std;
int main(){
  /*
    int arr[10] = {1,2 ,4 ,5 , 6};
    cout << "address of first memmory block is "<< arr << endl;
    cout << arr[1] << endl ;
    cout << " adderes of first memmory " << &arr[0] << endl;

    cout << " 4th " << *arr << endl;
    cout << " 5th " << *arr + 1 << endl;
    cout << " 6th " << *(arr + 1) << endl;


    // int arr[10] = {2 , 3 ,4 , 5 ,6};
    cout << *arr << endl ;
    cout << *(arr + 1) << endl ;
    cout << *(arr + 1) << endl ;
    cout << *(arr + 1) << endl ;
    cout << arr[2] << endl ;

    int i = 3;
    cout << i[arr] << endl ;

    cout << sizeof(arr) << endl;
    */
/*
   int temp[6] ;
   cout << sizeof(temp) << endl; 
   int *ptr = &temp[0];
   cout<< sizeof (ptr) << endl ;
   cout<< sizeof (*ptr) << endl ;
   cout<< sizeof (&ptr) << endl ;
*/

/*
int a[20] = {1, 2 , 3 , 4 ,5};
cout << " -> " << &a[0] << endl ;
// cout << " -> " << &a << endl ;
// cout << " -> " << a << endl ;
  

  int *p = &a[0];
  // cout << " -> " << p << endl ;
  // cout << " -> " << *p << endl ;
  cout << " -> " << &p << endl ;
*/

// ======== symble table content can not we chenj =========

int arr[20] ;
int *ptr = &arr[0];
cout << " ->  " << ptr << endl ;
ptr = ptr + 1; 
cout << " ->  "<< ptr << endl ;


    return 0;
}