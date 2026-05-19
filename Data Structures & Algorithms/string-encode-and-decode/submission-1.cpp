class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for(int i = 0; i < strs.size(); i++){
            res += to_string(strs[i].size());
            res += "#";
            res += strs[i];
        }
        return res;
    }

    vector<string> decode(string s) {
        vector <string> res;
        int i = 0;
        while (i < s.size()) {

            // 1. Länge lesen
            int j = i;
            while (s[j] != '#') {
                j++;
            }

            int len = stoi(s.substr(i, j - i));
            i = j + 1;

            // 2. String extrahieren
            string temp = s.substr(i, len);
            res.push_back(temp);

            i += len;
        }
        return res;
    }
};
