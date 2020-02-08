/*
* 双指针
*/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int lastNoneValPoint = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != val)
            {
                nums[lastNoneValPoint++] = nums[i];
            }
        }
        return lastNoneValPoint;
    }
};
