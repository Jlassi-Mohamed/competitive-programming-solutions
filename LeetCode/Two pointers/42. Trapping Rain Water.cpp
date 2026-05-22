class Solution {
public:
    int trap(vector<int>& height) {

        int start = 0;
        int end = (int)height.size() - 1;

        int leftMax = 0;
        int rightMax = 0;
        int res = 0;

        while(start < end){

            leftMax = max(leftMax, height[start]);
            rightMax = max(rightMax, height[end]);

            if(leftMax < rightMax){
                res += leftMax - height[start];
                start++;
            }
            else{
                res += rightMax - height[end];
                end--;
            }
        }

        return res;
    }
};
