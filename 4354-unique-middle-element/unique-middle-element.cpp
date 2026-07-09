class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        unordered_map<int,int>f;
        int n=nums.size();
        for(auto i:nums){
            f[i]++;
        }
         
        if(f[nums[n/2]]==1){
            return true;
        }
      
        return false;
    }
};