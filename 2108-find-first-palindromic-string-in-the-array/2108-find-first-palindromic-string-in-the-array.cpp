class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(const string &word : words){
            string reversed = word;
            reverse(reversed.begin(),reversed.end());
            if(reversed == word){
                return word;
            }
        }
        return "";
    }
};