class Solution {
public:
    int minLength(string s) {
        int n=s.size();
        stack<char> st;
        for(char ch:s){
            if(ch=='B'){
                if(!st.empty() && st.top()=='A')
                    st.pop();
                else
                    st.push(ch);
            }
            else if(ch=='D'){
                if(!st.empty() && st.top()=='C')
                    st.pop();
                else
                    st.push(ch);
            }
            else
                st.push(ch);
        }
        return st.size();
    }
};