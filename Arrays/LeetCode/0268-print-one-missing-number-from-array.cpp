class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size() ;
        int total_sum = (n+1)*(n)/2 ;
        int arr_sum = 0 ;
        for(int i=0;i<n;i++){
            arr_sum += nums[i] ;
        }
        return (total_sum - arr_sum) ;
    }
};
