class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> small(n);
        for(int i=0;i<n;i++){
            int current = nums[i];
            int count = 0;
            for(int j=0;j<n;j++){
                if(nums[j]<current){
                    count++;
                }
            }
            small[i] = count;
        }
        return small;
    }
};