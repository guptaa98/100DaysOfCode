class Solution {
public:
    int longeststr(string &s, int start,int end,int k)
    {
        if (end<k)
        {
            return 0;
        }
        int freq[26]={0};
        for(int i=start ; i<end ; i++)
        {
            freq[s[i]-'a']++;
        }
        for(int mid = start; mid < end ; mid++)
        {
            if(freq[s[mid]-'a']>=k)
            {
                continue;
            }
            int midnext = mid + 1;
            while(midnext < end && freq[s[midnext]-'a']<k)
            {
                midnext++;
            }
            return (max(longeststr(s,start,mid,k),longeststr(s,midnext,end,k)));
        }
        return (end-start);
    }
    int longestSubstring(string s, int k) 
    {
        int n = s.size();
        return longeststr(s,0,n,k);
    }
};
