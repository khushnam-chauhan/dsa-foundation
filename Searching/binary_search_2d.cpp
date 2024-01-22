#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binarySearch(int arr[][4],int rows,int col,int target){
    int start=0;
    int end=(rows*col)-1;
    int mid= (start+end)/2;
    while (start<=end)
    {
        int rowIndex=mid/col;
        int colIndex=mid%col;
        if (arr[rowIndex][colIndex]==target)
        {
            cout<<" found at rowindex "<<rowIndex<<" and colindex "<<colIndex<<" ";
            return true;
        }
        else if (arr[rowIndex][colIndex]>target)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start+end)/2;
        
    }
    return false;
}
int main(){
    int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int rows=5;
    int col=4;
    int target=19;
    bool ans=binarySearch(arr,rows,col,target);
    if(ans==true){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
    return 0;
}