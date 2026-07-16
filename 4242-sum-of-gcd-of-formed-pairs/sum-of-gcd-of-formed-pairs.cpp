class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefixGcd(n);
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            if(mx<nums[i]){
                mx=nums[i];
            }
            prefixGcd[i]=gcd(mx,nums[i]);
        }
        sort(prefixGcd.begin(),prefixGcd.end());
        int j=n-1;
        int i=0;
        long long sum=0;
        while(i<j){
            sum+=gcd(prefixGcd[i],prefixGcd[j]);
            i++;
            j--;
        }
        return sum;
    }
};