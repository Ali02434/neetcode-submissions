class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seto;
        //base case
        int max_len = 0;

        int l = 0;
        int r = 1;

        if(s.size() == 0){
            return 0;
        }
        else if(s.size() == 1){
            return 1;
        }
        else{
            seto.insert(s[l]);
            max_len = 1;
            while(r < s.size()){
                if(seto.count(s[r])){
                    seto.erase(s[l]);
                    l++;
                }
                else{//character is not in the set
                    max_len = max(max_len, r - l + 1);
                    seto.insert(s[r]);
                    r++;
                }
            }
        }
    

        return max_len;

    }
};
