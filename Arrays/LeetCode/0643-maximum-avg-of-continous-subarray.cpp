class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size() ;
        double sum = 0 , maxAvg = INT_MIN ;
        int left = 0 ;
        for(int i=0 ; i<n ; i++){
            sum += nums[i] ;

             if(i >= k){
                sum -= nums[left] ;
                left ++ ;
            } 
            if(i >= k-1){
                double avg = sum/k ;
                maxAvg = max(avg , maxAvg) ;
            }
        }
        return maxAvg ;
    }
};
