#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void PrintSubs(string str, string output, int i){
    if(i>=str.length()){
        cout<<output<<endl;
        return;
    }
    //excluding
    PrintSubs(str,output,i+1);
    // including
    output.push_back(str[i]);
    PrintSubs(str,output,i+1);

}

int main(){
    string str="abc";
    string output="";
    int i=0;
    PrintSubs(str,output,i);

}