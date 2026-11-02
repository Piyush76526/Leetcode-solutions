class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int move = 0;
        int mini = INT_MAX;

        for(int i = 0; i < n; i++) {
            if(nums[i] < mini) {
                mini = nums[i];
            }
        }

        for(int i = 0; i < n; i++) {
            move += nums[i] - mini;
        }

        return move;
    }
};