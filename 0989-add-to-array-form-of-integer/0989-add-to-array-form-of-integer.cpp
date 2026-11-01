class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n = num.size();
        int carry = 0;
        vector<int> ans;

        int i = n - 1;

        while(i >= 0 or k > 0 or carry > 0) {

            int digit = 0;

            if(i >= 0) {
                digit = num[i];
            }

            int lastDigit = k % 10;

            int sum = digit + lastDigit + carry;

            ans.push_back(sum % 10);

            carry = sum / 10;

            k /= 10;
            i--;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};