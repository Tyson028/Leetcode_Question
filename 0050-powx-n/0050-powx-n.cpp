class Solution {
public:
    double recur(double x, long long pow, double ans){
        if(pow==0) return ans;

        if(pow%2!=0)
            ans *= x;

        x *= x;
        pow /= 2;

        return recur(x,pow,ans);
    
    }

    double myPow(double x, int n) {
        long long pow=n;
        if(pow<0){
            x=1/x;
            pow=-pow;
        }

        double res = recur(x,pow,1);
        return res;
    }
};