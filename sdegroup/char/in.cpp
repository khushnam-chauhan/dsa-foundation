#include<iostream>
#include<string.h>
using namespace std;

int getlength(char name[]){
    int i=0;
    int length=0;
    while(name[i]!='\0'){
        length++;
        i++;
    }
    return length;
}
int main(){
    char ch[100];
    // cin>>ch;
    cin.getline(ch,50); // to get whole name
    cout<<"the char is "<<ch<<endl;
    int len=getlength(ch);
    cout<<"length : "<< len<<endl;
    cout<<"inbuilt func length: "<<strlen(ch)<<endl;

    // for length
}