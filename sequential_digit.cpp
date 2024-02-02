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
    vector<int> sequentialDigits(int low, int high) {
        // 123 1234 345
        // dig3 = dig2 + 1 and dig 2 = dig1 + 1 
        vector<int> ans;
        for(int start = 1; start < 9;start++){
            int num = start;

            for(int next = start+1; next  < 10;next++){
                num = num * 10 + next;
                if (num >= low && num <= high){
                    ans.push_back(num);
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};a