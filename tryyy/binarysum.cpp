#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isValid(int N, int K) {
    if (K > (N + 1) / 2) return false;
    if (K < (N / 2 + N % 2) && K > (N / 2)) return false;
    return true;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        if (isValid(N, K)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
