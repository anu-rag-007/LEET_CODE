class Solution {
public:
    int partition(vector<int>& nums, int l, int h) {
        int pivot = nums[l];
        int i = l - 1;
        int j = h + 1;
        while(true) {
            do {
                i++;
            } while(nums[i] < pivot);
            do {
                j--;
            } while(nums[j] > pivot);
            if(i >= j) {
                return j;
            }
            swap(nums[i], nums[j]);
        }
    }
    void quicksort(vector<int>& nums,int l,int h){
        if(l<h){
            int pivotIndex = partition(nums,l,h);
            quicksort(nums,l,pivotIndex);
            quicksort(nums,pivotIndex+1,h);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        quicksort(nums,0,n-1);
        return nums;
    }
};