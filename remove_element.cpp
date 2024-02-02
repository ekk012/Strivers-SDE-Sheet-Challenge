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
    int removeElement(vector<int>& nums, int val) {
        // if nums[i] != val then nums[count] = val ; count ++ ;end of loop then return count
        int count = 0;
        for (int i = 0; i < nums.length(); i++)
        {
            
            if (nums[i] != val)
            {
                nums[count] = val;
               count++;

            }
            
        }
        return count;
        
    }
};