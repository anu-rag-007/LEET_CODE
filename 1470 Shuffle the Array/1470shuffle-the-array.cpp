class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[n+i]);
        }
        return ans;
    }
};
//         vector<int> arr(n);
//         int k=0;
//         for(int i=m/2;i<m;i++){
//             arr[k++] = nums[i];
//         }
//         vector<int> mixed(m);
//         k=0;
//         for(int i=0;i<n;i++){
//             if(i%2!=0){
//                 mixed[i] = nums[k++];
//             }
//             k=0;
//             mixed[i] = arr[k++];
//         }
//         return mixed;
//     }
// };