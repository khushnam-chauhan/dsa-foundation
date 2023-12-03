#include<iostream>
using namespace std;

int lsearch(int arr[], int size, int n) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == n) {
            cout << "Element found at position " << i << endl;
            return i;  // Return the index if the element is found
        }
    }
    cout << "Element not found" << endl;
    return -1;  // Return -1 if the element is not found
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int target;
    cin >> target;
    
    int result = lsearch(arr, size, target);

    // You can use the result to perform further actions if needed
    // For example, check if result is not -1 and then use arr[result]

    return 0;
}
