/*
* 双指针对撞判断
*
*
*/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int result = 0;
        int startPtr = 0;
        int endPtr = height.size() - 1;
        int minNum;
        while(startPtr < endPtr)
        {
            minNum = min(height[startPtr], height[endPtr]);
            result = max(result, (endPtr - startPtr) * minNum);
            if(height[startPtr] < height[endPtr])
                startPtr ++;
            else
                endPtr --;
        }
        return result;
    }
};
