/*
 * @lc app=leetcode.cn id=338 lang=cpp
 *
 * [338] 比特位计数
 */

// @lc code=start
// class Solution {
// public:
//     vector<int> countBits(int n) {
//         vector<int> res(n+1, 0);
        
//         for (int i = 1; i <= n; i++) {
//             res[i] = res[i & (i-1)] + 1;
//         }
//         return res;
//     }
// };

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n+1, 0);
        
        for (int i = 0; i <= n; i++) {
            int j = i;
            while (j > 0)
            {
                if (j % 2 == 1) {
                    res[i]++;
                }
                j = j / 2;
            }
            
        }
        return res;
    }
};
// @lc code=end

