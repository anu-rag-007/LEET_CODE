class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i] = nums[i]*nums[i];
        }
        for(int i=0;i<nums.size();i++){
            int temp = nums[i];
            int j=i-1;
            while(j>=0 && temp < nums[j]){
                nums[j+1] = nums[j];
                j--;
            }
            nums[j+1] = temp;
        }
        return nums;
    }
};