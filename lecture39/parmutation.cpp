#include <iostream>
using namespace std ;
void permutation(string str , int left , int right){
//  base case
if(left == right){
    cout << str << endl; 
}else{
    for (int  i = left; i <=right; i++)
    {
       swap(str[left] , str[i]);
       permutation(str ,  left+1 , right);
       swap(str[left] , str[i]);

    }  

}
}

int main(){
    string str = "abc" ;
    int n = str.length();
    permutation(str , 0 , n-1);
}
/*
// leet code 
class Solution {
    private :
    void solve(vector<int> nums , vector<vector<int>>& ans , int left){
         if(left >= nums.size()){
            ans.push_back(nums);
            return ;
         }
            for(int i = left ; i < nums.size(); i++){
               swap(nums[left] , nums[i]);
               solve(nums , ans , left+1);
               swap(nums[left] , nums[i]);
        
         }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
      vector<vector<int>> ans ;
      int left = 0 ;
      solve(nums , ans , left);
      return ans ;
      }
};*/