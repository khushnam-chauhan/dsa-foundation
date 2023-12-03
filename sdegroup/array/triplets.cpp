#include<iostream>
using namespace std;
int main(){
    // 3 pairs target =sum
    int arr[5]={1,5,2,10,20};
    int target=35;
    int count=0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            for (int k = j+1; k < 5; k++)
            {
                if(arr[i]+arr[j]+arr[k]==target){
                    count++;
                }
            }
            
        }
        
    }
    cout<<count;
    return 0;
    
}