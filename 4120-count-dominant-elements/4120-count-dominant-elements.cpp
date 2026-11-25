class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 1;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(i==0){
                if(nums[0]>=nums[1])
                    cnt++;
            }
            else if(i==n-1){
                if(nums[n-1]>=nums[n-2])
                    cnt++;
            }
            else{
                if(2LL*nums[i]>=(long long)nums[i-1] + nums[i+1])
                    cnt++;
            }
        }
        return cnt;
    }
};