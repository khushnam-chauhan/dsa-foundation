#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void toUppercase(char arr[]){
    int n= strlen(arr);
    for(int i=0; i<n; i++){

        if (arr[i]>='a' && arr[i]<='z')
        {
           arr[i]= arr[i]-'a'+'A';
        }
        
        
    }
    

}

int main(){
    char name[100]= "kHUshnam";
    toUppercase(name);
    cout<<" you name is " << name <<endl;
    return 0;
}