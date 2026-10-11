class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int r = arr[1]-arr[0];
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]!=r) return false; 
        }
        return true;
    }
};