#include <cmath>
#include <cstdio>
#include <vector>
#include <unordered_set>
#include <iostream>
#include <algorithm>
using namespace std;

bool pairSum(vector<int>& arr,int k){
    unordered_set<int> map;
    for(int i=0; i<arr.size();i++){
        map.insert(arr[i]);
    }
    for(int i=0;i<arr.size();i++){
        int ans= k-arr[i];
        if(map.find(ans)!=map.end()){
            return true;
        }
    }
    return false;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool ans=pairSum(a,k);
    if(ans){
        cout<<"Y";
    }else{
        cout<<"n";
    }
    return 0;
}
