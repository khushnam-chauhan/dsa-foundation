#include<iostream>
#include<climits>
using namespace std;
int maxNum(int arr[][3],int row,int col){
    int max=INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 3; j++)
        {
           if (max<arr[i][j])
           {
            max=arr[i][j];
           }
           
        }    
    }
    return max;

}
int minNum(int arr[][3],int row,int col){
    int min=INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 3; j++)
        {
           if (min>arr[i][j])
           {
            min=arr[i][j];
           }
           
        }    
    }
    return min;

}
int main(){
    int arr[3][3]={{1,2,3},{4,12,6},{7,8,9}};
    int row=3;
    int col=3;
    cout<<"original array"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int  j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<"   ";
        }
        cout<<endl;
        
    }

  cout<<" maximum number : "<<maxNum(arr,row,col)<<endl;
  cout<<" minimum number : "<<minNum(arr,row,col);
  

}