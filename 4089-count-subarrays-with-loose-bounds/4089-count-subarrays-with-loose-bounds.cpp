class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int n=nums.size();

        int left=0;
        long long cnt=0;
        for(int right=0;right<n;right++){
            if(nums[right]<minK || nums[right]>maxK){
                left=right+1;
            }
            cnt+=right-left+1;
        }

        return cnt;
    }
};