#include <bits/stdc++.h>
using namespace std;

bool canConvert(string s, string t) {
    // Preprocess: Remove all possible redundant middle sections
    auto reduce = [](const string& str) {
        string reduced = str;
        bool changed;
        do {
            changed = false;
            for (int i = 0; i < reduced.length() - 3; i++) {
                if (reduced[i+1] == reduced[i+2] && reduced[i] != reduced[i+3]) {
                    reduced.erase(reduced.begin() + i + 1, reduced.begin() + i + 3);
                    changed = true;
                    break;
                }
            }
        } while (changed);
        return reduced;
    };

    // Normalize both strings
    string reducedS = reduce(s);
    string reducedT = reduce(t);

    // Final comparison
    return reducedS == reducedT;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int q;
    cin >> q;
    
    while (q--) {
        int n, m;
        string s, t;
        
        cin >> n >> m >> s >> t;
        
        cout << (canConvert(s, t) ? "YES" : "NO") << '\n';
    }
    
    return 0;
}