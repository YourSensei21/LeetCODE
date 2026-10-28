class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size()-1;
        int newHeight = 0;
        while(r>l){
            int h = min(height[l],height[r]);
            int w = r - l;
            int currArea = h * w;
            if(currArea>newHeight){
                newHeight = currArea;
            }
            if(height[l]==h){
                l++;
            }else{
                r--;
            }
        }
        return newHeight;
    }
};