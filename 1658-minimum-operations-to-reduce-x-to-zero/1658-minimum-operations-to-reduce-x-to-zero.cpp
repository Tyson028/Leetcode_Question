class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        int n=nums.size();
        int totalsum=0;
        for(auto val:nums)
            totalsum+=val;

        int target=totalsum-x;
        if(target == 0) return n;
        if(target < 0) return -1;
        
        int left=0;
        int maxLen=0;
        int currsum=0;
        for(int right=0;right<n;right++){
            currsum+=nums[right];
            while(currsum>target){
                currsum-=nums[left];
                left++;
            }
            if(currsum == target)
                maxLen=max(maxLen,right-left+1);
        }
        return maxLen==0?-1:n-maxLen;
    }
};