class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        int intersect=0;
        for(int i=0;i<n-1;i++){
            int i_start=intervals[i][0];
            int i_end=intervals[i][1];
            for(int j=i+1;j<n;j++){
                int j_start=intervals[j][0];
                int j_end=intervals[j][1];
                if(i_end>=j_start && i_start <= j_end)
                    intersect++;
            }
        }
        return intersect;
    }
};