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
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        int element;
        int size;
        for(int i = 0;i < nums.size(); i++){
            mp[nums[i]]++;
        }
        size = nums.size() / 2;
        for(auto j: mp){
            if(j.second > size)
            element = j.first;
        }
        return element;
        
    }
};