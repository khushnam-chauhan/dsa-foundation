#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int divide(int n,int divisor){
    int start=0;
    int end=abs(n);
    int ans=1;
    int mid=(start+end)/2;
   while (start<=end)
   {
    // basic maths- quotient*divisor+rem=dividend
    if (abs(mid*divisor)==abs(n))
    {
        ans= mid;
        break;
    }
    else if(abs(mid*divisor)>abs(n)){
        end=mid-1;
    }
    else{
        ans=mid;
        start=mid+1;
    }
    mid=(start+end)/2;
    
   }
   if ((divisor>0 && n>0)||(divisor<0 && n<0))
   {
    return ans;
   }
   else{
    return -ans;
   }
   
    
}
int main(){
    int n;
    cout<<"enter the number to divide : ";
    cin>>n;
    int divisor;
    cout<<"enter the divisor : ";
    cin>>divisor;
    int result=divide(n,divisor);
    cout<<"ans : "<<result;
}