class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& arr) {
        int n = arr.size();
        int i = 0;
        int j = n-1;
        while(i<j){
        if(arr[i]%2==0)i++;
        else if(arr[j]%2==1)j--;
        else swap(arr[i],arr[j]);
        }
        
    return arr;
    }  
};