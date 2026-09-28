class Solution {
public:
    int maxDepth(string s){
        stack<int> st;
        int MaxDepth=0;
        for(char ch : s){
            if(ch=='('){
                st.push(ch);
                int size=st.size();
                MaxDepth=max(MaxDepth,size);
            }
            if(ch==')')
                st.pop();
        }
        return MaxDepth;

    }
    // int maxDepth(string s){
    //     int MaxDepth=0;
    //     int cnt=0;
    //     for(char ch : s){
    //         if(ch=='('){
    //             cnt++;
    //             MaxDepth=max(MaxDepth,cnt);
    //         }
    //         if(ch==')')
    //             cnt--;
          
    //     }
    //     return MaxDepth;
    // }
};