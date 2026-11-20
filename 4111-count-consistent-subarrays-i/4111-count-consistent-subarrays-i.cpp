class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int n=nums.size();

        int cnt=0;
        for(int i=0;i<n;i++){
            int Bitand=nums[i];
            int min=nums[i];
            for(int j=i;j<n;j++){
                Bitand &= nums[j];

                if(nums[j]<min) min=nums[j];

                if(Bitand==min) cnt++;
            }
        }
        return cnt;
    }
};