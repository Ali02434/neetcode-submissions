class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> temp;
        int difference;

        for(int i = 0; i < nums.size(); i++){
            difference = target - nums[i];

            if(temp.count(difference)){
                return {temp[difference], i};
            }
            else{
                temp[nums[i]] = i;
            }
        }
        return {};
    }
};
