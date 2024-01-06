#include<iostream>
#include<algorithm>
using namespace std;
int missing(int a[],int n){
    //sorting and swapping
    int i=0;
    while(i<n){
        int index=a[i]-1;
        if(a[i]!=a[index]){
            swap(a[i],a[index]);
        }
        else
            i++;
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]!=i+1)
            cout<<i+1<<" ";
    }
    
    return -1;
}
int main(){
    int a[]={1,5,3,3,4};
    int n= sizeof(a)/sizeof(a[0]);
    missing(a,n);


}