class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        vector<int> og(n);
        for(int i=0;i<n;i++){
            og[i]+=heights[i];
        }
        sort(heights.begin(),heights.end());
        int count=0;
        for(int i=0;i<n;i++){
            if(heights[i]!=og[i]) count++;
        }
        return count;
    }
};