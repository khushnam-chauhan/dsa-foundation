#include <iostream>
using namespace std;

void count(int n) {
    int a=sizeof(n);
    cout<<a<<endl;
    if (n == 0) {
        return;
    }
    cout << n << " ";
    count(n - 1);
}

int main() {
    int n = 54;
    count(n);
    return 0;
}
