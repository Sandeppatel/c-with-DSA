/*

#include <iostream>
using namespace std ;
int factorial(int n){
    if(n == 0){
        return 1;
    }
 int fact = 1;
    for(int i = 1; i <= n; i++){
        fact = fact * i ;
    }
    return fact ; 
   
  int choti = factorial(n-1);
   int badi = n * choti ;
   return badi ;
   
  return n * factorial(n-1);
}
int main() {

    int n;
    cin >> n ;
    int ans = factorial(n);
    cout << ans << endl; 
    return 0;
}
*/
/*
// ========= power number ========
#include <iostream>
using namespace std ;
int power(int n){
    if(n == 0){
        return 1;
    }

    int chotinu = power(n-1);
    int badi = 2 * chotinu ;
    return badi ;
}
int main(){
   int n;
   cin >> n;

   int ans = power(n);
   cout << " power of n : " << ans << endl;
return 0;
}
*/
// ========= power number ========

#include <iostream>
using namespace std ;
int print(int n){
    if(n == 0){
        return 1;
    }
    print(n-1);

    cout << n << " " ;

}
int main(){
   int n;
   cin >> n;
   print(n) ;
}