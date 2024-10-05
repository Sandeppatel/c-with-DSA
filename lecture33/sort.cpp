// ========= check sorted or not ==============
/*
#include <iostream>
using namespace std ;
bool isSorted(int arr[] , int size){
    if(size == 0 || size == 1){
        return true ;
    }

    if(arr[0] > arr[1]){
        return false ;
    }else{
        bool remainingPart = isSorted(arr +1 ,size - 1);
        return remainingPart ;
    }
}

int main(){

 int arr[6] = {1 , 2 , 3 , 7 ,5 ,6};
 int size = sizeof(arr)/sizeof(int);


int ans =    isSorted(arr , size);
if(ans){
    cout << " it is sorted " << endl;
}else{
    cout << " it is not sorted " << endl ;
}
    return 0;
}
*/
/*
// arr of sum
#include <iostream>
using namespace std;
  int isSum(int arr[], int size)
{
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }

    int choti = isSum(arr + 1, size - 1);
     int badi = arr[0] + choti ;
     return badi ;
    
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(int);
    int ans = isSum(arr, size);
    cout << ans << " ";

    return 0;
}
*/


//  ========== linear search use of recursion ===============
/*
#include <iostream>
using namespace std;
  int isSum(int arr[], int size , int key)
{
    if (size == 0)
    {
        return 0;
    }
   if(arr[0] == key){
    return true ;
   }else{
   return  isSum(arr + 1, size -1 ,key); 
   }
    
}
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(int);
    int ans = isSum(arr, size , 7);
   if(ans){
    cout << " it is true " << endl ;
   }else{
    cout << " it is false " << endl; 
   }

    return 0;
}
*/
//  ========== binary search use of recursion ===============
// ========= array alredy sorted hona chahiye =====

#include <iostream>
using namespace std;
int binarySearch(int arr[] ,int s , int e , int key){
   
      if(s>e){
        return false ;
      }

    int mid = s + (e - s) /2 ;

    if (arr[mid] == key)
    {
       return true ;
    }
    else if (arr[mid] < key)
    {
     return   binarySearch(arr , mid + 1 , e, key) ;
    }
    else{
     return   binarySearch(arr ,s , mid - 1 , key) ;

    }
    
    
}
int main()
{
   int arr[5] = {2 , 4 , 6 , 8 , 10} ;
//    int size = sizeof(arr)/ sizeof(int);

   int key = 10 ;
   int ans = binarySearch(arr , 0 , 5 , key) ;
   if(ans){
    cout << " ture is number  " << endl ;
   }else{
    cout << " false is number " << endl ;
   }
    return 0;
}