class Solution {
public:

    int factorial(int n){
        if(n==0 || n==1)
            return 1;

        int ans=0;
        int temp=n;
        int opr=0;

        for(int num=n-1;num>=1;num--){
            if(opr==0)
                temp = temp * num;
            else if(opr==1)
                temp = temp / num;
            else if(opr==2){
                ans += temp;
                temp=num;
            }
            else{
                ans += temp;
                temp=-num;
            }

            opr = (opr+1)%4;
            
        }
        ans += temp;
        return ans;

    }
    int clumsy(int n) {
        return factorial(n);
    }
};