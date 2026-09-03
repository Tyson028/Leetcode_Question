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
    void merge(vector<int>& ans,vector<int>& v1, vector<int>& v2){
        int m=v1.size();
        int n=v2.size();
        int i=0,j=0;

        while(i < m && j < n) {

        if(v1[i] > v2[j]) {
            ans.push_back(v1[i]);
            i++;
        }
        else if(v1[i] < v2[j]) {
            ans.push_back(v2[j]);
            j++;
        }
        else {
            int tempi = i;
            int tempj = j;

            while(tempi < m && tempj < n &&
                  v1[tempi] == v2[tempj]) {
                tempi++;
                tempj++;
            }

            if(tempj == n || 
               (tempi < m && v1[tempi] > v2[tempj])) {
                ans.push_back(v1[i]);
                i++;
            }
            else {
                ans.push_back(v2[j]);
                j++;
            }
        }
        }
        while(i<m){
            ans.push_back(v1[i]);
            i++;
        }

        while(j<n){
            ans.push_back(v2[j]);
            j++;
        }
    }
    vector<int> maxNumber(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<int> ans;
        for(int i=0;i<=k;i++){
            vector<int> temp1=solve(i,nums1);
            vector<int> temp2=solve(k-i,nums2);
            vector<int> temp;
            merge(temp,temp1,temp2);
            if(temp.size()==k) ans=max(ans,temp);
        }
        return ans;
    }
};