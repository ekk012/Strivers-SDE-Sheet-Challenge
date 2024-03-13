class Solution {
public:
    int pivotInteger(int n) {
        long long total = (n * (n + 1LL)) / 2LL; // Sum of numbers from 1 to n (using long long to avoid integer overflow)

        // Iterate from 1 to n to find the pivot integer
        long long sum = 0;
        for (int x = 1; x <= n; ++x) {
            sum += x;
            if (sum == total - sum + x) { // Check if sum of elements before x equals sum of elements after x, including x
                return x; // If yes, x is the pivot
            }
        }

        return -1;
    }
};
