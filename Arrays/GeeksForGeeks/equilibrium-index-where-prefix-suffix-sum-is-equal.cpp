class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        int pref_sum = 0 , suff_sum = 0 , total_sum = 0 ;
        for(int i=0;i<arr.size();i++){
            total_sum += arr[i] ;
        }
        for(int i=0;i<arr.size()-1;i++){
            pref_sum += arr[i] ;
            suff_sum = total_sum - pref_sum - arr[i+1] ;
            
            if(pref_sum == suff_sum){
                return i+1 ;
            }
        }
        return -1 ;
    }
};
