#include<iostream>
#include<vector>
#include<algorithm>
#include <climits>
using namespace std;

void findMax(int arr[], int i, int n, int& maxi){
    if(i>=n)
        return;
    if(arr[i]>maxi){
        maxi=arr[i];
    }
    findMax(arr,i+1,n,maxi);
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxi=INT_MIN;
    int i=0;
    findMax(arr,i,n,maxi);
    cout<<maxi;

}