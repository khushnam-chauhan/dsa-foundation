#include<iostream>
using namespace std;
int rowSum(int arr[][3],int row,int col){
    for (int i = 0; i < 3; i++)
    {
        int sum=0;
        for (int  j = 0; j < 3; j++)
        {
            sum=sum+arr[j][i];
        }
        cout<<sum;
        cout<<endl;

        
    }
    
}
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
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
  

    rowSum(arr,row,col);
}