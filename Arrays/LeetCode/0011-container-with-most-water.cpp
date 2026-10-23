class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0 , j = height.size() - 1 ;
        int max_area = 0 ;
        while(i < j){
            if(height[i] < height[j]){
                int area = height[i] * (j-i) ;
                max_area = max(area,max_area) ;
                i++ ;
            }
            else{
                int area = height[j] * (j-i) ;
                max_area = max(area,max_area) ;
                j-- ;
            }
        }
        return max_area ;
    }
};
