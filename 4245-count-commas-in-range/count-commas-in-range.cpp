class Solution {
public:
    int countCommas(int n) {
        int count =0;
        int x=n;
        while(x>0){
             x=x/10;
            count++;
        }
        if(count>=4){
            return n-1000+1;
        }
        return 0;
    }
};