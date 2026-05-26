class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string,vector<string>> m;
        for(int i = 0; i < strs.size(); i++){
            string str = strs[i];
            //Counting the Frequency
            vector<int> count(26,0);
            for(int j = 0; j < str.size(); j++){
                count[str[j] - 'a']++;
            }
            //transforming vector into key
            string key = to_string(count[0]);
            for(int j = 1; j < count.size(); j++){
                key += ',' + to_string(count[j]);
            }
            //Placing anagrams together in Hashmap
            m[key].push_back(str);
        }


        vector<vector<string>> res;
        for(auto i : m){
            res.push_back(i.second);
        }
        return res;
    }
};
