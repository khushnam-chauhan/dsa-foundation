#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<vector<int> > arr;
    vector<int> a{1,2,3};
    vector<int> b{2,4,6,9,0};
    vector<int> c{1,3,7,8};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
return 0;
}

//vector<vector<int> > arr(3, vector<int>(5,0));