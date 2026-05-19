class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> hsmap;
        int diff;

        for(int i = 0; i < nums.size(); i++){
            diff = target - nums[i];
            if(hsmap.count(diff)){
                return {hsmap[diff],i};
            }
            else{
                hsmap[nums[i]] = i;
            }
        }
        return {};
    }
};
