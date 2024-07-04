#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binary_search(vector<int> v, int s, int e, int target)
{
    if(s>e) return -1;
    int mid= (s+e)/2;
    if(v[mid]==target) return mid;
    if(v[mid]>target) return binary_search(v,s,mid-1,target);
    return binary_search(v,mid+1,e,target);

}

int main(){
    vector<int>v{1,2,3,4,5,6,7};
    int n= v.size();
    int s=0;
    int e=n-1;
    int target=4;
    int ans=binary_search(v,s,e,target);
    cout<<ans;

}