// separate -ve and +ve numbers in an array

#include<iostream>
#include<vector>
using namespace std;
void separate(vector<int>& arr){
    int n=arr.size();
    int start=0;
    int end=n-1;
    for (int i = 0; i < n; i++)
    {
        if (arr[start]<0)
        {
            start++;
        }
        else if(arr[end]>0){
            end--;
        }
        else{
            swap(arr[start],arr[end]);

        }

    }
    

}
int main(){
    vector<int> arr={1,-3,4,-5,6,-2,7};
    separate(arr);
    for(auto ele:arr){
        cout<<ele<<" ";
    }
    return 0;

}