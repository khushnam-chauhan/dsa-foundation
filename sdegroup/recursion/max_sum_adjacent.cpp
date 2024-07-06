#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

void maxSum(vector<int>& v, int i, int sum, int &maxi){
    if(i>=v.size()){
        maxi= max(sum, maxi);
        return;
    }
    // include
    maxSum(v, i+2,sum+v[i],maxi);
    // exclude
    maxSum(v,i+1,sum,maxi);

}

int main(){
    vector<int> arr{2,1,4,9};
    int sum=0;
    int i=0;
    int maxi=INT_MIN;
    maxSum(arr,i,sum,maxi);
    cout<<maxi;
}