#include<iostream>
using namespace std;

int main() {
    int target = 10;
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int count = 0;

    for (int i = 0; i < 6; i++) {
        for (int j = i+1; j < 6; j++) {
            if (arr[i] + arr[j] == target) {
                count++;
            }
        }
    }

    cout << count;
    return 0;
}
