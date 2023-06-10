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
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> solution;
        unordered_map<int, int> m;

        for(int i=0; i < nums.size();i++){
            if(m.find(target-nums[i]) != m.end()){
                solution.push_back(m[target-nums[i]]);
                solution.push_back(i);
                return solution;
            }
            m[nums[i]] = i;
        }
        return solution;
    }
};