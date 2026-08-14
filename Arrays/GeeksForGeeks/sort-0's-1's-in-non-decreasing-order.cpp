#include <vector>
#include <algorithm>
class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        int p1=0 , p2 = arr.size()-1 ;
        while(p1<p2){
            if(arr[p1]==1 && arr[p2]==0){
                swap(arr[p1],arr[p2]);
                p1 ++ ;
                p2 -- ;
            }
            else if(arr[p1]==0){
                p1 ++ ;
            }
            else if(arr[p2]==1){
                p2 -- ;
            }
        }
    }
};
