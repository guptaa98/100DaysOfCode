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
    void reorderList(ListNode* head) 
    {   
        if(head==NULL || head->next==NULL || head->next->next==NULL)
        {
            return;
        }
        ListNode *p,*t;
        p=head;
        int cnt=0,i;
        ListNode *temp=new ListNode(p->val);
        temp->next=NULL;
        p=p->next;
        cnt++;
        while(p!=NULL)
        {
            ListNode *temp1=new ListNode(p->val);
            temp1->next=temp;
            temp=temp1;
            p=p->next;
            cnt++;
        }
        p=head;
        //cnt=cnt-1;
        t=head->next;
        i=2;
        while(i<=cnt)
        {
            if(i%2==0)
            {
                ListNode *q=new ListNode(temp->val);
                temp=temp->next;
                p->next=q;
                q->next=NULL;
                p=p->next;
            }
            if(i%2!=0)
            {
                ListNode *q=new ListNode(t->val);
                t=t->next;
                p->next=q;
                q->next=NULL;
//                t=t->next;
                p=p->next;
            }
            i++;
        }
        p->next=NULL;
    }
};
