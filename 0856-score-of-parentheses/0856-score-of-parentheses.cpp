class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);

        for(char ch : s){
            if(ch=='(')
                st.push(0);
            else{
                int val=st.top();
                st.pop();
                int score=max(2*val,1);

                int val2=st.top();
                st.pop();
                st.push(score+val2);

            }
        }
        return st.top();
    }
};