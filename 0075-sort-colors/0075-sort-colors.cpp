class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            int index = i;
            for(int j=i+1;j<n;j++){
                if(nums[index]>nums[j]){
                    index = j;
                }
            }
            swap(nums[index],nums[i]);
        }
    }
};