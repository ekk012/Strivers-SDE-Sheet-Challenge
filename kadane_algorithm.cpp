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
    int maxSubArray(vector<int>& nums) {
        int best = INT_MIN,sum = 0;
        for(auto k : nums){
            sum = max(k,sum+k);
            best = max(best,sum);
        }
        return best;
    }
};