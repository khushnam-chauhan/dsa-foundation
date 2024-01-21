#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int square_root(int num){
    int start=0;
    int end=num;
    int mid=(start+end)/2;
    int ans=0;
    while (start<=end)
    {
        if ((mid*mid)>num)
        {
            end=mid-1;
        }
        else if ((mid*mid)<num)
        {
            ans=mid;
            start=mid+1;
        }
        else if ((mid*mid)==num)
        {
            return mid;
        }
        mid=(start+end)/2;
    }
    return ans;
    
}
int main(){
    int n;
    cout<<"enter the number to get square root : ";
    cin>>n;
    int result=square_root(n);
    cout<<result;
    return 0;
}