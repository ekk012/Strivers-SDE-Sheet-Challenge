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
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> ans;
        int n;
        for(int i = 0; i < nums.size();i++){
            mp[nums[i]]++;
        }
        n = nums.size()/3;
        for(auto j: mp){
            if(j.second > n ){
                ans.push_back(j.first);
            }
        }
        return ans;
    }
};