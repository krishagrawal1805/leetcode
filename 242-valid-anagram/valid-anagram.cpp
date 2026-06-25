class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        unordered_map<char,int>f;
        unordered_map<char,int>u;
        for(auto i:s){
            f[i]++;
            }

           for(auto i:t){
            u[i]++;
            }
           
        
        if(n!=m){
            return false;

        }
        else{
           for(auto i:f){
            int key=i.first;
            int val=i.second;
            int u_val=u[key];
            if(val!=u_val){
                return false;
            }

           }

        }
        return true;
    }
};