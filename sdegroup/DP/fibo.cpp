
// topbottom approach or memoization - this is recursive


#include<iostream>
#include<vector>
using namespace std;

int fibdp(int n, vector<int>& memo){
    if(memo[n]!=-1) return memo[n];
    if(n<=1) return n;
    memo[n]= fibdp(n-1,memo)+fibdp(n-2, memo);
    return memo[n];

}

// bottomup approach or tabulation - this is iterative 

int bottomup(int n){
    if(n<=1) return n;
    vector<int> dp(n+1,0);
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]= dp[i-1]+dp[i-2];
    }
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    vector<int> memo(n+1,-1);
    cout<<"result: "<< fibdp(n, memo)<< endl;
    cout<<"result bottomup: "<< bottomup(n);


}


