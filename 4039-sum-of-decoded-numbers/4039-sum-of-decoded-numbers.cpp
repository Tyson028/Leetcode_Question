class Solution {
public:

    long long modPow(long long x, long long y, long long mod) {
        long long result = 1;

        while (y > 0) {
            if (y & 1)
                result = (result * x) % mod;

            x = (x * x) % mod;
            y /= 2;
        }   
        return result;
    }
    int sumDecoded(vector<long long>& nums) {
        const long long mod= 1e9 + 7;
        int n=nums.size();
        long long ans=0;

        for(int i=0;i<n;i++){
            long long val=nums[i];
            int width=val%10;
            long long d=val/10;

            string str=to_string(d);
            int x=stoi(str.substr(0,width));
            int y=stoi(str.substr(width));

            ans = (ans + modPow(x,y,mod)) % mod;

        }
        return ans;
    }
};