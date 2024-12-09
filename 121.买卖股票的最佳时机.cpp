/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int prize_max = 0;
//         for (int i = 0; i < prices.size(); i++) {
//             for (int j = i + 1; j < prices.size(); j++) {
//                 if (prices[i] > prices[j]) {
//                     break;
//                 }
//                 int price_tmp = prices[j] - prices[i];
//                 if (price_tmp > prize_max) {
//                     prize_max = price_tmp;
//                 }
//             }
//         }
//         return prize_max;
//     }
// };
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, min_price = 100000;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i - 1] < min_price) {
                min_price = prices[i - 1];
            }
            if (prices[i] - min_price > profit) {
                profit = prices[i] - min_price;
            }
        }
        return profit;
    }
};
// @lc code=end

