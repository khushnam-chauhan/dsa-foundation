#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int main(){
    int a=5;
    int * p= &a;
    int ** c= &p;
    cout<< a<<endl;
    cout<< *p<<endl;
    cout<< p<<endl;
    cout<< **c<<endl;
    cout<< c<<endl;

}