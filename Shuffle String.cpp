class Solution {
public:
    string restoreString(string s, vector<int>& indices) 
    {
        int n=s.size();
        int arr[n];
        for(int i=0; i<n ; i++)
        {
            arr[indices[i]]=s[i];
        }
        s.clear();
        for(int i=0;i<n;i++)
        {
            s.push_back(arr[i]);
        }
        return s;
    }
};
