#include<iostream>
using namespace std;

int fact(int n){
    // base case
    if(n==0)
     return 1;
    
    // recursive case
    return n*fact(n-1);

}

int main(){
    int n=5;
    cout<<fact(n)<<endl;
}