#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL)
    {
    }
};

class Solution
{
public:
    ListNode *deleteDuplication(ListNode *pHead)
    {
        ListNode *head = new ListNode(0);
        head->next = pHead;
        ListNode *pre = head;
        ListNode *cur = head->next;

        while (cur != NULL)
        {
            if (cur->next != NULL && cur->val == cur->next->val)
            {
                while (cur->next != NULL && cur->next->val == cur->val)
                {
                    cur = cur->next;
                }
                cur = cur->next; //依旧指向重复值，需要向前继续前进一个
                pre->next = cur;
            }
            else
            {
                pre = cur;
                cur = cur->next;
            }
        }
        return head->next;
    }
};