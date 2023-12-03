#include<iostream>
using namespace std;

int greaterOcc(int arr[], int si, int num, int count = 0) {
    for (int i = 0; i < si; i++) {
        if (arr[i] > num) {
            count++;
        }
    }
    return count;
}

int main() {
    int si;
    cout << "enter the size of arr: ";
    cin >> si;

    int arr[si];
    for (int i = 0; i < si; i++) {
        cin >> arr[i];
    }

    int num;
    cout << "enter the num : ";
    cin >> num;

    int result = greaterOcc(arr, si, num);

    cout << "number of element greator than  " << num << " =  "<<result;

    return 0;
}
