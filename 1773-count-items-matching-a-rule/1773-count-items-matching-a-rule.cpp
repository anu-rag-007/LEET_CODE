class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count=0;
        for(vector<string>& item:items){
            if(ruleKey=="type" && ruleValue==item[0]) count++;
            if(ruleKey=="color" && ruleValue==item[1]) count++;
            if(ruleKey=="name" && ruleValue==item[2]) count++;
        }
        return count;
    }
};