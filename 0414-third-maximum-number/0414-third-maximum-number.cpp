class Solution {
public:
    int thirdMax(vector<int>& arr) {
        int n = arr.size();

        int maxi = arr[0];

        // First maximum
        for(int i = 0; i < n; i++) {
            if(arr[i] > maxi) {
                maxi = arr[i];
            }
        }
        long long smaxi = LLONG_MIN;

        // Second maximum
        for(int i = 0; i < n; i++) {
            if(arr[i] < maxi && arr[i] > smaxi) {
                smaxi = arr[i];
            }
        }

        long long tmaxi = LLONG_MIN;

        // Third maximum
        for(int i = 0; i < n; i++) {
            if(arr[i] < smaxi && arr[i] > tmaxi) {
                tmaxi = arr[i];
            }
        }

        if(tmaxi == LLONG_MIN) {
            return maxi;
        }

        return tmaxi;
    }
};