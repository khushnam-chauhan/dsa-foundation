#include <iostream>
#include <climits>
using namespace std;


int getChecksum(int num) {
    int minDigit = 9, maxDigit = 0, sum = 0;
    int digitCount = 0; 
    int originalNum = num;
    
    while (num > 0) {
        int digit = num % 10;
        sum += digit;
        if (digit < minDigit) minDigit = digit;
        if (digit > maxDigit) maxDigit = digit;
        num /= 10;
        digitCount++;
    }
    if (digitCount <= 2) return sum;
    return sum - minDigit - maxDigit;
}

int findSum(int n, int arr[]) {
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += getChecksum(arr[i]);
    }
    return totalSum;
}

int main() {
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << findSum(size, arr) ;
    return 0;
}