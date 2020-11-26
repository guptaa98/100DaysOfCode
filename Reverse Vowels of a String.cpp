class Solution {
public:
    string reverseVowels(string s) 
    {
        string v = " ";
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
              s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'O' ||
              s[i] == 'I' || s[i] == 'U')
            {
                v += s[i];
            }
        }
        reverse(v.begin(),v.end());
        //cout<<v;
        string str = "";
        int j = 0;
        for(int i=0;i<s.size();i++)
        {
            //cout<<s[i];
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
              s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'O' ||
              s[i] == 'I' || s[i] == 'U')
            {
                str += v[j];
                j++; //cout<<str;
            }
            else
            {
                str += s[i];
                //cout<<str;
            }
        }
        return str;
    }
};
