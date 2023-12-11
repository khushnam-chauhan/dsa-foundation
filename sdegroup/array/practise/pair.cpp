#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<pair<int,int>> makingPairs;
    makingPairs.push_back(pair<int,int>(23,14));
    makingPairs.push_back(pair<int,int>(93,72));
    makingPairs.push_back(pair<int,int>(23,64));
    makingPairs.push_back(pair<int,int>(34,98));

    for (int  i = 0; i < makingPairs.size(); i++)
    {
        cout<<"pairs :"<<makingPairs[i].first<< " "<<makingPairs[i].second<<endl;
    }
    

}