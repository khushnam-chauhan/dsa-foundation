#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(int n)
{
    if(n==1){
        cout<<1<<" ";
        return;
    }
    print(n-1);
    cout<<n<<" ";

    // for descending order
    // cout<<n<<" ";
    // print(n-1);

}

int main(){
    int n=5;
    print(n);
    return 0;

}


