class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>f;
        unordered_map<char,int>u;
       for(auto i:ransomNote){
    f[i]++;
  }
     for(auto i:magazine){
    u[i]++;
  }
  for(auto i:f){
    char key = i.first;
    int val=i.second;
    int u_val=u[key];
    if(val>u_val){
        return false;
    }
  }
  return true;
  
    }
};