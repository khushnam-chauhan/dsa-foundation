#include<iostream>
#include <cstring>
using namespace std;

int getLength(char name[]){
    int i=0;
    int length=0;
    while(name[i]!='\0'){
        length++;
        i++;
    }
    return length;
    

}

int main(){
    char name[100];
    cout<<"what is your name: ";
    cin.getline(name,50);
    int len=getLength(name);
    cout<<"length of the name is: "<< len<< endl;
    cout<<"length of the name is: "<< strlen(name)<< endl;
    return 0;


}