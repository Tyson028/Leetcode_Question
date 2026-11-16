class Solution {
public:
    string digitSum(string s, int k) {
        while(s.size()>k){
            string str="";

            for(int i=0;i<s.size();i+=k){
                int gr_sum=0;

                for (int j = i; j < i + k && j < s.size(); ++j)
                    gr_sum += s[j] - '0';

                str += to_string(gr_sum);
            }
            s=str;
        }
        return s;
    }
};