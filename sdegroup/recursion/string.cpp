#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int checkKey(string& str, int i, int& n, char& key){
    if(i>=n)
        return -1;
    if(str[i]==key)
        return i;
    return checkKey(str, i+1, n, key);
}

int main(){
    string str="khushnam";
    char key= 'a';
    int n=str.length();
    int i=0;
    int ans= checkKey(str,i,n,key);
    cout<<ans;
}