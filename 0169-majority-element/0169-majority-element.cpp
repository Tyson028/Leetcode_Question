class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majorityEle=0;
        int cnt=0;

        for(auto val:nums){
            if(cnt==0) majorityEle=val;

            if(val==majorityEle) cnt++;
            else cnt--;
        }
        return majorityEle;
    }
};