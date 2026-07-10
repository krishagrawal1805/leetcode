class Solution {
public:
    long long sumAndMultiply(int n) {
        int u=0;
        long long x=0;
        int sum=0;
        while(n>0){
            if(n%10!=0){
                int r=n%10;
                long long power=pow(10,u);
                x=r*power+x;
                sum+=r;
                u++;
            }
            n=n/10;
        }
        return x*sum;
    }
};