/*
 * @lc app=leetcode.cn id=234 lang=cpp
 *
 * [234] 回文链表
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
#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        // ListNode *low = head;
        // ListNode *fast = head;
        // while (fast != nullptr)
        // {
        //     if (fast->val == low->val){
        //         low = low->next;
        //     }
        //     fast = fast->next;
        // }
        ListNode *ano = head;
        ListNode *pre = nullptr;
        ListNode *cur = nullptr;
        while (head != nullptr)
        {
            ListNode *cur = new ListNode(head->val);
            cur->next = pre;
            pre = cur;
            head = head->next;
        }

        // while (ano != nullptr)
        // {
        //     cout<< ano->val << endl;
        //     ano = ano->next;
        // }
        

        while (ano != nullptr && cur !=nullptr)
        {
            if(ano->val != cur->val){
                return false;
            }
            ano = ano->next;
            cur = cur->next;
        }
        return true;
    }
};
// @lc code=end
int main(){
    ListNode *head = new ListNode(1);
    ListNode *node1 = new ListNode(2);
    // ListNode *node2 = new ListNode(2);
    // ListNode *node3 = new ListNode(1);

    head->next = node1;
    node1->next = nullptr;
    // node1->next = node2;
    // node2->next = node3;
    while (head != nullptr)
    {
        cout<< head->val << endl;
        head = head->next;
    }

    Solution s;
    bool res = s.isPalindrome(head);
    cout<< res << endl;
    return 0;
}

