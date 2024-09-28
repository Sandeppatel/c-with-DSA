#include <iostream>
#include <algorithm>

using namespace std ;
// swap number 
void swapNumber(int num[] , int n){
    int s =0 ;
    int e = n-1; 
    for (int  i = 0; i <n; i++)
    {
        if(s <= e){
            swap(num[s] , num[e]) ;
        }
    } 
    cout << endl;  
}

//  print number 
void printArray(int num[]  , int n){
    for(int i = 0 ; i< n; i++){
        cout << num[i] << " " ;
    }
    cout << endl; 
}

int main(){
 
 int arr[5] = { 4 ,6 ,7 ,8 ,11} ;
  
  swapNumber(arr , 5) ;
  printArray(arr ,  5) ;


    return  0;
}