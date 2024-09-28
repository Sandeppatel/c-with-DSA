// power of number 
/*

#include<iostream>
using namespace std ;
int power(int a , int  b){

    int ans = 1 ;
    
    for(int i = 1  ; i <=b; i++){
         ans = ans * a;
    } 
    return ans;
}
int main() {
   int a , b;
   cin >> a >> b;
  cout<<  power(a ,b) << endl ;

     return  0 ;
}*/

//  even and odd 
/*
#include<iostream>
using namespace std ;
int num(int n){
    if(n&1){
        return 1;
    }
    else{
        return 0;
    }
};
int main(){
    int a;
    cin >> a;
    int result = num(a) ; 
    if(result == 0 ){
        cout << " number is even " ;
    }
    else {
        cout << " number is odd ";
    }
    return 0 ;
}
*/
 
/*
 #include<iostream>
 using namespace std ;
 int factorial(int n){
    int fact = 1;
    for(int i =1; i <=n; i++){
            fact = fact * i ;

    }
    return fact ; 
 }
 int nCr(int n , int r){
    int num = factorial(n) ;
    int denom = factorial(r) / factorial(n-r) ;
    return num/denom ;
 }
  int main() {
    int n , r;
    cin >> n >> r;
     
    cout <<   nCr(n, r) << endl ;
     return 0;
 }
 */

#include <iostream>
using namespace std;

bool primeNumber(int num[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (num[i] == key) {
            return true;  // Found the number
        }
    }
    return false; // Number not found
}

void printArray(int num[], int n) {
    for (int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the number to search for: ";
    cin >> key;

    if (primeNumber(arr, size, key)) {
        cout << key << " is present in the array." << endl;
    } else {
        cout << key << " is not present in the array." << endl;
    }

    // Optional: Print the array
    cout << "The array is: ";
    printArray(arr, size);

    return 0;
}
