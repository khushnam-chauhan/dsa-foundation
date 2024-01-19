#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int total_occurence(vector<int> arr,int target){

// last occurence - first occurence= total occurence  

   auto lower=lower_bound(arr.begin(),arr.end(),target);
   auto upper=upper_bound(arr.begin(),arr.end(),target);
   int total=upper-lower;
   return total;
    
}

int main(){
    vector<int> a={1,2,3,4,5,5,5,5,5,5,6,6,6,7,7};
    int target=6;
    int result=total_occurence(a,target);
    cout<<"total occurence of "<<target<<" is : "<<result;
    return 0;
     
}