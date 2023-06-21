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

    int findDuplicate(vector<int>& nums) {
        map<int,int> m;
        int count;
        for(int i=0 ; i < nums.size(); i++){
            m[nums[i]++]++;
        }
        for(auto j: m){
            if(j.second > 1)
            count = j.first;
        }
        return count;
    }
};