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
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) 
    {
        vector<int>a;
        if (head==NULL)
        {
            return a;
        }
        else
        {
        ListNode *p,*q;
        p=head;
        q=p->next;
        while(p!=NULL)
        {
            if(q==NULL)
            {
                a.push_back(0);
                p=p->next;
                if(p!=NULL)
                {
                    q=p->next;
                }
                else
                {
                    break;
                }
            }
            else if((q->val) > (p->val))
            {
                a.push_back(q->val);
                p = p->next;
                q = p->next;
            }
            else
            {
                q=q->next;
            }
        }
        return a;
        }
    }
};
