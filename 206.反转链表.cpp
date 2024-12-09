/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// #include<iostream>
// using namespace std;

// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *pre = nullptr;
        ListNode *visit = nullptr;
        while (head != nullptr)
        {
            ListNode *pre = new ListNode(head->val);
            pre->next = visit;
            visit = pre;
            head = head->next;
        }
        return visit;
        
    }
};
// @lc code=end
// int main(){
//     ListNode *head = new ListNode(1);
//     ListNode *node1 = new ListNode(2);
//     ListNode *node2 = new ListNode(3);
//     ListNode *node3 = new ListNode(4);

//     head->next = node1;
//     node1->next = node2;
//     node2->next = node3;

//     Solution s;
//     ListNode *res = s.reverseList(head);
//     while (res != nullptr)
//     {
//         cout << res->val << endl;
//         res = res->next;
//     }
//     return 0;
// }

