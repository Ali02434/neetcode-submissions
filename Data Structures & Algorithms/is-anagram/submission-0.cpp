class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char,int> S1;
        unordered_map <char,int> S2;

        for(int i; i < s.size();i++){
            if(S1[s[i]] >= 1){
                S1[s[i]]++; 
            }
            else{
                S1[s[i]] = 1;
            }
        }
        for(int i; i < t.size();i++){
            if(S2[t[i]] >= 1){
                S2[t[i]]++; 
            }
            else{
                S2[t[i]] = 1;
            }
        }

        if(S1 == S2){
            return true;
        }
        else{
            return false;
        }


    }
};
