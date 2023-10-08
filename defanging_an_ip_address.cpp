
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
    string defangIPaddr(string address) {
       
        string answer = "";
        for(char c : address)
            (c == '.')?answer += "[.]": answer += c;
        
        return answer;
    }
};