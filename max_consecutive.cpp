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
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxConsecutive = 0;
        for(auto i = 0; i < nums.size();i++){
            if(nums[i] == 1){
                count++;
            }
            else {
                count = 0;
            }
            maxConsecutive = max(maxConsecutive, count);
        }
        return maxConsecutive;
    }
};