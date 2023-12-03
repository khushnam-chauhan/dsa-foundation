#include<iostream>
using namespace std;
int main(){
    int i,j,m,n;
    cout<<"enter rows= ";
    cin>>m;
    cout<<"enter columns= ";
    cin>>n;
    for ( i = 1; i <=m; i++)
    {
        for ( j=1;j<=n;j++)//n=4 m=4
        {
            if (i==1||i==m||j==1||j==n) //
            {
                cout<<j;

            }
            else
            {
                cout<<" ";
            }
           
            
        } cout<<endl;
    }
    
}