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
    ListNode *FindFirstCommonNode(ListNode *pHead1, ListNode *pHead2)
    {
        ListNode *n1 = pHead1;
        ListNode *n2 = pHead2;
        int n = 0; //保留两个链表的长度的信息
        if (n1 == NULL || n2 == NULL)
            return NULL;
        while (n1->next)
        {
            n++;
            n1 = n1->next;
        }
        while (n2->next)
        {
            n--;
            n2 = n2->next;
        }

        if (n1->val != n2->val)
            return NULL;
        n1 = n >= 0 ? pHead1 : pHead2;
        n2 = n1 == pHead1 ? pHead2 : pHead1;
        n = abs(n);
        while (n > 0)
        {
            n1 = n1->next;
            n--;
        }
        while (n1 != n2) //当两者处于相同长度，则公共节点时，两者相等
        {
            n1 = n1->next;
            n2 = n2->next;
        }
        return n1;
    }
};