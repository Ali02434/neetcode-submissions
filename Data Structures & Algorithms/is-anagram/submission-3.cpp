class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char,int> count_s;
        unordered_map <char,int> count_t;
        
        for(int i = 0; i < s.size(); i++){
            count_s[s[i]]++;
        }
        for(int i = 0; i < t.size(); i++){
            count_t[t[i]]++;
        }

        if(count_s == count_t){
            return true;
        }
        else{
            return false;
        }
    }
};
