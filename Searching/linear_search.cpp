#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int>arr,int target){
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i+1; j < arr.size(); j++)
        {
            if (target == arr[j])
            {
                return j;
            }
            
        }
        
    }
    return -1;

}
int main(){
    vector<int> array={1,2,3,4,5,6,7};
    int target;
    cout<<"enter the target= "<<endl;
    cin>>target;
    int result=linearSearch(array,target);
    cout<<"found target element at index "<<result;

}