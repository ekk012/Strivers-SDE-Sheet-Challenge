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
    int maxProfit(vector<int>& prices) {
        int bestPrice = 0;
        int minPrice = INT_MAX;
        for(int i = 0; i < prices.size();i++){
            minPrice = min(minPrice,prices[i]);
            bestPrice = max(bestPrice,prices[i] - minPrice);
         
        }
        return bestPrice;
        
    }
};