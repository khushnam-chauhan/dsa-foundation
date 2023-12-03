#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(5);
    for (int i = 0; i < 5; i++)
    {
        cin>>v[i];
    }
    int x;
    cout<<"enter to num = ";
    cin>>x;
    int greater=0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]>x)
        {
            greater++;
        }
        
    }
    cout<<"num of elements greater = "<<greater;
}