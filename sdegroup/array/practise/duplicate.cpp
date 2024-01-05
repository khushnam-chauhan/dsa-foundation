#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findDuplicate(vector<int>& nums){
    // sort(nums.begin(),nums.end());
    // for (int i = 0; i < nums.size()-1; i++)
    // {
    //     if(nums[i]==nums[i+1]){
    //         return nums[i];
    //     }
    // }
    // return -1;

    //positioning method
  while (nums[0]!=nums[nums[0]])
  {
    swap(nums[0],nums[nums[0]]);
  }
  return nums[0];
    
    
}

int main(){
    vector<int> nums={1,2,3,4,3};
    int result=findDuplicate(nums);
    cout<< result;
    return 0;
}