class Solution {
public:
    vector<int> runningSum(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);

        int sum = 0;

        for(int i = 0; i < n; i++) {
            sum += arr[i];
            ans[i] = sum;
        }

        return ans;
    }
};