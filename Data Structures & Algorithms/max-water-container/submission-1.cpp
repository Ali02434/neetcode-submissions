class Solution {
public:
    int maxArea(vector<int>& heights) {
        int height;
        int length;
        int area;

        int max_area = 0;
        int i = 0;
        int j = heights.size()-1;

        while(i < j){
            height = min(heights[i], heights[j]);
            length = j - i;
            area = height * length;

            if(max_area < area){
                max_area  = area;
            }

            if(heights[i] < heights[j]){
                i++;
            }
            else{
                j--;
            }

        }

        return max_area;
    }
};
