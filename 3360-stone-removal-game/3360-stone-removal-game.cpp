class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10) return false;
        int remove=10;
        bool aliceturn=true;

        while(n>=remove){
            n=n-remove;
            remove--;
            aliceturn=!aliceturn;
        }

        return !aliceturn;
    }
};