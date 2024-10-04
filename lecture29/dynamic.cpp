#include <iostream>
using namespace std ;
int main(){
    /*
    // single name example n
    int n;
    cout << " inter the number " << endl ;
    cin >> n;
    //  creating a 2D array
    int** arr = new int*[n] ;
    for(int i = 0; i< n ; i++){
        arr[i] = new int[n];
    }
    //  creating done
    //  taking input
    for(int i = 0 ; i<n; i++){
        for(int j =0; j<n; j++){
            cin >> arr[i][j] ;
        }
    }
    //  printing array
    cout << endl ;
    for(int i = 0 ; i<n; i++){
        for(int j =0; j<n; j++){
           cout << arr[i][j] << " " ;
        }
        cout << endl;
    }
    */




//  two different variable     

  int n , m ;
  cout << " inter the value n and m " << endl ;
  cin >> n >> m ;
//  creating 2D array done 
  int** arr = new int*[n] ;
  for(int i = 0; i < n; i++){
    arr[i] = new int[m];
  }
//  input
  for(int i =0 ; i< n; i++){
    for(int j = 0; j <m ; j++){
        cin >> arr[i][j] ;
    }
  }
//    printing 
  cout << endl; 
  for(int i =0 ; i < n; i++){
    for(int j =0 ; j < m; j++){
        cout << arr[i][j] << " " ;
    }
    cout << endl; 
  }
//   releasing 

for(int i =0 ; i < n; i++){
    delete [] arr[i] ;
}
delete []arr ;
    return 0;
}