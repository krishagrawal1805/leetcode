class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>arr1;
        vector<int>arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        int k=0;
        int l=0;
        for(int i=2;i<nums.size();i++){
            if(arr1[k]>arr2[l]){
                arr1.push_back(nums[i]);
                k++;
            }
            else{
                arr2.push_back(nums[i]);
                l++;
            }
        }
        vector<int>ans;
        for(int k=0;k<arr1.size();k++){
            ans.push_back(arr1[k]);
        }
        for(int k=0;k<arr2.size();k++){
            ans.push_back(arr2[k]);
        }

        return ans;
    }
};