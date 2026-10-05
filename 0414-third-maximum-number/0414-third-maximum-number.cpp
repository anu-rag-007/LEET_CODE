class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> n_nums(nums.begin(),nums.end());
        int N = n_nums.size();
        if(N<3){
            return *n_nums.rbegin();
        }
        int max_num = *n_nums.rbegin();
        int del_count = 0;
        for(int i=0;i<N;i++){
            if(del_count<2){
                n_nums.erase(*n_nums.rbegin());
                del_count++;
            }
        }
        return *n_nums.rbegin();
    }
};