#include <iostream>
using namespace std;

int scount(int arr[], int x, int n, int count = 0) {
  for (int i = 0; i < n; i++) {
    if (x < arr[i]) {
      count++;
    }
  }
  return count;
}
int main() {
int i,n;int x;
  cout<<"Enter the size of array: ";
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"Enter the number";
  cin>>x;
  cout<<scount(arr,x,n);
  return 0;
}