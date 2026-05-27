class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        //Zahlen -> Freq
        for(int i = 0; i < nums.size(); i++){
            m[nums[i]]++;
        }

        vector<vector<int>> freq(nums.size() + 1);
        //Invertieren Freq -> Zahlen
        for(auto & i : m){
            freq[i.second].push_back(i.first);
        }

        vector<int> res;
        for(int i = freq.size() - 1 ; i > 0; i--){
            for(auto& n : freq[i]){
                res.push_back(n);
                if(res.size() == k){
                    return res;
                }
            }
        }
        return res;
        
    }
};
