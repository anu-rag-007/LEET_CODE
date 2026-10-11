class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();
        string merged = "";
        int i=0,j=0;
        while(i<m || j<n){
            if(i<m){
                merged+=word1[i];
                i++;
            }
            if(j<n){
                merged+=word2[j];
                j++;
            }
        }
        return merged;
    }
};