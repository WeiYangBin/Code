/*
* C++ 比PythoPython麻烦一点需要对于大小为0， 1的数组进行特殊判断
*
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int pointer = 0;
        if(nums.size() < 2)
        {
            return nums.size();
        }
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] != nums[pointer])
            {
                pointer ++;
            }
            nums[pointer] = nums[i];
        }
        return pointer + 1;
    }
};
