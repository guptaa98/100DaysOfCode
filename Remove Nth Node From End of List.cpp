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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        if(head==NULL || head->next==NULL)
        {
            return NULL;
        }
        else
        {
            ListNode *p;
            p=head;
            int c=0;
            while(p!=NULL)
            {
                c++;
                p=p->next;
            }
            if(n<c)
            {
                c=c-n-1;
                p=head;
                while(c>0)
                {
                    p=p->next;
                    c--;
                }
                p->next=p->next->next;
            }
            else if(n==c)
            {
                head=head->next;
            }
        }
        return(head);
    }
};
