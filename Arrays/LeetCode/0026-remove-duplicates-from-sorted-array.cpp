class Solution {
public:
    int removeDuplicates(vector<int>&nums) {     //if nums={1,2,2,3,3}
        int k = 1 ; // at index 0 first element always unique so k = 1 ;
        for(int i=1 ;i<nums.size();i++){
            if(nums[i]!=nums[k-1]){   //current ele is not equal to last unique element
            nums[k] = nums[i] ;
            k++ ;
            }
        }                            //nums = {1,2,3,3,3}
        return k ;      // k=3 
    }
};
