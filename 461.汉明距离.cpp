/*
 * @lc app=leetcode.cn id=461 lang=cpp
 *
 * [461] 汉明距离
 */

// @lc code=start
class Solution {
public:
    int hammingDistance(int x, int y) {
        int z = x ^ y;
        int cnt = 0;
        while (z > 0){
            if (z % 2 == 1) {
                cnt++;
            }
            z = z / 2;
        }
        return cnt;
    }
};
// @lc code=end

