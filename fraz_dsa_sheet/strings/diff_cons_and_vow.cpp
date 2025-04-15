//Find the difference between the number of consonants and vowels.
#include<iostream>
using namespace std;

int diff(string s){
    int num1=0, num2=0;
    for(auto ch:s){
        if(ch=='a'|| ch=='e' || ch=='i' || ch=='o'|| ch=='u' || ch=='A'|| ch=='E' || ch=='I' || ch=='O'|| ch=='U'){
            num2++;
        }else{
            num1++;
        }
    }
    return abs(num1-num2);
}
int main(){
    string s;
    cout<<"enter the string"<<endl;
    cin>>s;
    cout<<diff(s);
    
}