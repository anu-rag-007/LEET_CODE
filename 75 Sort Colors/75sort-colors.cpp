class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            int temp = nums[i];
            int j = i-1;
            while(j>=0 && temp < nums[j]){
                nums[j+1] = nums[j];
                j--;
            }
            nums[j+1] = temp;
        }
    }
};