// indexing qs

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int odd_appearing(vector<int> arr){
    int start=0;
    int end=arr.size()-1;
    int mid=(start+end)/2;
    while (start<=end)
    {
        if (start==end)
        {
            return start;
        }
        
        if ((mid%2)==0 )
        {
            if (arr[mid]==arr[mid+1])
            {
                start=mid+2;
            }
            else{
            end=mid;
            }

        }
        else 
        {
            if( arr[mid]==arr[mid-1]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            
        }
        mid=(start+end)/2;
    }
    return -1;

}

int main(){
    vector<int>arr={1,1,2,2,1,1,2,2,13,1,1,40,40,13,13};
    int result=odd_appearing(arr);
    cout<<"the odd appearing num is  "<<arr[result];
    return 0;


}