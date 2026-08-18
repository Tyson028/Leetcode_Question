class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.size();
        stack<char> st;
        for(auto val:num){
            while(k>0 && !st.empty() && val<st.top()){
                st.pop();
                k--;
            }
            st.push(val);
        }

        while(k>0){
            st.pop();
            k--;
        }

        string s="";
        while(!st.empty()){
            s += st.top();
            st.pop();
        }

        reverse(s.begin(),s.end());
        
        int i = 0;
        while(i<s.size() && s[i] == '0')
            i++;

        s.erase(0, i);

        if (s.empty()) return "0";

        return s;
       
    }
};