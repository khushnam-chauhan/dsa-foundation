#include<iostream>
#include<cstring>
using namespace std;

void reverseStr(char arr[]){
    int i=0;
    int n=strlen(arr);
    int j=n-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;chaman
        j--;
    }
}

int main(){
    char name[100];
    cout<<"name : ";
    cin.getline(name,100);
    cout<<"initial : "<<name<<endl;
    reverseStr(name);
    cout<<"final after reverse: "<< name<<endl;
    return 0;
}