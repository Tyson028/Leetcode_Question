class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mp;
        int left=0;
        int right=0;
        int len=0;
        for(int right=0;right<n;right++){
            mp[nums[right]]++;
            while(mp[nums[right]]>k){
                mp[nums[left]]--;
                if(mp[nums[left]]==0){
                    mp.erase(nums[left]);
                    
                }
                left++;

            }
            len=max(len,right-left+1);
        }
        return len;
    }
};