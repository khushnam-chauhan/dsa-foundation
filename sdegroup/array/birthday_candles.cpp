#include <iostream>
#include <vector>
using namespace std;

int birthdayCakeCandles(const std::vector<int>& candleHeights) {
    int maxHeight = 0;
    int countTallestCandles = 0;

    for (int height : candleHeights) {
        if (height > maxHeight) {
            maxHeight = height;
            countTallestCandles = 1;  
        } else if (height == maxHeight) {
            countTallestCandles++;  
        }
    }

    return countTallestCandles;
}

int main() {
    
    vector<int> candles = {4, 4, 1, 3};
    int result = birthdayCakeCandles(candles);

    cout << "Your niece can successfully blow out " << result << " candles." << std::endl;

    return 0;
}