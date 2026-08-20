class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();

        int total_sum=0;
        for(auto val : cardPoints)
            total_sum += val;

        int window_size=n-k;

        if(total_sum==n) return total_sum;

        int left=0;
        int curr_sum=0;
        for(int right=0;right<window_size;right++){
            curr_sum+=cardPoints[right];
        }

        int min_sum=curr_sum;
        for(int right=window_size;right<n;right++){
            curr_sum+=cardPoints[right]-cardPoints[right-window_size];
            min_sum=min(min_sum,curr_sum);
        }

        return total_sum-min_sum;


    }
};