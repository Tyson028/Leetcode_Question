class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp;
        for(auto val : magazine)
            mp[val]++;

        for(auto val : ransomNote){
            if(mp.find(val) == mp.end() || mp[val]==0)
                return false;
            
            mp[val]--;
        }
        return true;
         
    }
};