class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string,vector<string>> m;
        for(int i = 0; i < strs.size(); i++){
            vector<int> freq (26,0);
            string str = strs[i];
            //Freq Array aufbauen
            for(int j = 0; j < str.size(); j++){
                freq[str[j] - 'a']++;
            }
            
            //Key aus Freq aufbauen
            string key = to_string(freq[0]);
            for(int j = 1; j < freq.size(); j++){
                key += ',' + to_string(freq[j]);
            }

            //Key -> String(vector) mappen
            m[key].push_back(str);
        }

        for(auto& i : m){
            res.push_back(i.second);
        }
        return res;
    }
};
