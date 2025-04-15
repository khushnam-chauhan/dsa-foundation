#include<iostream>
using namespace std;

void ascii(string s){
    // for(char ch : s){
    //     cout<<ch<<" ascii value: "<<int(ch)<<endl;
    // }
    int asc;
    for(char ch: s){
        if(ch>='A' && ch<='Z'){
            asc=ch-'A'+65;

        }else if(ch>='a' && ch<='z'){
            asc=ch-'a'+97;
        }
        else{
            asc=ch;
        }
        cout<<ch<<" ascii value: "<<asc<<endl;
    }
}
int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    ascii(str);
}