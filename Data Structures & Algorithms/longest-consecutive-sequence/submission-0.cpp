class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set <int> s;
        int res = 0;
        unordered_map <int,int> count;


        //convert list to set
        for(int i = 0; i < nums.size(); i++){
            s.insert(nums[i]); 
        }

        for(int num : nums){
            int streak = 0;
            int curr = num;
            while (s.find(curr) != s.end()){
                streak++;
                curr++;
            }
            res = max(res,streak);
        }
        return res;
            
    }
};
