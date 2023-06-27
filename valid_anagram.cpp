#include <iostream>
#include <iterator>
#include <map>
#include <vector>
#include <unordered_map>
#include <string>
#include<array>
#include<iostream>

using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char,int> countS;
        unordered_map <char,int> countT;
        if(s.length() != t.length()){
            return false;
        }
        for(auto i = 0; i < (int)s.size(); i++){
            countS[s[i]]++;
            countT[t[i]]++;
        }
       for (const auto& pair : countS) {
            char c = pair.first;
            if (countS[c] != countT[c]) {
                return false;
            }
        }
        return true;
    }
};


