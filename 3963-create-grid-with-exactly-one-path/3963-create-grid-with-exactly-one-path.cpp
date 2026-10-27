class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<vector<int>> mat(m,vector<int>(n,0));

        int i=0,j=0;
        mat[i][j]=1;
        while(i<m-1 || j<n-1){
            if (j+1 < n) {
                j++;
                mat[i][j] = 1;
            }
            if (i+1 < m) {
                i++;
                mat[i][j] = 1;
            }
        }

        vector<string> res;
        for(int i=0;i<m;i++){
            string ans="";
            for(int j=0;j<n;j++){
                if(mat[i][j]!=0){
                    ans+='.';
                }
                else{
                    ans+='#';
                }
            }
            res.push_back(ans);
        }
        return res;
;    }
};