class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> ans(26,0);
        int n = s.size();
        for(int i=0;i<n;i++)
            ans[s[i]-'a']++;

        for(int i=0;i<n;i++){
            if(ans[s[i]-'a']==1)
                return i;
        }
        return -1;
    }
};