#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// brute force approach
// bool isprime(int n){
//     if(n<=1){
//         return false;
//     }
//     for (int i = 2; i < n; i++)
//     {
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int count_prime(int n){
//     int c=0;
//     for (int i = 0; i < n; i++)
//     {
//         if (isprime(i))
//         {
//             c++;
//         }
        
//     }
//     return c;
    
// }

int count_prime(int n){
    if (n==0) return 0;

    vector<bool> prime(n, true);
    prime[0]=prime[1]=false;
    int ans=0;
    for (int i = 2; i < n; i++)
        {
            if(prime[i]){
                ans++;

                int j= 2*i;
                while(j<n){
                    prime[j]=false;
                    j+=i;
                }
            }
        }
        return ans;
        
    } 
  

int main(){
    int n=21;
    cout<<count_prime(n);
    return 0;
}