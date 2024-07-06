#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int targetSum(vector<int>& arr, int target){
    //base case
    if(target==0) return 0;
    if(target<0) return INT_MAX;

    int mini=INT_MAX;
    //recursive case
    for(int i=0; i<arr.size();i++){
        int ans= targetSum(arr,target-arr[i]);
        if(ans!=INT_MAX){
            mini= min(mini,ans+1);
        }
    }
    return mini;

}

int main(){
    vector<int> arr{1,2};
    int target=5;
    cout<<targetSum(arr,target);

}