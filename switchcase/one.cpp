/*
#include<iostream>
using namespace std ;
int main(){

    
    int arr[] = {1 ,2 , 3 , 4 , 5} ;
    int length = sizeof(arr)/ sizeof(int) ;
    for (int  i = 0; i <length; i++)
    {
        switch (i)
        {
        case 1:
            cout << " one person " << endl;
            break;
        
        case 2:
            cout << " two person " << endl;
            break;
        
        case 3:
            cout << " therr person " << endl;
            break;
        
        default:
        cout << " it is defoultt value " ;
            break;
        }
    }
    return 0 ;
} */

#include<iostream>
using namespace std ;
int main(){

    
    int arr[] = {1 ,2 , 3 , 4 , 5} ;
    int length = sizeof(arr)/ sizeof(int) ;
    for (int  i = 0; i <length; i++)
    {
        if (i == 3)
        {
            continue ;
        }
        else {
            cout << " free of cost "  << endl  ; 
        }
        
    }
        return 0 ;
    }