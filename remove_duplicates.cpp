#include <iostream>
#include <iterator>
#include <map>
#include <vector>
#include <unordered_map>
#include <string>
#include<array>
#include<iostream>
#include<set>
#include<algorithm>
using namespace std;



class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = 1;
        for ( int r = 1 ; r < nums.size();r++){
            if( nums[r] != nums[r-1]){
                nums[l] = nums[r];
                l++;
            }
        }
        return l;

    }
};
