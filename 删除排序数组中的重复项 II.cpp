class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        if(len <= 2)
        {
            return len;
        }
        int pointer = 1;
        for(int i = 2; i < n; i++)
        {
            if(nums[i] != nums[pointer - 1])
            {
                nums[++pointer] = nums[i];
            }
        }
        return pointer + 1;
    }
};
