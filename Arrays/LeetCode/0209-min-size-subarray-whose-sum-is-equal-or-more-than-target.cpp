class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minLen = nums.size() + 1;
        int left = 0 , sum = 0  ;
        for(int right = 0 ; right<nums.size(); right++){
            sum = sum + nums[right] ;
            while(sum >= target){
                if(right-left+1 < minLen){
                    minLen = right-left+1 ;
                }
                sum = sum - nums[left] ;
                left++ ;
            }
        }
        if(minLen == nums.size() + 1){
            return 0 ;
        }
        return minLen ;
    }
};
