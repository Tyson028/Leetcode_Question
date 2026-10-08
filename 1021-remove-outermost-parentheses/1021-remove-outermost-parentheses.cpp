class Solution {
public:
    string removeOuterParentheses(string s) {
        string str="";
        int cnt=0;

        for(char ch : s){
            if(ch==')')
                cnt--;
            if(cnt>0)
                str+=ch;
            if(ch=='(')
                cnt++;
        }
        return str;
    }
};