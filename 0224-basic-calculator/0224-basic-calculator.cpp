class Solution {
public:
    int calculate(string s) {
        int n=s.size();
        long long number=0;
        long long result=0;
        int sign=1;
        stack<int> st;

        for(int i=0;i<n;i++){
            char ch=s[i];
            if(ch==' ')
                continue;
            if(isdigit(ch))
                number = number * 10 + (ch-'0');
            else if(ch=='-'){
                result += (sign * number);
                number=0;
                sign=-1;
            }
            else if(ch=='('){
                st.push(result);
                st.push(sign);

                result=0;
                sign=1;
            }
             else if(ch=='+'){
                result += (sign * number);
                number=0;
                sign=1;
            }
            else if(ch==')'){
                result += (sign * number);
                number=0;

                result *= st.top();
                st.pop();

                result += st.top();
                st.pop();
            }

        }
        result+=sign*number;
        return result;
    }
};