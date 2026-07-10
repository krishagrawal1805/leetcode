class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>d(n);
        for(int i=0;i<n;i++){
            d[i]=nums[i]*nums[i];
        }
        sort(d.begin(),d.end());
        return d;
    }
};