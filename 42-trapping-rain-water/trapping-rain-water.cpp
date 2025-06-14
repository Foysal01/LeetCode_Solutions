class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int trap = 0;
        vector<int> leftMax(n);
        vector<int> rightMax(n);
        vector<int> minimum(n);
        leftMax[0] = height[0];
        rightMax[n-1] = height[n-1];
        for(int i=1; i<n; i++){
            leftMax[i] = max(height[i],leftMax[i-1]);
        }
        for(int i=n-2; i>=0; i--){
            rightMax[i] = max(rightMax[i+1],height[i]);
        }
        for(int i=0; i<n; i++){
            if(min(leftMax[i], rightMax[i])> height[i]){
                trap = trap + (min(leftMax[i], rightMax[i]) - height[i]);
            }
        }
        
        return trap;

    }
};
