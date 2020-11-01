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
        ListNode* p = head;
        if(head==NULL)
        {
            return 0;
        }
        long long int num = 0;
        string str="";
        while(p!=NULL)
        {
            str+=to_string(p->val);
            p=p->next;
        }
        string s;
        int j=0;
        for(int i=str.size()-1,j=0;i>=0;i--,j++)
        {
            s = str[j];
            stringstream convert(s);  
            int x = 0; 
            convert >> x;
            num = num + x*pow(2,i);
        }
        return num;
    }
};
