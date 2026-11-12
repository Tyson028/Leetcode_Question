class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int MaxLen=1;
        int inc=1;
        int dec=1;
        for(int right=1;right<n;right++){
            if(nums[right]>nums[right-1])
                inc++,dec=1;
            else if(nums[right]<nums[right-1])
                dec++,inc=1;
            else
                inc=1,dec=1;

            MaxLen=max(MaxLen,max(inc,dec));
        }
        return MaxLen;
    }
};