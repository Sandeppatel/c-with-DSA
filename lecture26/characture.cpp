/*
#include <iostream>
using namespace std;

int main() {
 
    int arrr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde";

    cout << arrr << endl; // Corrected variable name
    cout << ch << endl;

    int i = 0;
    while (ch[i] != '\0')
    {
       cout << ch[i] << " " ;
       i++;
    }
  
    char *c = &ch[0] ;
    cout << c << " " <<  endl ;

    char temp = 'z' ;
    char *p = &temp ;

    cout << p << endl; 
    return 0;
}
*/

#include <iostream>
using namespace std ;
void print(int *n) {

    cout << n << endl; 
}
void update(int *p){
    p = p+ 1;
    cout << p << endl;
    *p = *p +1;
}
int getSum(int arr[] , int n)
{
    int sum = 0;
    for(int i =0 ; i<n ; i++){
        sum = sum + arr[i] ;
    }
    return sum ;
}
int main() {
    int value = 5;
    int *ch = &value ;

    // print(ch) ;
//   cout << "before " << *ch << endl ;
    //  update(ch) ;
//   cout << "before " << *ch << endl ;

  int arr[5] = {1 , 2 , 3 , 4 , 5};
  cout << " sum is " << getSum(arr , 5) ;
    return 0 ;
}