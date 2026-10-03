class Solution {
public:
    string toLowerCase(string s) {
        for(char &ch: s){
            ch = static_cast<char>(tolower(static_cast<unsigned char>(ch)));
        }
        return s;
    }
};