#include <iostream>
#include <iterator>
#include <map>
#include <vector>
#include <unordered_map>
#include <string>
#include<array>
#include<iostream>
#include<stack>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
              stack<string> wordsStack;
        string word = "";
        for (char c : s) {
            if (c != ' ') {
                word += c;
            }
            else {
                if (!word.empty()) {
                    wordsStack.push(word);
                    word = "";
                }
            }
        }
        if (!word.empty()) {
            wordsStack.push(word);
        }

        std::string result = "";
        while (!wordsStack.empty()) {
            result += wordsStack.top() + " ";
            wordsStack.pop();
        }

        if (!result.empty()) {
            // Remove the trailing space
            result.pop_back();
        }

        return result;
    }

    
};