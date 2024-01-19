#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binarySearch(vector<int> arr,int target){
    int start=0;
    int end=arr.size()-1;
    int mid=(start+end)/2;
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[mid]==target){
            return mid;
        }
        else if (target>arr[mid])
        {
            start=mid+1;
        }
        else if (target<arr[mid])
        {
            end=mid-1;
        }
        mid=(start+end)/2;
        
    }
    return -1;
    
}
int main(){
    vector<int> a={1,2,3,4,5,6,7,8,9};
    int target;
    cout<<"enter the target = ";
    cin>>target;
    
    // with algorithm
    // if(binary_search(a.begin(),a.end(),3)){
    //     cout<<"found";
    // }else{
    //     cout<<"not found";
    // }

    int result=binarySearch(a,target);
    if (result==-1){
        cout<<"element not found";

    }
    else{
        cout<<"element found at index "<<result;
    }
    return 0;
}


