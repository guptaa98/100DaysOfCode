class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) 
    {
        int content=0;
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        for(int i=0;i<s.size();i++)
        {
            if(content<g.size() && g[content]<=s[i])
            {
                content++;
            }
        }
        return content;
    }
};
