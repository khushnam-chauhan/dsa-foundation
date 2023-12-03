#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v(6);
    for (int i = 0; i < 6; i++)
    {
        cin>>v[i];
    }
    
    int last=0;
    int n;
    cout<<"enter the number to find last ocurence = ";
    cin>>n;
    for(int i=0;i<v.size();i++){
        if(v[i]==n){
            last=i;
        }
       
    }
    cout<<"the last occurence of element "<<n<<" is at "<<last;
    return 0;
}