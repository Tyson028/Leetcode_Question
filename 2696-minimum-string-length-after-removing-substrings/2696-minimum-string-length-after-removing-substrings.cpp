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
            else if(!st.empty() && ch=='D'){
                if(st.top()=='C')
                    st.pop();
                else
                    st.push(ch);
            }
            else
                st.push(ch);
        }

        int cnt=0;
        while(!st.empty()){
            cnt++;
            st.pop();
        }
        return cnt;
    }
};