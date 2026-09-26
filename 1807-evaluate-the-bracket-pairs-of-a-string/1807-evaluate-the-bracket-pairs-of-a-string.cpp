class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        int n=s.size();
        unordered_map<string,string> mp;
        for(int i=0;i<knowledge.size();i++){
            mp[knowledge[i][0]]=knowledge[i][1];
        }

        bool flag=false;
        string ans="";
        string key="";
        for(int i=0;i<n;i++){
            char ch=s[i];
            if(ch=='('){
                flag=true;
                continue;
            }

            if(ch==')'){
                if(mp.find(key) != mp.end())
                    ans+=mp[key];
                else
                    ans += '?';

                key="";
                flag=false;
                continue;
            }

            if(flag==true)
                key += ch;
            if(flag==false)
                ans += ch;
        }
        return ans;
    }
};