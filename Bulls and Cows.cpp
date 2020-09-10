class Solution {
public:
    string getHint(string secret, string guess) 
    {
        string output="";
        int a=0,b=0;
        for(int i=0;i<secret.size();i++)
        {
            if(secret[i]==guess[i])
            {
                a++;
                guess[i]='*';
                secret[i]='*';
            }
        }
        for(int i=0;i<secret.size();i++)
        {
            int found=secret.find(guess[i]);
            if(found!=string::npos && guess[i]!='*')
            {
                b=b+1;
                secret[found]='*';
                guess[i]='*';
            }
        }
        output=to_string(a)+'A'+to_string(b)+'B';
        return output;
    }
};
