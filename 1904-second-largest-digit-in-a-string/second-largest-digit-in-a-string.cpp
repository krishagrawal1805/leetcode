class Solution {
public:
    int secondHighest(string s) {
        int n = s.size();
        sort(s.begin(), s.end());
        int i = 0;
        int maxx = -1;
        int maxi = -1;
        while (i < n && s[i]<'a') {
           if(maxx<s[i]){
            maxi=maxx;
            maxx=s[i];
           }
           
            i++;
        }
        if(maxi == -1){
         return -1;
        }
        return maxi-'0';
    }
};