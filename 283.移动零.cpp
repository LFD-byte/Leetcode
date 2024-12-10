/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n_nonzero = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] != 0){
                nums[n_nonzero] = nums[i];
                if (i != n_nonzero){
                    nums[i] = 0;
                }
                n_nonzero++;
            }
        }
    }
};
// @lc code=end

