#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int missing(vector<int> arr){
    int start=0;
    int end=arr.size()-1;
    int mid=(start+end)/2;
    int ans=0;
    for (int i = 0; start<=end; i++)
    {
        if ((mid+1)!=arr[mid])
        {
            ans= mid+1;
            end=mid-1;

        }
        else {
            start=mid+1;
        }
        mid=(start+end)/2;

        
    }
    return ans;
    
}

int main(){
    vector<int> a={1,2,3,4,6,7,8,9};
    int result= missing(a);
    cout<<"the missing element is "<<result;
}