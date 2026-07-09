class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        unordered_map<int, int> f;

        for (int x : nums) {
            f[x]++;
        }

        return f[nums[nums.size() / 2]] == 1;
    }
};