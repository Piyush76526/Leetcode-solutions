class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int>st;
        for(string op : ops){
            if(op == "C"){
                st.pop();
              }
              else if(op == "D"){
                st.push(2*st.top());
              }
              else if(op == "+"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int c = (a+b);
                st.push(b);
                st.push(a);
                st.push(c);
              }
              else 
              st.push(stoi(op));
        }
            int sum = 0;
            while(st.size()>0){
                sum+=st.top();
                st.pop();
            }
            return sum;
    }
};