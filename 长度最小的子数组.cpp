/*
*滑动框去寻找最小框即可
*
*
*/
class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
        }
        if(nums.size() < 1 || sum < s)
            return 0;
        int startPtr = 0;
        int endPtr = -1;
        int result = nums.size() + 1;
        int total = 0;
        while(startPtr <= nums.size() - 1)
        {
            if(endPtr + 1 < nums.size() && total < s) {
                endPtr ++;
                total += nums[endPtr];
            }
            else {
                total -= nums[startPtr];
                startPtr ++;
            }

            if(total >= s) {
                result = min(result, endPtr - startPtr + 1);
            }
        }
        if(result == nums.size() + 1)
            return 0;
        else
            return result;
    }
};
