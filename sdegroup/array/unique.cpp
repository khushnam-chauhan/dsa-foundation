#include<iostream>
using namespace std;

int main() {
    int unique = 0;
    int arr[] = {1, 2, 3, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if ( arr[i] == arr[j]) {
                arr[i] = arr[j] = -1;
                break; 
            }
        }
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] >0) {
            unique = arr[i];
            break;  
        }
    }

    cout << unique;

    return 0;
}
