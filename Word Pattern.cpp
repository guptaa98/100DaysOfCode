class Solution {
public:
    bool wordPattern(string pattern, string str) 
    {
        stringstream st(str);
        vector <string> v;
        string s;
        while(getline(st,s,' '))
        {
            v.push_back(s);
        }
        if(v.size()!=pattern.size())
        {
            return false;
        }
    unordered_map<char,string> mp1;
    unordered_map<string,char> mp2;    
    for(int i=0;i<pattern.length();i++)
    {
        if(mp1.count(pattern[i]))
        {
            if(mp1[pattern[i]]!=v[i])
            {
                return false;
            }
        }
        if(mp2.count(v[i]))
        {
            if(mp2[v[i]]!=pattern[i])
            {
                return false;
            }
        }
        
        mp1[pattern[i]]=v[i];
        mp2[v[i]]=pattern[i];
    }
    return true;
    }
};
