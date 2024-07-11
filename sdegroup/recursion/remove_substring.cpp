#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
// with recursion
void removeSubstr(string& s, string& part){
    int found= s.find(part);
    if(found!=string::npos){
        string left=s.substr(0,found);
        string right=s.substr(found+part.length(), s.length());
        s= left+right;
        removeSubstr(s,part);
    }else{
        return;
    }

}
// without recursion or by iterating (more optimal solution)
void removeSubstr2(string& s, string& part){
    int found= s.find(part);
    while(found!=string::npos){
        s.erase(found,part.length());
        found= s.find(part);
    }
    
}


int main(){
    string s="dsabchjabcks";
    string part= "abc";
    removeSubstr2(s,part);
    cout<<s;

}

