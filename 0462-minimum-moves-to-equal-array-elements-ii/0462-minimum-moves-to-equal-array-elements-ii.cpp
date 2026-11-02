class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        int move = 0;

        sort(nums.begin(), nums.end());

        int mid = nums[n / 2];

        for(int i = 0; i < n; i++) {
            move += abs(nums[i] - mid);
        }

        return move;
    }
};