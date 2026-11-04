class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int n=nums.size();

        int ans=INT_MAX;
        
        for(int i=0;i<n;i+=2){
            string pair="";

            pair += to_string(nums[i]);
            pair += to_string(nums[i+1]);

            ans=min(ans,stoi(pair));
        }
        return ans;
    }
};