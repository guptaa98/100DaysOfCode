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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        stack<int>a;
        stack<int>b;
        stack<int>ar;
        stack<int>br;
        ListNode *p,*q;
        p=l1;
        q=l2;
        while(l1)
        {
            ar.push(l1->val);
            l1=l1->next;
        }
        while(l2)
        {
            br.push(l2->val);
            l2=l2->next;
        }
        while(!ar.empty())
        {
            a.push(ar.top());
            ar.pop();
        }
        while(!br.empty())
        {
            b.push(br.top());
            br.pop();
        }
        int carry,num1,num2,sum;
        carry=0;
        ListNode *temp=new ListNode(0);
        temp->next=NULL;
        while(!a.empty() || !b.empty() || carry)
        {
            if(!a.empty())
            {
                num1=a.top();
                a.pop();
            }
            if(!b.empty())
            {
                num2=b.top();
                b.pop();
            }
            sum=num1+num2+carry;
            int value=sum%10;
            carry=sum/10;
            num1=num2=0;
            ListNode *temp1=new ListNode(value);
            temp1->next=temp->next;
            temp->next=temp1;
        }
        temp=temp->next;
        ListNode *t=new ListNode(0);
        t->next=NULL;
        while(temp!=NULL)
        {
            ListNode *t1=new ListNode(temp->val);
            t1->next=t->next;
            t->next=t1;
            temp=temp->next;
        }
        return t->next;
    }
};
