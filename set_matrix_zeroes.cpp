
#include <iostream>
#include <iterator>
#include <map>
#include <vector>
#include <unordered_map>
#include <string>
#include<array>
#include<iostream>
#include<stack>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
    int cols = matrix[0].size();
    bool firstRowZero = false;
    bool firstColZero = false;
    
    // Check if the first row contains zero
    for (int i = 0; i < cols; i++) {
        if (matrix[0][i] == 0) {
            firstRowZero = true;
            break;
        }
    }
    
    // Check if the first column contains zero
    for (int i = 0; i < rows; i++) {
        if (matrix[i][0] == 0) {
            firstColZero = true;
            break;
        }
    }
    
    // Mark zeros in the rest of the matrix
    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;  // Mark the corresponding row
                matrix[0][j] = 0;  // Mark the corresponding column
            }
        }
    }
    
    // Set rows to zero based on first column marks
    for (int i = 1; i < rows; i++) {
        if (matrix[i][0] == 0) {
            for (int j = 1; j < cols; j++) {
                matrix[i][j] = 0;
            }
        }
    }
    
    // Set columns to zero based on first row marks
    for (int j = 1; j < cols; j++) {
        if (matrix[0][j] == 0) {
            for (int i = 1; i < rows; i++) {
                matrix[i][j] = 0;
            }
        }
    }
    
    // Set first row and first column to zero if needed
    if (firstRowZero) {
        for (int i = 0; i < cols; i++) {
            matrix[0][i] = 0;
        }
    }
    
    if (firstColZero) {
        for (int i = 0; i < rows; i++) {
            matrix[i][0] = 0;
        }
    }
    }
};