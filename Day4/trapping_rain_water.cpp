// Problem Link: https://leetcode.com/problems/trapping-rain-water
// Difficulty: Hard

class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size(),area=0,i;
        if(n<=2)
            return 0;
        vector <int> left(n);
        vector <int> right(n);
        left[0]=height[0];
        for(i=1;i<n;i++){
            left[i]=max(left[i-1],height[i]);
        }
        right[n-1]=height[n-1];
         for(i=n-2;i>=0;i--){
            right[i]=max(right[i+1],height[i]);
        }
        for(i=1;i<n-1;i++){
            if(left[i]!=height[i] && right[i]!=height[i])
                area+=min(left[i],right[i])*1-height[i];
        }
        return area;
    }
};