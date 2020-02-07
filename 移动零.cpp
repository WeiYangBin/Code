/*
* 双指针， 时间复杂度O(n) 空间复杂度O(1)
* 
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastNoneZeroPoint = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != 0)
            {
                nums[lastNoneZeroPoint++] = nums[i];
            }
        }
        
        for(int i = lastNoneZeroPoint; i < nums.size(); i++)
        {
            nums[i] = 0;
        }
    }
};
