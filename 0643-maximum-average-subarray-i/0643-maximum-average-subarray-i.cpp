class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int low = 0;
        int sum = 0;
        int maxSum = INT_MIN;
        int n = nums.size();

        for (int high = 0; high < n; high++) {

            // Add current element
            sum += nums[high];

            // Window has exactly k elements
            if (high - low + 1 == k) {

                // Update maximum sum
                maxSum = max(maxSum, sum);

                // Remove leftmost element
                sum -= nums[low];
                low++;
            }
        }

        return (double)maxSum / k;
    }
};