#include <iostream>

void print_pattern(int n) {
    int mid = n / 2;
    for (int i = 0; i < n; i++) {
        int stars = (i <= mid) ? mid - i + 1 : i - mid + 1;
        
        // Print left stars
        for (int j = 0; j < stars; j++) {
            std::cout << '*';
        }
        
        // Print spaces
        for (int j = 0; j < n - 2 * stars; j++) {
            std::cout << ' ';
        }
        
        // Print right stars
        for (int j = 0; j < stars; j++) {
            std::cout << '*';
        }
        
        std::cout << '\n';
    }
}

int main() {
    print_pattern(5);
    return 0;
}