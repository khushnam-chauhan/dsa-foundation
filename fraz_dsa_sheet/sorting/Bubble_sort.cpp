#include<iostream>
using namespace std;
void bubble_sort(int arr[], int n){
    for(int i=0;i<n;i++){
        bool swapped=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=true;
            }

            
        }
        if(!swapped){
            break;
        }
        
    }
}
int main(){

    int arr[] = {64, 34, 25, 12, 22,23};
    int n= sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, n);
    for(int i:arr){
        cout<<i<<" ";
    }
}