/*
 * @lc app=leetcode.cn id=136 lang=cpp
 *
 * [136] 只出现一次的数字
 */
// #include <string.h>
// #include <vector>
// #include <iostream>
// using namespace std;
// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int> pos_nums_keys(3 * 10000, 0);
        vector<int> neg_nums_keys(3 * 10000, 0);
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0) {
                neg_nums_keys[-nums[i]]++;
            } else {
                pos_nums_keys[nums[i]]++;
            }
        }
        for (int i = 0; i < 3 * 10000; i++) {
            if (pos_nums_keys[i] == 1) {
                return i;
            }
            if (neg_nums_keys[i] == 1) {
                return -i;
            }
        }
        return 0;
    }
};
// @lc code=end
// int main() {
//     Solution solve;
//     vector<int> nums = {2, 2, 3, 2};
//     cout << solve.singleNumber(nums) << endl;
//     return 0;
// }

