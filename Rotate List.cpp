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
    ListNode* rotateRight(ListNode* head, int k) 
    {
        if(head==NULL)
        {
            return NULL;
        }
        ListNode *tempo=head;
        int c=0;
        while(tempo!=NULL)
        {
            c++;
            tempo=tempo->next;
        }
        if(c==0 || k==c)
        {
            return head;
        }
        k=k%c;
        if(k==0)
        {
            return head;
        }
        ListNode *start,*next,*p,*y;
        start=head;
        p=head;
        for(int i=0;i<=c-k-1;i++)
        {
            p=p->next;
        }
        ListNode *t=new ListNode;
        y=t;
        t->val=p->val;
        t->next=p->next;
        while(t->next!=NULL)
        {
            t=t->next;
        }
        for(int i=0;i<=c-k-1;i++)
        {
            ListNode *temp=new ListNode;
            temp->val=start->val;
            temp->next=NULL;
            t->next=temp;
            t=t->next;
            start=start->next;
        }
        return y;
    }
};
