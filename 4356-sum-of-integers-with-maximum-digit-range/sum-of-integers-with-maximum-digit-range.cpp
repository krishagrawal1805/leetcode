class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int n = nums.size();
        vector<int> diff(n);
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            int max = INT_MIN;
            int min = INT_MAX;
            arr[i] = nums[i];
            while (nums[i] > 0) {
                int num = nums[i] % 10;
                nums[i] = nums[i] / 10;
                int c = num;
                if (c >= max) {
                    max = c;
                }
                if (c <= min) {
                    min = c;
                }
                diff[i] = max - min;
            }
        }
        int a = diff[0];
        for (int i = 0; i < diff.size(); i++) {
            if (a <= diff[i]) {
                a = diff[i];
            }
        }
        int ans = 0;
        for (int i = 0; i < diff.size(); i++) {
            if (a == diff[i]) {
                ans += arr[i];
            }
        }
        return ans;
    }
};