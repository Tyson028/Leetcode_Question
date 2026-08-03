class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n=s.size();
        stack<char> st1;
        for(int i=0;i<n;i++){
            char ch1=s[i];
            if(ch1!='#')
                st1.push(ch1);
            else if(!st1.empty())
                st1.pop();
        }
        string str1="";
        while(!st1.empty()){
            str1+=st1.top();
            st1.pop();
        }
        reverse(str1.begin(),str1.end());

        int m=t.size();
        stack<char> st2;
        for(int i=0;i<m;i++){
            char ch2=t[i];
            if(ch2!='#')
                st2.push(ch2);
            else if(!st2.empty())
                st2.pop();
        }
        string str2="";
        while(!st2.empty()){
            str2+=st2.top();
            st2.pop();
        }
        reverse(str2.begin(),str2.end());

        if(str1==str2) return true;
        else return false;
    }
};