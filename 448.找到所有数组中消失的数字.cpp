/*
 * @lc app=leetcode.cn id=448 lang=cpp
 *
 * [448] 找到所有数组中消失的数字
 */

// @lc code=start
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res(nums.size(), 0);

        for (int i = 0; i < nums.size(); i++) {
            res[nums[i]-1] = 1;
        }

        vector<int> res2;
        for (int i = 0; i < res.size(); i++) {
            if (res[i] == 0) {
                res2.push_back(i+1);
            }
        }
        return res2;
    }
};
// @lc code=end

