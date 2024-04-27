#include<iostream>
#include<vector>
#include<string.h>
using namespace std;



int main(){
    string str;
    cin>> str; // this take only string before space 
    //khushnam chauhan o/p- khushnam
    cout<< str;
    getline(cin, str); // this take string with space
    //khushnam chauhan o/p- khushnam chauhan
    cout<< str;
    return 0;

}