#include<iostream>
#include<vector>
using namespace std;

void print(int arr[],int n,int i){
    if(i>=n)
        return;
    cout<<arr[i]<<" ";
    print(arr,n,i+1);
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    print(arr,n,i);

}