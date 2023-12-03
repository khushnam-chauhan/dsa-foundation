#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,4,8,15,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>max){
            max=arr[i];
        }

    }
    cout<<max<<endl;
    


}