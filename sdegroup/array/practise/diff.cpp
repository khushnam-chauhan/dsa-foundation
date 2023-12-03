#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int even=0;
    int odd=0;
    int diff;
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        if (i%2==0)
        {
            even=even+arr[i];
        }
        else{
            odd=odd+arr[i];
        }
        
    }
    cout<<"even= "<<even<<endl;
    cout<<"odd= "<<odd<<endl;
    diff=odd-even;
    cout<<diff;
    return 0;
}