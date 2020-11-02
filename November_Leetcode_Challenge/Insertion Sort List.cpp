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
    ListNode* insertionSortList(ListNode* head) 
    {
        if (head==NULL)
        {
            return NULL;
        }
        if(head->next == NULL)
        {
            return head;
        }
        vector<int>v;
        ListNode *p,*q;
        q=head;
        p=head->next;
        v.push_back(q->val);
        while(p!=NULL)
        {
            v.push_back(p->val);
            for(int i=1;i<v.size();i++)
            {
                int key = v[i];
                int j = i-1;
                while(j>=0 && v[j]>key)
                {
                    v[j+1] = v[j];
                    j--;
                }
                v[j+1] = key;
            }
            p = p->next;
        }
        int i = 0;
        while(q!=NULL && i<v.size())
        {
            q->val = v[i];
            q=q->next;
            i++;
        }
        return head;
    }
};
