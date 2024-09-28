#include <iostream>
#include <algorithm>
using namespace std ;

 int  getCount(string s , string part ) {
    int count1 = 0 ;
    int count2=  0 ;
    int i = 0;
    int j = 0;
     
     while (s[i] != '\0')
     {
        count1++;
        i++;
     }
     while (s[j] != '\0')
     {
        count2++;
        j++;
     }
     return count1,  count2;
 }


int main(){

  string s;
  cout << " inter the string 1 : " << endl;
  cin >> s ;
  string part ;
  cout << "  inter the string 2 : " <<  endl ;


getCount(s ,part ) ;
     return 0 ;
}