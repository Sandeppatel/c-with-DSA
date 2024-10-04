/*
#include <iostream>
using namespace std ;

void update(int& n){
    n++;
}
void updates(int& n){
    n++;
}
/*
//  done same case hai
int& func(int a){
    int num = a;
    int& ans =  num ;
    return ans ;
}
//  is case me  jo int* -> yah worning de dega 
int* fun(int n){
    int* ptr = &n ;
    return ptr ;
}
int main(){
    int n =5;
/*
    int i =  5 ;
    int& j  = i ;
    cout <<  " - > " << i << endl ;
    i++;
    cout << "-> " << i << endl ;
    j++;
    cout << " -> " << j << endl ;
    cout << " -> " << i << endl ;

    cout << " after-> " << i  << j << endl;
    update(i);
    cout << " after-> " << i << endl;
    update(i);

    cout << " before -> " << i << endl;
    int n = func(i);
     cout <<" kya hota hai - > " <<  n;
     
//    fun(n);
    //  func(n); 
    return  0 ;
}
*/

#include <iostream>
using namespace std ;

int getSum(int *arr, int n){
    int sum = 0 ;
    for(int i = 0; i < n; i++){
        sum +=  arr[i] ;
    }
    return sum ;
}

int main(){
/*
char  ch = 'q' ;
cout << sizeof(ch) << endl ;
   char*  c =        &ch ;
   cout << sizeof(c) << endl ;
   int * i = new int ;
   cout << sizeof(i) << endl ;
   */
  int n;
  cin >> n;
  int * arr =new int[n];

  for(int i =0; i <n; i++){
    cin >> arr[i] ;
  }
 int ans =  getSum(arr,  n);

 cout << "answre is s -> " << ans << endl ;

//  variable banana
while (true)
{
    int i  = 5 ;
}

 while (true)
 {
    int* ptr = new int ;
 }
 


    return 0 ;
}