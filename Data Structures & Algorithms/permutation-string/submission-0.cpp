class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()){
            return false;
        }

        vector<char>s1_count(26,0);
        vector<char>s2_count(26,0);
        for(int i = 0; i < s1.size(); i++){
            s1_count[s1[i] - 'a']++;
            s2_count[s2[i] - 'a']++;
        }
        //build matches up
        int matches = 0;
        for(int i = 0; i < 26; i++){
            if(s1_count[i] == s2_count[i]){
                matches++;
            }
        }

        //Sliding window
        int l = 0;
        for(int r = s1.size(); r < s2.size();r++){
            if(matches == 26){
                return true;
            }

            //right side
            int index = s2[r] - 'a';
            s2_count[index]++;
            if(s1_count[index] == s2_count[index]){
                matches++;
            }
            else if(s1_count[index] + 1 == s2_count[index]){
                matches--;
            }

            //leftside
            index = s2[l] - 'a';
            s2_count[index]--;
            if(s1_count[index] == s2_count[index]){
                matches++;
            }
            else if(s1_count[index] - 1 == s2_count[index]){
                matches--;
            }
            l++;
        }
        
        return matches == 26;

    }
};
