class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>palin;
        for(char i:s){
            palin[i]++;
        }   
        int ans=0;
        bool odd=false;
        for(auto i:palin){
            int val=i.second;
            if(val%2==0){
                ans+=val;
            }
            else{
                odd=true;
            }
        }
        if(odd==false){
            return ans;

        }
        for(auto i:palin){
            int value=i.second;
            if(value%2==1){
                ans+=value-1;
            }
        }
        return ans+1;
    }
};