class Solution {
public:
    int maxDepth(string s){
        int MaxDepth=0;
        int cnt=0;
        for(char ch : s){
            if(ch=='('){
                cnt++;
                MaxDepth=max(MaxDepth,cnt);
            }
            if(ch==')')
                cnt--;
          
        }
        return MaxDepth;
    }
};