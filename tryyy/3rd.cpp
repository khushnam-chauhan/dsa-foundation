class Solution {
public:
    int maxScore(vector<vector<int>>& a) {
        using pii = pair<int, int>;
        int n = a.size(), m = a[0].size();
        vector<pii> ord;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                ord.emplace_back(a[i][j], i);
            }
        }
        sort(ord.rbegin(), ord.rend());
        const int inf = 1<<30;
        vector<int> dp((1<<n), -inf);
        dp[0] = 0;
        for(int i = 0, j = 0; i < n * m; i = j){
            while(j < n * m && ord[i].first == ord[j].first) j++;
            vector<int> ndp = dp;
            for(int msk = 0; msk < (1<<n); msk++){
                for(int k = i; k < j; k++){
                    auto [val, p] = ord[k];
                    if((msk>>p)&1);
                    else ndp[msk | (1<<p)] = max(ndp[msk | (1<<p)], dp[msk] + val);
                }
            }
            dp = ndp;
        }
        return *max_element(dp.begin(), dp.end());
    }
};