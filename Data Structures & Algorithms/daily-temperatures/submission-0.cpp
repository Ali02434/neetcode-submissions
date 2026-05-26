class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector <int> res(temperatures.size(),0);
        stack<pair<int, int>> st;
        pair<int,int> p;

        for(int i = 0; i < temperatures.size(); i++){
            //base case
            if(i == 0){
                st.push({temperatures[0], 0});
            }

            p = st.top();
            while((!st.empty()) and p.first < temperatures[i]){
                res[p.second] = i - p.second;
                st.pop();
                p = st.top();
            }
            st.push({temperatures[i], i});
        }
        return res;
    }
};
