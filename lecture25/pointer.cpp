#include <iostream>
using namespace std ;

int main(){
   /* int num =  5;
    // cout << num << endl ;
    // cout << " adddress of num iis " << &num << endl ;
    int *ptr =  &num;
    cout << ptr << endl;
    cout << *ptr << endl;


    double  d = 4.5;
    double *p2  = &d ;
    cout << p2 << endl ;
    cout << *p2 << endl ;
    

    cout << " size of pointr is " << sizeof(num) << endl ; 
    cout << " size of pointr is " << sizeof(*ptr) << endl ;
    */
   
/*
//     it is two type 
   int i = 5;
   int *q = &i ;
   cout << q << endl ;
   cout << *q << endl ;

   int *p = 0 ;
   p = &i ;
   cout << p << endl;
   cout << *p << endl ;

*/
int num = 5;
int a = num ;
cout << " a before " <<num << endl ;
a++;
cout << " a after " << num << endl;

 int *p = &num ;
 cout << " before " << num << endl ;
 (*p)++;
 cout << " ofter " << num << endl ;
//  copying a pointer 
 int *q= p;
 cout << p << "-" << q << endl ;
 cout << *p << "-" << *q << endl ;

// importent concept 

 int i = 3 ;
 int *t = &i ;
 cout << *t << endl ;
 cout << t << endl; 
 *t = *t + 1 ;
 cout << *t << endl ;
 cout << t << endl;
    return 0;
}