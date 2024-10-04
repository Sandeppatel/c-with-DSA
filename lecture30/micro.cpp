//  =========== micro -> a picu of code in a program that is replaud by value of macro
/*
#include <iostream>
using namespace std;

#define PI 3.14  // Removed the semicolon here

int main(){
    int r = 5;
    double area = PI * r * r;
    cout << "Area is " << area << endl;
    return 0;
}
*/
/*
// ========= globle variabal =========
#include <iostream>
using namespace std;
int score = 15;
void a(int i)
{
    cout << " in a -> " << score << endl;
    cout << i << endl;
}
void b(int i)
{
    cout << " in a -> " << score << endl;
    cout << i << endl;
}
void c(int i)
{
    cout << " in a -> " << score << endl;
    cout << i << endl;
}

int main()
{
    cout << " in a -> " << score << endl;
    int i = 5;
    a(i);
    b(i);
    c(i);
    cout << i << endl;
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

void print(int n , int m) {
     n++;
     m++;
     cout << n <<" " << m << endl ;
}


int main(){
   int a = 1 , b = 2 ;
   a = a++ ;
   b = b++ ;
   print(a , b) ;
  cout << " answre is "  << a << " -  " << b << endl ;
    return 0;
}
  
*/
/*
inline funcation 

#include <iostream>
using namespace std;

int getMax(int& a , int& b) {
 return (a > b) ? a : b ;
}

int main() {
    int a = 1 , b = 2 ;
    int ans  = 0 ;
    ans = getMax(a , b) ;
    cout << ans  << endl ;
    a = a + 3 ;
    b = b + 1 ;
    ans = getMax(a ,b);
    cout << ans << endl ;
}
*/
//  deault argument

#include <iostream> 
using namespace std ;
void print(int arr[] , int n , int start = 0){
    for (int  i = 0; i < n; i++)
    { 
        cout << arr[i] << endl ;
    }
    
}

int main(){
    int arr[5] = {1 , 2 , 3 , 4 , 5};
    int size = 5 ;
    print(arr , size );
    cout << endl ;
    return 0;
}
