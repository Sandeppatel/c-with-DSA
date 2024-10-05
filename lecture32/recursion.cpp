// ====== recurcive source of destination ==============
/*
#include <iostream>
using namespace std ;

void  rechHome(int dest , int src ){

cout << " source  " << src << " destination " << dest << endl;
    if( dest == src) {
        cout << " done : " ;
        return ;
    }
    src++;
    rechHome(dest , src ) ;
}
int main() {

    int dest , src ;
    cin >> dest >> src;
    rechHome(dest , src) ;

    return 0 ;
}
*/
/*
#include <iostream>
using namespace std ;
void digitSum(int n){
    if(n ==0 ){
        return ;
    }
   while (n !=0 )
    {
      int rem = n%10;
       cout << rem << " " ;
      n = n /10 ;
    }
}
 int main(){
    int n;
    cin >> n;

    digitSum(n);
 }
*/
#include <iostream>
using namespace std;
void sayDigit(int n, string arr[])
{
    if (n == 0)
    {
        return;
    }

    int rem = n % 10;
     n = n / 10;

    sayDigit(n, arr);
    cout << arr[rem] << " " ;
}
int main()
{
    string arr[10] = {"zero", "one", "two", "three", "fore", "five", "six", "seven", "eight", "nine"};

    int n;
    cin >> n;
    cout << endl ;


    sayDigit(n, arr);
    cout << endl ;
}