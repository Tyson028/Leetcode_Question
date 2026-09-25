class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
       sort(intervals.begin(), intervals.end());

        priority_queue<int, vector<int>, greater<int>> minHeap;

        long long count = 0;

        for(auto interval : intervals) {
            int start = interval[0];
            int end = interval[1];

            while(!minHeap.empty() && minHeap.top() < start) {
                minHeap.pop();
            }

            count += minHeap.size();

            minHeap.push(end);
        }
        return count;
    }
};