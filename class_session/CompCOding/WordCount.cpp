#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int wordCount(string &s){
    int n=s.length();
    int count=0;
    for(char i=0;i<n;i++){
        if (s[i] != ' ' && (i == 0 || s[i - 1] == ' ')){
            count++;
        }
    }
    return count;
}

int main(){
    string s;
    getline(cin,s);
    cout<<wordCount(s);

}