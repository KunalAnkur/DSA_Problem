class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea = 0;
        int start = 0, end = height.size() - 1;
        
        while(start < end){
            int length = end - start;
            int breadth = min(height[end] , height[start]);
            maxarea = max(maxarea, length*breadth);
            
            if(height[start] <= height[end])
                start++;
            else
                end--;
        }
        
        return maxarea;
    }
};