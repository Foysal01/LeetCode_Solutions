class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        int arrCount[26] = {0};
        for(int i=0; i<s.length(); i++){
            arrCount[s[i]-97]++;
        }
        for(int i=0; i<s.length(); i++){
            arrCount[t[i]-97]--;
            if(arrCount[t[i]-97]<0){
                return false;
            }
        }
        return true;
    }
};