class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) return false;
        if (n <= 3) return true;
        if (n % 2 == 0 || n % 3 == 0) return false;

        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
        }
        return true;
    }

    int diagonalPrime(vector<vector<int>>& nums) {
        int m = nums.size();
        int n = nums[0].size();
        int max_prime = 0;
        for(int i=0;i<m;i++){
            if(isPrime(nums[i][i])){
                max_prime = max(max_prime,nums[i][i]);
            }
            int j = n - i - 1;
            if (i != j && isPrime(nums[i][j])) {
                max_prime = max(max_prime, nums[i][j]);
            }
        }
        return max_prime;
    }
};