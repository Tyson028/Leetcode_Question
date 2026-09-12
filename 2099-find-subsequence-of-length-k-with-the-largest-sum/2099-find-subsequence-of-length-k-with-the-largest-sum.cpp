class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int,int>> arr;

        for(int i = 0; i < nums.size(); i++) 
            arr.push_back({nums[i], i});

        sort(arr.begin(), arr.end(), greater<pair<int,int>>());

        vector<int> ans;

        for(int i = 0; i < k; i++) 
            ans.push_back(arr[i].second);

        sort(ans.begin(), ans.end());

        vector<int> res;

        for(int index : ans)
            res.push_back(nums[index]);


        return res;
    }
};