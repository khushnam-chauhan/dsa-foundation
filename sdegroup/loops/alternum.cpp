#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for ( i = 1; i <=n; i++)// n=4
    {
        for ( j = i; j <=n; j++)
        {
            cout<<j;

        }
        for ( j = 1; j <i; j++)
        {
            cout<<j;
        }
        
        cout<<endl;

        
    }
    
}