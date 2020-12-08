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
    ListNode* middleNode(ListNode* head) 
    {
        int t,i;
        ListNode *next,*temp;
        temp=head;
        t=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            t++;
        }
        if(t%2==0)
        {
            t=(t/2)+1;
        }
        else
        {
            t=(t+1)/2;
        }
        temp=head;
        for(i=1;i<t;i++)
        {
            temp=temp->next;
        }
        return (temp);
    }
};
