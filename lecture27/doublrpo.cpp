/*
#include <iostream>
using namespace std;

void print(int **p)
{
    p = p + 1;
    cout << p;
    *p = *p + 1;
}
int main()
{

    int i = 5;
    int *ptr = &i;     // creat  single pointer
    // int **ptr2 = &ptr; // creat double pointer
    // int *** ptr3 = &ptr2 ; // creat triple pointer

    // cout << i<< endl ;
    // cout << *ptr << endl ;
    // cout << *ptr2 << endl ;

    // cout << ptr << endl ;
    // cout << ptr2 << endl ;
    // cout << ptr3 << endl ;

    // cout << &ptr << endl ;
    // cout << &ptr2 << endl ;
    // cout << &ptr3 << endl ;

    // cout << ptr2 << endl;
    // print(ptr2);
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main()
{

       int first =  8 ;
       int second  =18 ;

        int *ptr =      &second ;

       cout << " -> " <<  *ptr << endl;
        *ptr = 9;

       cout << " -> " <<  *ptr << endl;



    int *p = 0 ;
    int first = 110;
    int  *p1  = &first ;
     cout << *p1 << endl;


        int first = 0;
        int second = 11;
        int *third = &second;
        cout << " third " << *third << endl;

        first = *third;
        cout << " first " << first << endl;
        *third = *third +2;
        cout << " third " << *third << endl ;


        cout << " first -> " << first << " second -> "<< second << endl;


        float f = 12.5;
        float p = 21.5;
        float *ptr = &f;
        (*ptr)++;
        cout << p << " " << f << endl ;

        *ptr = p;
        cout << *ptr << " " << f << " " << p << endl;

       int t  = 5;
       int n = 6;
       int* ptr1 = &t;
       cout << " -> " << *ptr1 << endl ;
       *ptr1 = n;
       cout << "value of t -> " << t << " value of n -> " << n << endl ;


      int arr[5] ;
      int *ptr ;
      cout << sizeof(arr) << " " << sizeof(ptr) << endl ;

      int arr1[] = {11 , 21  , 31 , 14};
      cout << arr1 << endl ;


      char arr[] = "abcde" ;
      char *p = &arr[0];
      p++;
      cout << p << endl ;


      char str[] = "babber" ;
      char *a = str ;
      cout << str[0] << " " << p[0] << endl ;



    return 0 ;
}
*/
#include <iostream>
using namespace std;
void update(int *p)
{
    *p = (*p) * 2;
}
void increment(int **p){
    ++(**p); 
}
int main()
{
    int i = 10;
    update(&i);
    // cout << i << endl;

    int first = 110;
    int *p = &first;
    int **q = &p;
    int second = (**q)++ + 9;
    //  cout << first << " " << second << endl ;

    int f = 100;
    int *ptr = &f;
   
   increment(&ptr) ;

    int **n  = &ptr ;
    int sec = ++(**n);
    int *r = *n ;
    ++(*r);
    cout << f << " " << sec << endl ;


    return 0;
}
