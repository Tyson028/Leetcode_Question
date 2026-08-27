class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maximumWealth=0;
        int n=accounts.size();
        int m=accounts[0].size();

        for(int i=0;i<n;i++){
            int currSum=0;
            for(int j=0;j<m;j++){
                currSum+=accounts[i][j];
            }
            maximumWealth=max(maximumWealth,currSum);
        }
        return maximumWealth;
    }
};