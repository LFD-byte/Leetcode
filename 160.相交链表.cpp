/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// #include <iostream>
// #include <unordered_set>
// using namespace std;

//  struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
// };

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> seen;
        if (headA != nullptr){
            seen.insert(headA);
            headA = headA->next;
        }
        while (headA != nullptr || headB != nullptr) {
            if (seen.count(headB)) {
                return headB;
            }
            if(headB != nullptr){
                seen.insert(headB);
                headB = headB->next;
            }
                
            if (seen.count(headA)) {
                return headA;
            }
            if (headA != nullptr){
                seen.insert(headA);
                headA = headA->next;
            }
        }
        return nullptr;
    }
};
// @lc code=end

