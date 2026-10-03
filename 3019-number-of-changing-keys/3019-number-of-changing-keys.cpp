class Solution {
public:
    int countKeyChanges(string s) {
        for(char &c:s){
            c = static_cast<char>(tolower(static_cast<unsigned char>(c)));
        }
        string lower = s;
        int keys = 0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]!=s[i+1]){
                keys++;
            }
        }
        return keys;
    }
};