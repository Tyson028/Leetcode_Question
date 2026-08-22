class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int majoritySize=n/2;

        unordered_map<int,int> mp;

        for(auto val:nums)
            mp[val]++;

        int majorityEle=-1;
        for (const auto& [key, value] : mp){
            if(value>majoritySize)
                majorityEle=key;
        }
        return majorityEle;
    }
};