#include <iostream>
using namespace std;

void count(int n) {
    int a=sizeof(n);
    cout<<a<<endl;
    if (n == 0) {
        return;
    }
    count(n - 1);
    cout << n << " ";
}

int main() {
    int n = 6;
    count(n);
    return 0;
}

