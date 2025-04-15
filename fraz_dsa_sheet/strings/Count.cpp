//Count the number of words in a string.
#include<iostream>
using namespace std;

int count(string s){
    if(s.empty()) return 0;
    int count = 1;
    bool isSpace=false;
    for(char ch:s){
        if(ch==' '){
            if(!isSpace) count++;
            isSpace=true;
        
        }
        else isSpace=false;
    }
    return count;
}
int main(){
    string s;
    getline(cin,s);
    cout<<count(s);
}