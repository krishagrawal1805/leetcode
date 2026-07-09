class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
        int n = s.size(), m = t.size();

        vector<int> left(n, INT_MAX);
        vector<int> right(n, -1);

        int j = 0;
        for (int i = 0; i < n; i++) {
            while (j < m && t[j] != s[i])
                j++;

            if (j == m)
                break;

            left[i] = j;
            j++;
        }

        j = m - 1;
        for (int i = n - 1; i >= 0; i--) {
            while (j >= 0 && t[j] != s[i])
                j--;

            if (j < 0)
                break;

            right[i] = j;
            j--;
        }

        for (int i = 0; i < n; i++) {

            int L = (i == 0) ? -1 : left[i - 1];
            int R = (i == n - 1) ? m : right[i + 1];

            if (i > 0 && L == INT_MAX)
                continue;

            if (i < n - 1 && R == -1)
                continue;

            if (L + 1 < R)
                return true;
        }

        return false;
    }
};