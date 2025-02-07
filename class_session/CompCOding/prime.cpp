#include<iostream>
#include<vector>
#include<algorithm>
#include <cmath>
using namespace std;



int main(){
    int a,b;
    cin>>a>>b;
    vector<int> prime;
    for (int i = a; i <=b ; i++)
    {
        if(i>1){
            bool flag = true;
            for(int j=2;j<sqrt(i);i++){
                if(i%j==0){
                    flag=false;
                    break;
                }
                if(flag){
                    prime.push_back(i);
                }
            }
        }
    }
    for(int p:prime){
        cout<<p<<" "<<endl;
    }

    return 0;
    

}