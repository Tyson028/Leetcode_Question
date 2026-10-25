class Solution {
public:
    int calculateScore(int a, int b){
        string str1 = "";
        int cnt1=0;
        while (a > 0) {
            if(a % 2 != 0)
                cnt1++;

            str1 += (a % 2 == 0) ? "0" : "1";
            a /= 2;
        }
        reverse(str1.begin(), str1.end());

        string str2 = "";
        int cnt2=0;
        while (b > 0) {
            if(b % 2 != 0)
                cnt2++;

            str2 += (b % 2 == 0) ? "0" : "1";
            b /= 2;
        }
        reverse(str2.begin(), str2.end());

        return cnt1>=cnt2 ? cnt1*cnt2 : cnt2/cnt1;
    }
};