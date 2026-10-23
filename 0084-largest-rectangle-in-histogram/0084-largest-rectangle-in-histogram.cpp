
class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n = arr.size();

        vector<int> nsi(n);
        vector<int> psi(n);
        stack<int> st;

        // NSI
        for (int i = n - 1; i >= 0; i--) {
            while (st.size() > 0 && arr[st.top()] >= arr[i]) {
                st.pop();
            }

            if (st.size() == 0) {
                nsi[i] = n;
            } else {
                nsi[i] = st.top();
            }

            st.push(i);
        }

        while (st.size() > 0) {
            st.pop();
        }

        // PSI
        for (int i = 0; i < n; i++) {
            while (st.size() > 0 && arr[st.top()] >= arr[i]) {
                st.pop();
            }

            if (st.size() == 0) {
                psi[i] = -1;
            } else {
                psi[i] = st.top();
            }

            st.push(i);
        }

        // Maximum Area
        int maxi = 0;

        for (int i = 0; i < n; i++) {
            int height = arr[i];
            int width = nsi[i] - psi[i] - 1;
            int area = height * width;

            maxi = max(maxi, area);
        }

        return maxi;
    }
};
