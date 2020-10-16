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
    int getDecimalValue(ListNode* head) 
    {
        ListNode *temp,*next;
        temp=head;
        //int i,num,digit,t,a;
        vector<int>a;
        int digit=0;
        int j,sum;
        int i=0;
        sum=0;
        while(temp!=NULL)
        {
            a.push_back(temp->val);
            temp=temp->next;
            digit++;
        }
        for(i=digit-1,j=0;i>=0;j++,i--)
        {
            a[i]=a[i]*pow(2,j);
            sum=sum+a[i];
        }
        return sum;
        //return digit;
    }
};
