class Solution {
public:
    string smallestSubsequence(string s) 
    {
        string k;
        vector<bool>visited(26,false);
        vector<int>lastpos(26);
        stack<char>stk;
        for(int i=0;i<s.size();i++)
        {
            if(lastpos[s[i]-'a']<i)
            {
                lastpos[s[i]-'a'] = i;
            }
        }
        for(int i=0;i<s.size();i++)
        {
            while(!stk.empty() && s[i]<stk.top() && lastpos[stk.top()-'a']>i && visited[s[i]-'a']!=true)
            {
                visited[stk.top()-'a']=false;
                stk.pop();
            }
            if(visited[s[i]-'a']==false)
            {
                stk.push(s[i]);
                visited[s[i]-'a']=1;
            }
        }
        while(!stk.empty())
        {
            k.push_back(stk.top());
            stk.pop();
        }
        reverse(k.begin(),k.end());
        return k;
    }
};
