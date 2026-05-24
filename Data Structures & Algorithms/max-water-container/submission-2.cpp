class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size() - 1;

        int height;
        int width;
        int area;

        int max = 0;

        while(i < j){
            height = min(heights[i], heights[j]);
            width = j - i;
            area = height * width;

            if(max < area){
                max = area;
            }

            if(heights[i] < heights[j]){
                i++;
            }
            else{
                j--;
            }

        }
        return max;


    }
};
