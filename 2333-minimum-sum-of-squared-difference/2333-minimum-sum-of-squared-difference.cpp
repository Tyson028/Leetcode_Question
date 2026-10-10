class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n=nums1.size();

        vector<int> freq(1e5+1,0);
        for(int i=0;i<n;i++){
            int diff=abs(nums1[i]-nums2[i]);
            freq[diff]++;
        }

        int k=k1+k2;
        for(int i=1e5;i>0 && k>0;i--){
            int cntOps=min(k,freq[i]);

            freq[i] -= cntOps;
            freq[i-1] += cntOps;
            k-=cntOps;
        }

        long long ans=0;//finding Sum of Squared Difference
        for(int i=0;i<freq.size();i++){
            ans += 1LL*freq[i]*i*i; 
        }

        return ans;
    }
};