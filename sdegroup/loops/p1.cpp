#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;
    cout<<"enter the number of rows you want : ";
    cin>>n;
    cout<<"enter the number of columns you want :";
    cin>>m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    

}