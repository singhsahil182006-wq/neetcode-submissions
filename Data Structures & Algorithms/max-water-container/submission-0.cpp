class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max_area=0;
        int left=0,right=heights.size()-1;
        while(left<right){
            int width=right-left;
            int h=min(heights[left],heights[right]);
            max_area=max(max_area,width*h);
            if(heights[left]<heights[right]){
                left++;
            }else{
                right--;
            }
        }
        return max_area;
    }
};
