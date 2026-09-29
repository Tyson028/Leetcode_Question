class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();

        map<int,int> mp;
        for(auto val : nums)
            mp[val]++;

        vector<int> ans;
        while(!mp.empty()){
            for(auto it = mp.begin(); it != mp.end();){
                ans.push_back(it->first);
                it->second--;
                if(it->second==0)
                    it = mp.erase(it);
                else 
                    it++;
            }
        }
        return ans;
    }
};

//[3,1,3,2,1,3]
// sort --> [1,1,2,3,3,3]
//mp-->{1:2,2:1,3;3}