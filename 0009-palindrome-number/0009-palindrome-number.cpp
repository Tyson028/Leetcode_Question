class Solution {
public:
    bool isPalindrome(int x) {
        long long original=x;
        long long temp=x;
        long long reversed=0;
        while(temp>0){
            reversed=reversed*10+(temp%10);
            temp/=10;
        }

        return original==reversed?true:false;
    }
};