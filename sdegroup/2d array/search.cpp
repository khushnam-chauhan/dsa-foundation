#include<iostream>
using namespace std;
int findKey(int arr[][3],int row,int col,int target){
    for (int i = 0; i < 3; i++)
    {
        int sum=0;
        for (int  j = 0; j < 3; j++)
        {
            if(arr[i][j]==target){
                cout<<i<<" "<<j<<"  ";
            }
          
        }    
    }

}
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3;
    int col=3;
    int target=7;
    cout<<"original array"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int  j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<"   ";
        }
        cout<<endl;
        
    }
  

    findKey(arr,row,col,target);
}