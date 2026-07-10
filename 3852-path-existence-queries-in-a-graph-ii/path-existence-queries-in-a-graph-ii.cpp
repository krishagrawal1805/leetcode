class Solution {
public:
    vector<int> pathExistenceQueries(int n, vector<int>& nums, int maxDiff,
                                     vector<vector<int>>& queries) {

        vector<pair<int, int>> a;
        for (int i = 0; i < n; i++)
            a.push_back({nums[i], i});

        sort(a.begin(), a.end());

        // pos[original index] = position in sorted order
        vector<int> pos(n);
        for (int i = 0; i < n; i++)
            pos[a[i].second] = i;

        // far[i] = farthest sorted position reachable in one edge
        vector<int> far(n);
        int r = 0;
        for (int l = 0; l < n; l++) {
            while (r + 1 < n && a[r + 1].first - a[l].first <= maxDiff)
                r++;
            far[l] = r;
        }

        int LOG = 18;
        vector<vector<int>> up(LOG, vector<int>(n));

        for (int i = 0; i < n; i++)
            up[0][i] = far[i];

        for (int k = 1; k < LOG; k++) {
            for (int i = 0; i < n; i++) {
                up[k][i] = up[k - 1][up[k - 1][i]];
            }
        }

        vector<int> ans;

        for (auto &q : queries) {
            int u = pos[q[0]];
            int v = pos[q[1]];

            if (u > v)
                swap(u, v);

            if (u == v) {
                ans.push_back(0);
                continue;
            }

            int cur = u;
            int steps = 0;

            for (int k = LOG - 1; k >= 0; k--) {
                if (up[k][cur] < v) {
                    steps += (1 << k);
                    cur = up[k][cur];
                }
            }

            if (far[cur] >= v)
                ans.push_back(steps + 1);
            else
                ans.push_back(-1);
        }

        return ans;
    }
};