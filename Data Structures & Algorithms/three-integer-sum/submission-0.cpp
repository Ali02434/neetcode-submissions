class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    int target;
    set <vector<int>> res;
    vector<vector<int>> final;

    sort(nums.begin(), nums.end());


    for(int i = 0; i < nums.size(); i++){
        target = -nums[i];
        int j = i + 1;
        int k = nums.size()-1;
        int sum;

        while(j < k){
            //Skip index if it is i 
            if(j == i){
                j++;
            }
            if(k == i){
                k--;
            }

            sum = nums[j] + nums[k];
            if(sum == target){
                res.insert({nums[i],nums[j],nums[k]});
                k--;
                j++;
            }
            else if(sum > target){
                k--;
            }
            else{
                j++;
            }
        }
    }

    for(const auto& elem: res){
        final.push_back(elem);
    }
    return final;
    }
};
