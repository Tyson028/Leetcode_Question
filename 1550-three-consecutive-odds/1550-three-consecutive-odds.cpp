class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int consecutiveOddCount = 0;

        for (int num : arr) {
            
            if (num & 1) {
                consecutiveOddCount++;
                if (consecutiveOddCount == 3)
                    return true;
    
            } 
            else
                consecutiveOddCount = 0;

        }

        return false;
    }
};