class Solution {
public:
    int maxNumberOfBalloons(string text) {
         unordered_map<char,int>f;
        unordered_map<char,int>u;
       for(auto i:text){
    u[i]++;
  }
  int n=text.size();
  f['b']=1;
  f['a']=1;
  f['l']=2;
  f['o']=2;
  f['n']=1;   
  int out=n;
  for(auto i:f){
    char key = i.first;
    int val=i.second;
    int u_val=u[key];
    int x=u_val/val;
    if(x<out){
        out=x;
    }
  }
  return out;
  
    }
};