#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// void last(string& s, char a, int i, int &ans){   //left to right
//     // base case
//     if(i>=s.size()) return;
//     // recursive case
//     if(s[i]==a){
//         ans=i;
//     }
//     last(s,a,i+1,ans);

// }
// approach 2

void last(string& s, char a, int i, int &ans){          // right to left
    // base case
   
    if(i<0) return;
    // recursive case
    if(s[i]==a){
        ans=i;
        return;
    }
    last(s,a,i-1,ans);
    

}

int main(){
    string s="abcdeabdsdf";
    char a='d';
    int n= s.size();
    int i=n-1;
    int ans=0;
    last(s,a,i,ans);
    cout<<ans;
    return 0;

}