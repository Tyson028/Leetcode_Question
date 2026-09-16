class Solution {
public:
    int fib_recur(int num){
        if(num==0 || num==1) 
            return num;

        return fib_recur(num-1)+fib_recur(num-2);
    }
    int fib(int n) {
       int ans = fib_recur(n);
       return ans;
    }
};