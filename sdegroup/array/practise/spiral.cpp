#include<iostream>
#include<vector>
using namespace std;
vector<int> spiral(vector<vector<int>> v){
    vector<int> ans;
    int m=v.size();
    int n=v[0].size();
    int startingRow=0;
    int endingCol=n-1;
    int endingRow=m-1;
    int startingCol=0;
    int totalElements=m*n;
    int count=0;
    while (count<totalElements)
    {
       for(int i=startingCol;i<=endingCol && count<totalElements;i++){
        ans.push_back(v[startingRow][i]);
        count++;
       }
        startingCol++;
       for(int i=startingRow;i<=endingRow && count<totalElements;i++){
        ans.push_back(v[i][endingCol]);
        count++;
       }
        startingRow++;
       for(int i=endingCol;i>=startingCol && count<totalElements;i--){
        ans.push_back(v[endingRow][i]);
        count++;
       }
        endingCol--;
       for(int i=endingRow;i>=startingRow && count<totalElements;i--){
        ans.push_back(v[i][startingCol]);
        count++;
       }
        endingRow--;
    }
    return ans;

}
int main(){
    vector<vector<int>> matrix{
        {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},
        {16,17,18,19,20}
    };
    vector<int> result=spiral(matrix);
    for(auto ele:result){
        cout<<ele<<" ";
    }
    return 0;

}