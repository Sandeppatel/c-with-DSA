#include <iostream>
using namespace std;

char toLowerCase(char ch) { 
    if (ch >= 'a' && ch <= 'z')
    {
        return ch ;
    }else{
        char temp = ch-'A' + 'a' ;
        return temp ;
    }
    
}

//   charracter revers 
void reverse(char a[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(a[s], a[e]);
        s++;
        e--;
    }
}
//   check palindrome or not

bool checkPalindrome(char a[], int n) {
    int s = 0;
    int e = n - 1;
    while (s <= e) {
        if (a[s] != a[e]) {
            return false;  
        }
        s++;
        e--;
    }
    return true;  
}

 
//   lenght

int getCount(char a[])
{
    int count = 0;
    int i = 0;
    while (a[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}

//  printing arr
void printArray(char a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    cout << endl;
}

int main()
{
    char name[20];
    cout << " inter your name :" << endl;
    cin >> name;

    cout << getCount(name) << endl;
    int len = getCount(name);

    printArray(name, len);

    reverse(name, len);

    printArray(name, len);

  int yes =   checkPalindrome(name,  len) ;
  cout << " it is a palindrone or not : " <<   yes << endl ; 



   cout  << " lowercase : " << toLowerCase('b') << endl ;
   cout  << " upper case : " << toLowerCase('C') << endl ;

    return 0;
}