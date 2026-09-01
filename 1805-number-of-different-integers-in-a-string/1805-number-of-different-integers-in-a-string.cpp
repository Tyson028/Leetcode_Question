class Solution {
public:
    int numDifferentIntegers(string word) {
        int n=word.size();
        string num="";
        unordered_map<string,int> mp;
        for(int i=0;i<n;i++){
            char ch=word[i];
            if(isdigit(ch)){
                num += ch; 
            }
            else{
                if(!num.empty()){
                    int j = 0;
                    while (j < num.size() && num[j] == '0')
                        j++;

                    string temp = num.substr(j);


                    mp[temp]++;
                    num="";
                }
            }
        }

        if(!num.empty()){
            int j = 0;
            while (j < num.size() && num[j] == '0')
                j++;

            string temp = num.substr(j);


            mp[temp]++;
            num="";
        }

        return mp.size();
    }
};