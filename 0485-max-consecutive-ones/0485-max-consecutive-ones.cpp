class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int n = arr.size();
        int maxcons =0,cnt=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                cnt++;
                maxcons = max(maxcons,cnt);
            }
            else cnt=0;
        }
        return maxcons;
    }
};