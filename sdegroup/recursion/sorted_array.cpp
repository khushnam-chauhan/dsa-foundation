#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool sorted(vector<int> &arr, int& n, int i){
    if(i== n-1) return true;
    if(arr[i]>arr[i+1]){
            return false;
        }
    
    return sorted(arr, n,i+1);
}

int main(){
    vector<int>arr{1,2,3,6,4,5};
    int n= arr.size();
    int i=0;
    bool istrue=sorted(arr,n,i);
    if(istrue) {
        cout<< "sorted";
    }
    else {
        cout<<"not sorted";
    }
}