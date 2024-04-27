#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

bool palindrome(char str[]){
    int n= strlen(str);
    int strt=0;
    int end=n-1;
    while(strt<=end){
        if(str[strt]!=str[end]){
            return false;
        }
        strt++;
        end--;
       
    }
    return true;
}

int main(){
    char word[100];
    cin>>word;
    bool res= palindrome(word);
    if(res){
        cout<<"it is pallindrome";
    }
    else{
        cout<<"it is not pallindrome";
    }
    return 0;
}