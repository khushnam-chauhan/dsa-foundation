#include<iostream>
using namespace std;

int main(){
    // int a=2;
    // int b=4;
    // cout<<a<<endl;
    // cout<<&a<<endl;
    // cout<<b<<endl;
    // cout<<&b<<endl;

    // int* aw= &a;
    // cout<<aw<<endl; // address
    // cout<<*aw<<endl;// value
    // cout<<&aw; // address of pointer
    // int* tyu=0;
    // cout<<"garbage value "<<*tyu<<endl;
    int a= 6;
    int* p= &a; // stores address of a
    int*b= p; // stores value of p which is the address of a for p.
    cout<<"a = "<<p<<endl<<"b = "<<b<<endl;


}