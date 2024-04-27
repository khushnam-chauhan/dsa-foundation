#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void toLowercase( char arr[]){
    int n = strlen(arr);
    
    
    for (int i=0; i<n; i++){
        if (arr[i]>='a' && arr[i]<='z')
    {
       i;
    }
    else{
        arr[i]=arr[i]-'A'+'a';
    }
        

    }

}

int main(){
    char name[100] ="KHuSHNAM";
    toLowercase(name);
    cout<<"in lowercase :"<<name<<endl;


}