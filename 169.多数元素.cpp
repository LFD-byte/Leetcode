/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 多数元素
 */

// @lc code=start
// #include <iostream>
// #include <vector>
// #include <unordered_map>
// using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int many = nums.size() / 2;
        unordered_map<int, int> count;
        for (int i = 0; i < nums.size(); ++i) {
            count[nums[i]] = 0;
            // count.insert(make_pair(nums[i], 0));
            // count.insert(pair<int, int>(nums[i], 0));
        }
        for (int num = 0; num < nums.size(); num++) {
            count[nums[num]]++;
            if (count[nums[num]] > many) {
                return nums[num];
            }
        }
        return 0;
    }
};
// @lc code=end
// int main() {
//     Solution solve;
//     vector<int> nums = {3,2,3};
//     cout << solve.majorityElement(nums) << endl;
//     return 0;
// }

