class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums(n);
        int exor = start;
        for(int i=1;i<n;i++){
            nums[i] = start + 2*i;
            exor^=nums[i];
        }
        return exor;
    }
};