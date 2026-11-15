
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> ans;

        int n = nums.size();

        // Step 1: Add all even numbers
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 0) {
                ans.push_back(nums[i]);
            }
        }

        // Step 2: Add all odd numbers
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 != 0) {
                ans.push_back(nums[i]);
            }
        }

        return ans;
    }
};
