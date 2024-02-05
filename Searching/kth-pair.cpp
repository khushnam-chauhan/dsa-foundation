#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int kPairs(vector<int> v, int k){
    int pair;
    int i=0;
    int j=i+1;
    int ans=0;
    while (i<j)
    {
        if (abs(v[i]-v[j])==k)
        {
            ans++;
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
    return ans;
    

}

int main(){

    vector<int> arr={1,1,3,4,5};
    int k=2;
    int result=kPairs(arr,k);
    cout<<result;
    return 0;
}
