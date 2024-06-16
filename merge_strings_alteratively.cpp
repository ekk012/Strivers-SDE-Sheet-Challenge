class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res = "";
        int len = min(word1.length(),word2.length());
        for(auto i = 0 ; i < len; i++){
            res += word1[i];
            res += word2[i];
        }
        res += word1.substr(len);
        res += word2.substr(len);
        return res;
    }
};