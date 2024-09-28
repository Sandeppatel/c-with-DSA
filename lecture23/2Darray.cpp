#include <iostream>
using namespace std;

/*  2D array found and not found program  */
bool ispresent(int arr[3][4], int target, int row, int col)
{

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

/* row wise of sum element */

void printColSum(int arr[][4], int row, int col)
{
    cout << " printing sum " << endl;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
}

/* longest row of sum 
12 61 20 ans : 61 
*/

void largestRowSum(int arr[][4], int row, int col)
{
    int maxi = INT8_MIN;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }

        if (sum > maxi)
        {
            maxi = sum;
        }
    }
    cout << " the maximum sum is : " << maxi << endl;
}

void printArr(int arr[][4], int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void rowColWise(int arr[][4] , int row , int col) {
        /* taking input -> row wise input */

  for (int  i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }

    }
        /* taking input -> col wise input */

        for (int  col = 0; col < 4; col++)
    {
        for (int  row = 0; row < 3; row++)
        {
            cin >> arr[row][col];
        }

    }
    

        for (int  col = 0; col < 4; col++)
        {
            for (int row = 0; row < 3; row++)
            {
                cout << arr[col][row] << " " ;
            }
            cout << endl ;

        }
            cout << endl ;
        for (int  col = 0; col < 4; col++)
        {
            for (int row = 0; row < 3; row++)
            {
                cout << arr[row][col] << " " ;
            }
            cout << endl ;

        }
            cout << endl ;
}
/* question 
1      2    5
3      4    6
print - > 1  , 3 , 4 , 2 ,  5  , 6
print like A Wave 


time complexty = it is 2D array  n * m ek  forward and reverse chalte hai == O(n*m)
*/

void printWave(int arr[][4] , int row , int col) {

    for (int  col = 0; col < 4; col++)
    {            
        if (col % 2 == 0)
        {
            for (int  row = 0; row < 3; row++)
            {
                 cout << arr[row][col] << " "  ;
            }
            
        }
        else{
            for (int  row = 3-1; row >=0; row--)
            {
                 cout << arr[row][col] << " "  ;
                
            }
            
        }
        
       
        
    }
    cout << endl ;
    
}
/* ispiral print importent question */

void isPiral(int arr[][4] , int row , int col) {
    cout << " hello " ;
}



int main()
{
    //  creat a 2D array
    int arr[3][4] = {5,8,4,6,2,8,9,1,4,2,4,7};
    cout << " inter your input  : " << endl;
    
   printArr(arr, 3 , 4) ;

    cout << " inter the element to search  " << endl;
    int target;
    cin >> target;
    if (ispresent(arr, target, 3, 4))
    {
        cout << " element found : " << endl;
    }
    else
    {
        cout << " not found : " << endl;
    }

    printColSum(arr, 3, 4);

    largestRowSum(arr, 3, 4);

    printWave(arr, 3, 4) ;
    return 0;
}