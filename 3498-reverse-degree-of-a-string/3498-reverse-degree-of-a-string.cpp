class Solution {
public:
    int reverseDegree(string s) {
        int n=s.size();
        int ans=0;

        for(int i=0;i<n;i++){
            char ch=s[i];
            int idx=i+1;
            int rev_idx=(abs(ch-'z')+1);

            ans += idx*rev_idx;
        }
        return ans;
    }
};