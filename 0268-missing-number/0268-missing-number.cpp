class Solution {
public:
// method 3

  int missingNumber(vector<int>& nums) {

        int n = nums.size();
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            sum+=nums[i];
        }
       int sumofn = n*(n+1)/2;
       return sumofn - sum;









        // method 2

    //     sort(nums.begin(),nums.end());
    //     for(int i = 0;i<nums.size();i++){
    //         if(i != nums[i])
    //         return i;

        
    //     }
    //     return n;


      //  method 1

        // for (int i = 0; i <= n; i++) {
        //     bool flag = false;

        //     for (int ele : nums) {
        //         if (ele == i) {
        //             flag = true;
        //             break;
        //         }
        //     }

        //     if (flag == false) {
        //         return i;
        //     }
        // }

        // return -1;
    }
};