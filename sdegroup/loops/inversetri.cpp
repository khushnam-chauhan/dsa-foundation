#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter the number :";
    cin>>n;
    for(i=n;i>0;i--){
        for ( j = i;j>0 ; j--)
        {
            cout<<"*";

        }cout<<endl;

        
    }
}