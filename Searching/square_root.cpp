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

    double finalAns=result;
    int precision;
    cout<<"enter the number of decimal places you want : ";
    cin>>precision;
    double step=0.1;

    for (int i = 0; i < precision; i++)
    {
        for (double j = finalAns; j*j<=n; j=j+step)
        {
            finalAns=j;
        }
        step=step/10;
        
    }
    cout<<"after precision final ans : "<<finalAns;
    
    return 0;
}