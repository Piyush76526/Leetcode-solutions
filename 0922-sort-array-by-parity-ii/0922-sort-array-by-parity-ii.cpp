class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& arr) {
        int n = arr.size();
        int i = 0;
        int j = 1;
        while(i<n && j<n){
           if(arr[i]%2==0)i+=2;
           else if(arr[j]%2==1) j+=2;
           else swap(arr[i],arr[j]);
        }
        return arr;
    }
};