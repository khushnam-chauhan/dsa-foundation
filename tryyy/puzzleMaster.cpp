#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void combi(int start, int target, vector<int>& pieces, vector<vector<int>>& results, vector<int> & current){
    if(target==0){
        results.push_back(current);
        return;
    }
    for(int i= start;i<pieces.size();i++){
        if(i>start && pieces[i]==pieces[i-1]) continue;
        if(pieces[i]>target) break;
        current.push_back(pieces[i]); 
        combi(i+1, target-pieces[i],pieces,results,current);
        current.pop_back();
    }
}

int main(){
    int n,k;
    cout<<"enter number of elements and target: ";
    cin>>n>>k;
    cout<<"enter numbers: ";
    vector<int> pieces(n);
    for (int i = 0; i < n; i++)
    {
        cin>>pieces[i];
    }
    sort(pieces.begin(),pieces.end());
    vector<vector<int>> results;
    vector<int> current;
    combi(0,k,pieces,results,current);
    cout<<"result: "<<results.size()<<endl;
    return 0;
    

}