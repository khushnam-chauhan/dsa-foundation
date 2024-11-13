const int maxn = 2002;
int ans[maxn][maxn], best[maxn][maxn];
class Solution {
public:
    vector<int> maximumSubarrayXor(vector<int>& a, vector<vector<int>>& queries) {
        int n = a.size();
        for(int i = 0; i < n; i++){
            ans[i][i] = a[i];
            best[i][i] = a[i];
        }
        for(int d = 1; d < n; d++){
            for(int i = 0; i + d < n; i++){
                ans[i][i + d] = ans[i][i + d - 1] ^ ans[i + 1][i + d];
                best[i][i + d] = max({ans[i][i + d], best[i][i + d - 1], best[i + 1][i + d]});
            }
        }
        vector<int> res;
        for(auto q : queries){
            res.push_back(best[q[0]][q[1]]);
        }
        return res;
    }
};