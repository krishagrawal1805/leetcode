class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        long long sum=0;
        const int MOD = 1000000007;
        
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }

        if(k>=sum){
            return 0;
        }
        else if(sum>k&&sum%k==0){
            long long u=((sum-k)/k);
          __int128 total = (__int128)u * (u + 1) / 2;
    return (long long)(total % MOD);
        }
        else{
         long long u=((sum-k)/k)+1;
         __int128 total = (__int128)u * (u + 1) / 2;
        return (long long)(total % MOD);
        }
        
       
        
    }
};