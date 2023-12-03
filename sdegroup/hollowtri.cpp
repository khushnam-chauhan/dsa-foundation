#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;
    cout<<"enter the number of rows you want : ";
    cin>>n;
    cout<<"enter the number of columns you want :";
    cin>>m;
     for (int i = 1; i <= n; i++)
     {
        for ( j = 1; j <=m; j++)
        {
              if (i==1 || i==n || j==1 || j==m){  // i=1
                cout<<"*";//
              }
              else {cout<<" ";
              }
        
        }cout<<endl;
        
      
     }
     



} 