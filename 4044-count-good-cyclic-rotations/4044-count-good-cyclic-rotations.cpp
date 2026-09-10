class Solution {
public:

    long long  countGoodRotations(vector<int>& nums) {
        int n=nums.size();

        long long totalsum=0; 
        for(auto val:nums)
            totalsum += val;


        long long leftsum=0;
        for(int i=1;i<=n/2;i++)
            leftsum += nums[i%n];

        int cnt = 0;
        for(int j=1;j<=n;j++) {

            if(leftsum > totalsum - leftsum)
                cnt++;

        
            leftsum -= nums[j % n];
            leftsum += nums[(j + (n/2)) % n];
        }
        return cnt;
    }
};