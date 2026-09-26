class Solution {
public:
    void sol(vector<char>& s,int l, int r){
        if(l>r) return;
        swap(s[l],s[r]);
        sol(s,l+1,r-1);
    }
    void reverseString(vector<char>& s) {
        sol(s,0,s.size()-1);
    }
};