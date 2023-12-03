#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rev=0;

    while(n>0){
        int num=n%10;
        rev=rev*10+num;
        n=n/10;

    }
    cout<<rev;
}