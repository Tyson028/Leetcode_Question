class Solution {
public:
    string smallestSubsequence(string s) {
        int n=s.size();
        stack<char> st;
        unordered_map<char,int> mp;

        for(int i=0;i<n;i++)
            mp[s[i]]=i;

        unordered_map<char,bool> check;
        for(int i=0;i<n;i++){
            char val=s[i];

            if(check[val]) continue;

            while(!st.empty() && val < st.top() && mp[st.top()] > i){
                check[st.top()]=false;
                st.pop();  
            }
            st.push(val);
            check[st.top()]=true;
        }

        string ans="";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};