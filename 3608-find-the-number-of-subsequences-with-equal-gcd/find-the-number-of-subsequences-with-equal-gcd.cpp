class Solution {
public:
    static const int MOD = 1e9 + 7;

    int n;
    vector<int> nums;

    int dp[205][201][201];
    bool vis[205][201][201];

    int solve(int i, int g1, int g2) {
        if (i == n)
            return (g1 == g2 && g1 != 0);

        if (vis[i][g1][g2])
            return dp[i][g1][g2];

        vis[i][g1][g2] = true;

        long long ans = 0;

        // Ignore
        ans += solve(i + 1, g1, g2);

        // Put in seq1
        int ng1 = (g1 == 0) ? nums[i] : gcd(g1, nums[i]);
        ans += solve(i + 1, ng1, g2);

        // Put in seq2
        int ng2 = (g2 == 0) ? nums[i] : gcd(g2, nums[i]);
        ans += solve(i + 1, g1, ng2);

        return dp[i][g1][g2] = ans % MOD;
    }

    int subsequencePairCount(vector<int>& nums) {
        this->nums = nums;
        n = nums.size();

        memset(vis, false, sizeof(vis));

        return solve(0, 0, 0);
    }
};