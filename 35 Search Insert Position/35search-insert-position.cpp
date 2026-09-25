class Solution {
public:
    int searchInsert(vector<int>& nums, int target, int low, int high) {
        if(low > high){
            return low;
        }
        int mid = low + (high - low)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            return searchInsert(nums, target, mid+1, high);
        }
        else{
            return searchInsert(nums, target, low, mid-1);
        }
    }
    int searchInsert(vector<int>& nums, int target){
        return searchInsert(nums, target, 0, nums.size()-1);
    }
};