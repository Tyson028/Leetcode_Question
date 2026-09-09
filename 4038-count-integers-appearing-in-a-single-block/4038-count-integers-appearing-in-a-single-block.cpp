class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();


        for(int i=0;i<n;i++){
            if(i==0 || nums[i]!=nums[i-1])
                mp[nums[i]]++;
        }

        int cnt = 0;
        for (auto& [key,val] : mp) {
            if (val == 1)
                cnt++;
        }
        return cnt;
    }
};