#include<iostream>
#include<vector>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> shuffler(2 * n);
    for (int i = 0; i < n; i++) {
        shuffler[2 * i] = nums[i];
        shuffler[2 * i + 1] = nums[i + n];
    }
    return shuffler;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6}; 
    int n = 3;
    vector<int> result = shuffle(arr, n);

    for (int i : result) {
        cout << i << " ";
    }

    return 0;
}
