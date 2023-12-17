#include<iostream>
#include<vector>
using namespace std;
int main(){
    // initialization of 2d array
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<"   ";

        }
        cout<<endl;
    }
    
cout<<"column wise "<<endl;
 for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[j][i]<<"   ";

        }
        cout<<endl;
    }
    

return 0;

}