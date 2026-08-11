class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_map<int,int>f;
        int sum=nums[0];
        
        for(int i=0;i<nums.size()-1;i++){
            if(i<nums.size() &&nums[i+1]==nums[i]+1){
                sum+=nums[i+1];
            }
            else{
                break;
            }
        }
        for(int i=0;i<nums.size();i++){
            f[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            if(f.find(sum)!=f.end()){
                sum++;
            }
            
        }
        return sum;

    }
};