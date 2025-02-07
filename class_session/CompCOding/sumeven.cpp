#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int sum(vector<int> arr){
    int sum = 0;
    for(int i = 0; i < arr.size(); i++){
       if(arr[i]%2==0){
        sum+=arr[i];
       }
    }
return sum;
}


int main(){
    vector<int>arr={1,2,3,4,5,6,7,8};
    cout<<sum(arr);
}