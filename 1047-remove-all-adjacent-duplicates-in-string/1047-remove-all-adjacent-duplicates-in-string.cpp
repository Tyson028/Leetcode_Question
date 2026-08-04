class Solution {
public:
    string removeDuplicates(string s) {
        string str="";
        for(char ch : s){
            if(!str.empty() && str.back()==ch)
                str.pop_back();
            else
                str.push_back(ch);
        }
        return str;
        // int n=s.size();
        // stack<char> st;
        // int i=0;
        // while(i<n){
        //     char ch=s[i];
        //     if(st.empty())
        //         st.push(ch);
        //     else if(ch!=st.top())
        //         st.push(ch);
        //     else{
        //         st.pop();
        //     }
        //     i++;
        // }

        // string str="";
        // while(!st.empty()){
        //     str += st.top();
        //     st.pop();
        // }
        // reverse(str.begin(),str.end());
        // return str;

    }
};