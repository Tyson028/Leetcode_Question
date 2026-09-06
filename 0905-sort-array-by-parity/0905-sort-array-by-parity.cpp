class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=0;

        while(left < n && right<n){
            if(nums[right]%2==0){
                swap(nums[left++],nums[right++]);
                continue;
            }
            right++;
        }
        return nums;
    }
};