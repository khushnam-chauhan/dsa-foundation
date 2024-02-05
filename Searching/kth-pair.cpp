#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int kPairs(vector<int> v, int k){
    int i=0;
    int j=i+1;
    set<pair<int,int>> ans;
    while (j < v.size())
    {
        if (abs(v[i]-v[j])==k)
        {
            ans.insert({v[i], v[j]});
            i++;
            j++;
        }
        else if(abs(v[i]-v[j])>k){ 
            i++;
        }
        else{
            j++;
        }
       
        
        
    }
    int count=ans.size();
    return count;
    

}

int main(){

    vector<int> arr={1,1,1,1,1};
    int k=0;
    int result=kPairs(arr,k);
    cout<<result;
    return 0;
}
