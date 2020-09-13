class Solution {
public:
    string freqAlphabets(string s) 
    {
        char arr[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        string temp;
        for(int i=0;i<s.size();i++)
        {
            if(i+2<s.size() && s[i+2]=='#')
            {
                int k=int(s[i]-48)*10 + int(s[i+1]-48);
                temp+=arr[k-1];
                i+=2;
            }
            else
            {
                temp+=arr[int(s[i]-49)];
            }
        }
        return temp;
    }
};
