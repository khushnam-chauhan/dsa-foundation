#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void dfs(vector<int>& points, int index, int threshold, int count, int minVal, int maxVal, int& result) {
    if (index >= points.size()) return;

    minVal = min(minVal, points[index]);
    maxVal = max(maxVal, points[index]);
    count++;

    if (maxVal - minVal >= threshold) {
        result = min(result, count);
        return;
    }

    dfs(points, index + 1, threshold, count, minVal, maxVal, result);
    dfs(points, index + 2, threshold, count, minVal, maxVal, result);
}

int minNum(int threshold, vector<int> points) {
    int result = INT_MAX;
    dfs(points, 0, threshold, 0, points[0], points[0], result);

    // If no valid path found, return total number of problems
    return (result == INT_MAX) ? points.size() : result;
}

int main() {
    vector<int> points = {1, 2, 3};
    int threshold = 2;
    cout << minNum(threshold, points) << endl;  // Output: 3
}
