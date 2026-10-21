class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;

        for (string op : ops) {
            if (op == "C") {
                st.pop();
            }
            else if (op == "D") {
                st.push(2 * st.top());
            }
            else if (op == "+") {
                int a = st.top();
                st.pop();

                int b = st.top();
                st.pop();

                st.push(b);
                st.push(a);
                st.push(a + b);
            }
            else {
                st.push(stoi(op));
            }
        }

        int sum = 0;

        while (!st.empty()) {
            sum += st.top();
            st.pop();
        }

        return sum;
    }
};