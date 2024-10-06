/*
// ======== reverse string ========

#include <iostream>
using namespace std ;
void reverse(string& str , int i , int j) {

   cout << " call resive " << str  << endl;;
     if(i>j){
        return ;
     }
     swap(str[i] , str[j]);
     i++;
     j--;
     reverse(str , i , j);
}

int main(){
    string name = "abcde";
    reverse(name , 0 , name.length()-1) ;

    cout << name << endl;
}
*/
/*
// ======== palindron string ========

#include<iostream>
using namespace std ;
bool palindron(string str , int i , int j){
    // base case
    if(i>j){
        return true ;
    }
    if(str[i] != str[j]){
        return false;
    }else{
        // recursive call
        return palindron(str , i+1 ,  j-1) ;
    }
}
int main(){
    string name= " abba " ;
 bool isPlindron =     palindron(name , 0 ,  name.length()-1);
      if(isPlindron){
        cout << " it is palindron " << endl;
      }else{
        cout << " its not palindron " << endl ;
      }
}
*/
/*
#include <iostream>
using namespace std ;
void bubbolSort(int arr[], int n){

 for(int j = 0; j < n; j++){
    for(int i = 0 ; i < n-1; i++){
    if(arr[i] > arr[i+1]){
    swap(arr[i] , arr[i+1]);
    }
 }
 }

}
void print(int arr[] , int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " " ;
    }
}
int main(){
int arr[6] = { 6 , 7 ,2 , 5 ,4 , 1};
int n =6;
bubbolSort(arr, n) ;
print(arr ,  n) ;
    return 0;
}
*/
/*
//  bubbal sort recursion with string
#include <iostream>
using namespace std ;
void bubbleSort(int arr[] , int n){
    //  base case - already sorted
    if (n == 0 || n == 1)
    {
       return  ;
    }
    for(int i =0 ; i < n-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i] , arr[i+1]) ;
        }
    }
    bubbleSort(arr ,  n-1);
}
void print(int arr[]  , int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " " ;
    }
}
int main(){
int arr[6] = { 6 , 7 ,2 , 5 ,4 , 1};
int n =6;
bubbleSort( arr ,  n);
print(arr  , n) ;
    return 0;
}
*/

#include <iostream>
using namespace std;
void merge(int arr[], int s, int e)
{

    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];
    //  copy value
    int minArryIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[minArryIndex];
        minArryIndex++;
    }
    int k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k];
        k++;
    }

    //  merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    int mainArrayIndex = s;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex] = first[index1];
            mainArrayIndex++;
            index1++;
        }
        else
        {
            arr[mainArrayIndex] = second[index2];
            mainArrayIndex++;
            index2++;
        }
    }
    while (index1 < len1)
    {
        arr[mainArrayIndex] = first[index1];
         mainArrayIndex++;
        index1++;
    }
    while (index2 < len2)
    {

        arr[mainArrayIndex] = second[index2];
         mainArrayIndex++;
        index2++;
    }
}

void margSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int mid = (s + e) / 2;
    //  left part sort karna hai
    margSort(arr, s, mid);

    //  right ka part sort karna hai
    margSort(arr, mid + 1, e);

    //  merge karna h
    merge(arr, s, e);
}

int main()
{
    int arr[7] = {8, 2, 5, 3, 1, 9, 2};
    int n = 7;
    margSort(arr, 0, n );
    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}