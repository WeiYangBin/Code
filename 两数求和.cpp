class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        map<int, int> hash;
        for (int i = 0; i < nums.size(); i++)
        {
            int temp = target - nums[i];
            if(hash.count(temp))
            {
                res = vector<int> ({hash[temp], i});
                return res;
            }
            hash[nums[i]] = i;
        }
        return res;
    }
};
