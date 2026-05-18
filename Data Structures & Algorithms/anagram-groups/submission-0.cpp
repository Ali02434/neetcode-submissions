class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string,vector<string>> mapo;

        for(int i = 0; i < strs.size(); i++){
            string str = strs[i];
            vector<int> counter(26, 0);

            for (int j = 0; j < str.size(); j++) {
                //exa: d,84 - a,80 = 4 
                counter[str[j] - 'a']++;
            }

            string key = "";
            for(int j = 0; j < 26; j++){
                key += to_string(counter[j]);
                key += "#";
            }

            mapo[key].push_back(str);
               
        }

        vector<vector<string>> result;
        for (auto &p : mapo) {
            result.push_back(p.second);
        }

        return result;    

    }
};
