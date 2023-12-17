#include<iostream>
using namespace std;
void transpose(int arr[][3],int row,int col,int transposeArr[][3]){
    for (int i = 0; i < 3; i++)
    {
        int sum=0;
        for (int  j = 0; j < 3; j++)
        {
            transposeArr[j][i]=arr[i][j];
        }  
        cout<<endl;  
    }
}
void printArray(int arr[][3],int row,int col){
    for (int i = 0; i < row; i++)
    {
        for (int  j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<"   ";
        }
        cout<<endl;
        
    }
}
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3;
    int col=3;
    int transposeArr[3][3];
    cout<<"original array"<<endl;
    printArray(arr,row,col);

    cout<<"transpose of 2d array : "<<endl;
    transpose(arr,row,col,transposeArr);
    printArray(transposeArr,row,col);

return 0;
}