// nearly sorted array is if element exist in i or i-1 or i+1

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int nearly_sorted(vector<int> arr,int target){
    int start=0;
    int end=arr.size()-1;
    int mid=(start+end)/2;
    while (start<=end)
    {
        if(arr[mid]==target){
            return mid;
        }
         else if(arr[mid-1]==target){
            return mid-1;
        }
         else if(arr[mid+1]==target){
            return mid+1;
        }
        //+2 and -2 bcuz we already have searched the next and previous element to mid
        else if (arr[mid]>target)
        {
            end=mid-2;
        }
        else{
            start=mid+2;
        }
        mid=(start+end)/2;

    }
    return -1;
    
}

int main(){
    vector<int> arr={10,3,40,20,50,80,70};
    int target=80;
    int result=nearly_sorted(arr,target);
    if (result==-1)
    {
        cout<<"not found";
    }
    else{
        
    cout<<"the element found at "<<result;
    
    }
    
    return 0;
}