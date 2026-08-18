class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int, int> f;

        for (int x : nums) {
            f[x]++;
        }

        int n = nums.size();
           if (k == n) {
            int ans = -1;

            for (auto i : nums) {
                ans = max(ans, i);
            }

            return ans;
        }
        if (k == 1) {
            int ans = -1;

            for (int x : nums) {
                if (f[x] == 1) {
                    ans = max(ans, x);
                }
            }

            return ans;
        }

        if (f[nums[0]] == 1 && f[nums[n - 1]] == 1) {
            return max(nums[0], nums[n - 1]);
        }
        else if (f[nums[0]] == 1) {
            return nums[0];
        }
        else if (f[nums[n - 1]] == 1) {
            return nums[n - 1];
        }

        return -1;
    }
};