/*
排序取值即可
*/
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int temp = 0;
        int length = nums.size() - k;
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = 0; j < nums.size(); j++)
            {
                if(nums[i] < nums[j])
                {
                    temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
        return nums[length];

    }
};

