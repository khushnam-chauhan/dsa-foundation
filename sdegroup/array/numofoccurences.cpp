#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v(6);
    for (int i = 0; i < 6; i++)
    {
        cin>>v[i];
    }
    
    int count=0;
    int n;
    cout<<"enter the number to find num of ocurence = ";
    cin>>n;
    for(int i=0;i<v.size();i++){
        if(v[i]==n){
            count++;
        }
       
    }
    cout<<"the num of occurence of element "<<n<<" is  "<<count<<" times.";
    return 0;
}