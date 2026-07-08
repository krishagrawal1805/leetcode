class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int maxrange=-1;
        int sum=0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int max_d = 0;
            int min_d = 9;
            int x= nums[i];
            while (x > 0) {
                int num = x % 10;
                x = x / 10;
                int c = num;
                max_d=max(c,max_d);
                min_d=min(c,min_d);
                
            }
            int range=max_d-min_d;
            if(range>maxrange){
                maxrange=range;
                sum=nums[i];
            }
            else if(range==maxrange){
                sum+=nums[i];
            }

        }
        
        return sum;
    }
};