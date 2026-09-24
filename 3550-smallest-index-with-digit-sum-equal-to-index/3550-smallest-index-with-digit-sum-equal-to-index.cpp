class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int digit=nums[i];
            int digit_sum=0;
            while(digit>0){
                digit_sum += digit%10;
                digit /= 10;
            }

            if(digit_sum==i)
                ans=min(ans,i);
        }
        return ans==INT_MAX?-1:ans;
    }
};