//Convert uppercase to lowercase and vice versa in a string.
#include<iostream>
#include<string>
using namespace std;

void caser(string s){
    for(auto ch:s){
        if(ch>='A' && ch<='Z'){
            cout<<char(ch+32);
        }else{
            cout<<char(ch-32);
        }
    }

}
int main(){
    string s;
    cin>>s;
    caser(s);

}