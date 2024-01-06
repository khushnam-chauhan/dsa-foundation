#include<iostream>
#include<algorithm>
#include <unordered_map>
using namespace std;
int repeating(int arr[],int n){
    // for (int  i = 0; i < n; i++)
    // {
    //    for (int j = i+1; j < n; j++)
    //    {
    //     if(arr[i]==arr[j])
    //         return i+1;
    //    }
       
    // }
    // return -1;

    // using hash
    unordered_map<int,int> hash;
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (hash[arr[i]]>1)
        {
            return i+1;
        }
        
    }
    
    return -1;
    

}
int main(){
    int a[]={1,5,3,5,3,2};
    int n= sizeof(a)/sizeof(a[0]);
    int result=repeating(a,n);
    cout<<result;
    return 0;


}