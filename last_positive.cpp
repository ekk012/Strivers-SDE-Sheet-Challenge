class Solution {
public:
    int lengthOfLastWord(string s) {
       vector<string> words;
       string currentWord = "";
       for(int i = 0; i < s.length(); i++){
        if(s[i] != ' ') {
            currentWord += s[i];
        }
        else {
            if(!currentWord.empty()) 
            {
                words.push_back(currentWord);
                currentWord ="";
            }
            
        }
       }
       if(!currentWord.empty()) 
            {
                words.push_back(currentWord);
            }
        int n = words.size();
        string ans = words[n-1];
        return ans.length();
    }
};