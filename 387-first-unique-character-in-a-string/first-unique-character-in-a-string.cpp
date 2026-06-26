class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>f;
  int n=s.size();
  for(auto i:s){
    f[i]++;
  }
  for(int i=0;i<n;i++){
    if(f[s[i]]==1){
        return i;
    }
    
  }
  return -1;


    }
};