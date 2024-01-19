#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// by binary search
int last_Occurence(vector<int> arr, int target){
    int start=0;
    int end=arr.size()-1;
    int mid=(start+end)/2;
    int store=0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[mid]==target)
        {
            store= mid;
            start=mid+1;
         
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
    return store;
    
}




//by linear search
// int first_Occurence(vector<int> arr, int target){
//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = i+1; i < arr.size(); j++)
//         {
//             if (target==arr[j])
//             {
//                 return j;
//             }
            
//         }
        
//     }
    
// return -1;
// }

int main(){
    vector<int> a={1,2,3,4,4,4,4,4,4,5,6,5,6,7,8};
    int target=4;
    int result= last_Occurence(a,target);
    auto ans2=upper_bound(a.begin(),a.end(),target);
    cout<<"ans2 = "<<ans2-a.begin()<<endl;
    if (result==-1)
    {
        cout<<"no occurence";
    }
    else{
        cout<<"last occourence at index "<<result;
    }
    return 0;

} 