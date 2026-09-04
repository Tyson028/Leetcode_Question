class Solution {
public:
    vector<int> solve(int k,vector<int>& nums){
        int n=nums.size();

        vector<int> ans;
        for(int i=0;i<n;i++){
            while(!ans.empty() && ans.back() < nums[i] && ans.size()-1+n-i >= k ){
                ans.pop_back();
            }
            ans.push_back(nums[i]);
        }

        while(ans.size() >k)
            ans.pop_back();

        return ans;
    }


     // Compare remaining parts of two vectors
    bool greater(vector<int>& a, int i, vector<int>& b, int j) {
        while(i < a.size() && j < b.size()) {
            if(a[i] != b[j])
                return a[i] > b[j];

            i++;
            j++;
        }

        return (a.size() - i) > (b.size() - j);
    }

    vector<int> merge(vector<int>& a, vector<int>& b) {
        vector<int> res;

        int i = 0, j = 0;

        while(i < a.size() || j < b.size()) {

            if(greater(a, i, b, j))
                res.push_back(a[i++]);
            else
                res.push_back(b[j++]);
        }

        return res;
    }
    
    vector<int> maxNumber(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<int> ans;
        for(int i = 0; i <= k; i++) {

            if(i > nums1.size() || k-i > nums2.size())
                continue;

            vector<int> a = solve(i,nums1);
            vector<int> b = solve(k-i,nums2);
            vector<int> curr = merge(a, b);

            ans = max(ans, curr);
        }
        return ans;
    }
};