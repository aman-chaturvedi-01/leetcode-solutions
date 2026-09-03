class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int larg = -1 ;
        int sec_larg = -1 ;
        for(int i=0;i<arr.size();i++){
            if(arr[i] > larg){
                sec_larg = larg ;
                larg = arr[i] ;
            }
            else if(arr[i] > sec_larg && arr[i] < larg){
                sec_larg = arr[i] ;
            }
        }
        return sec_larg ;
    }
};
