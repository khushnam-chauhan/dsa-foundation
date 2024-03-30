#include<iostream>
#include<cstring>
using namespace std;

void ReplaceSpace(char arr[]){
    int i=0;
    int n=strlen(arr);
    for(int i=0;i<n;i++){
        if(arr[i]==' '){
            arr[i]='@';
        }
    }
    

}

int main(){
    char name[100];
    cout<<"Enter your Name: ";
    cin.getline(name,100);
    ReplaceSpace(name);
    cout<<"after replacing space: "<<name<<endl;
    return 0;

}