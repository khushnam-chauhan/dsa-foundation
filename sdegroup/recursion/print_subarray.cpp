#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printaArray(vector<int> v, int start, int end){
    //base case
    if(end==v.size()) return;
    //recursive case
    for(int i=start; i<=end; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //RE
    printaArray(v,start,end+1);

}
void printSubArray(vector<int> v){
    for(int start=0; start<v.size(); start++){
        int end=start;
        printaArray(v,start,end);
    }

}

int main(){
    vector<int> v{1,2,3,4,5};
    printSubArray(v);
}