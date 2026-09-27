class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> st;
        
        for(char ch : s){
            string temp="";
            if(ch==')'){
                while(!st.empty() && st.top()!='('){
                    temp += st.top();
                    st.pop();
                }

                st.pop();
                
                for(char ch : temp)
                    st.push(ch);
            }
            else
                st.push(ch);
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