class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int n=nums.size();
        int sd_sum=0;
        int dd_sum=0;

        for(auto val : nums){
            if(val>9)
                dd_sum += val;
            else
                sd_sum += val;
        }

        if(sd_sum>dd_sum) return true;
        else if(dd_sum>sd_sum) return true;
        else return false;
    }
};