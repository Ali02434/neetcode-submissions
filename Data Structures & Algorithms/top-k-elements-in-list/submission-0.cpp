class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> int_to_count;
        vector <vector<int>> count_to_int(nums.size() + 1);
        vector <int> res;


        for(int i = 0; i < nums.size(); i++){
            int_to_count[nums[i]]++;
        }

        for(auto &p : int_to_count){
            count_to_int[p.second].push_back(p.first);
        }

        int i = nums.size();

        while(res.size() < k){
            if(count_to_int[i].size() != 0){
                int temp = count_to_int[i].back();
                count_to_int[i].pop_back();
                res.push_back(temp);
            }
            else{
                i--;
            }
            
        }

        return res;
    }
};
