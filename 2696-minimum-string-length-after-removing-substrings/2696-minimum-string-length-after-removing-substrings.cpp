class Solution {
public:
    int minLength(string s) {
        int n=s.size();
        string ans="";
        for(char ch:s){
            if(ch=='B'){
                if(!ans.empty() && ans.back()=='A')
                    ans.pop_back();
                else
                    ans.push_back(ch);
            }
            else if(ch=='D'){
                if(!ans.empty() && ans.back()=='C')
                    ans.pop_back();
                else
                    ans.push_back(ch);
            }
            else
                ans.push_back(ch);
        }

        return ans.size();

    }














    //     stack<char> st;
    //     for(char ch:s){
    //         if(ch=='B'){
    //             if(!st.empty() && st.top()=='A')
    //                 st.pop();
    //             else
    //                 st.push(ch);
    //         }
    //         else if(ch=='D'){
    //             if(!st.empty() && st.top()=='C')
    //                 st.pop();
    //             else
    //                 st.push(ch);
    //         }
    //         else
    //             st.push(ch);
    //     }
    //     return st.size();
    // }
};