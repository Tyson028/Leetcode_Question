class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n=s.size();
        int open_cnt=0;
        string str="";

        for(int i=0;i<n;i++){
            char ch=s[i];
            if(ch==')'){
                if(open_cnt!=0){
                    str += ch;
                    open_cnt--;
                }
                else
                    continue;
            }
            else if(ch=='('){
                open_cnt++;
                str += ch;
            }
            else
                str += ch;
        }

        string ans="";
        for(int i=str.size()-1;i>=0;i--){
            char ch=str[i];
            if(ch=='(' && open_cnt>0){
                open_cnt--;
            }
            else
                ans += str[i];
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};