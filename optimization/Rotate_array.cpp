//  Rotate an array of n elements to the right by k steps. For example, with n= 7
//  and k = 3, the array [1,2,3,4,5,6,7] is rotated to [5,6,7,1,2,3,4].
// How many different ways do you know to solve this problem?

#include<iostream>
#include<vector>
using namespace std;
  // 1st approach
// vector<int> Rotate(vector<int> arr,int n,int k){
//     vector<int> arr1(n);
//     for(int i=0;i<n;i++){
//         arr1[i]=arr[n-k+i];
//     }
//     int j=0;
//     for(int i=k;i<n;i++){
//         arr1[i]=arr[j];
//         j++;
//     }
//     return arr1;
// }


// second approach
void Reverse(vector<int>& arr, int s, int e){
    while(s<e){
        int temp= arr[s];
        arr[s]= arr[e];
        arr[e]=temp;
        s++;
        e--;
    }
}

void Rotate(vector<int>& arr,int n,int k){
    k=k%n;
    Reverse(arr,0,n-1);
    Reverse(arr,0,k-1);
    Reverse(arr,k,n-1);
}

int main(){
    cout<<"enter n = "<<endl;
    int n;
    cin>>n;
    vector<int> arr(n);
    cout<<"enter elements"<<endl;
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter k steps to rotate"<<endl;
    int k;
    cin>>k;
    Rotate(arr,n,k);
    for(auto i: arr){
        cout<<i<<" ";
    }
    return 0;
}