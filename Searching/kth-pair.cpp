#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

// two pointers approach
// int kPairs(vector<int> v, int k){
//     int i=0;
//     int j=i+1;
//     set<pair<int,int>> ans;
//     while (j < v.size())
//     {
//         if (abs(v[i]-v[j])==k)
//         {
//             ans.insert({v[i], v[j]});
//             i++;
//             j++;
//         }
//         else if(abs(v[i]-v[j])>k){ 
//             i++;
//         }
//         else{
//             j++;
//         }
       
        
        
//     }
//     int count=ans.size();
//     return count;
    

// }

//binary search approach
int bs(vector<int> &v,int start,int k ){
    int end=v.size();
    while (start<end)
    {
        int mid=(start+end)/2;
        if (v[mid]==k)
        {
            return mid;  
        }
        else if(k>v[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        
    }
    return -1;
    

}
int kPairs(vector<int> &v, int k){
    sort(v.begin(),v.end());
    set<pair<int,int>> ans;
    for (int i = 0; i < v.size(); i++)
    {
        if (bs(v,i+1,(v[i]+k))!=-1)
        {
            ans.insert({v[i],(v[i]+k)});
        }
        
    }
    return ans.size();
    

}

int main(){

    vector<int> arr={1,1,1,1,1};
    int k=0;
    int result=kPairs(arr,k);
    cout<<result;
    return 0;
}
