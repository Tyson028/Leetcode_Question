class Solution {
public:
    string makeGood(string s) {
        int n=s.size();
        stack<char> st;
        for(int i=0;i<n;i++){
            char ch=s[i];
            if(!st.empty() && tolower(st.top())==tolower(ch) && st.top()!=ch)
                st.pop();
            else
                st.push(ch);
        }

        string str="";
        while(!st.empty()){
            str += st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};