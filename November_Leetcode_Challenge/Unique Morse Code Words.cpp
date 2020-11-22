class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) 
    {
        string arr[26] {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        vector<string>morse{};
        //string temp="";
        //string w;
        for(string w:words)
        {
            string temp;
            for(char j:w)
            {
                temp+=arr[int(j)-97];
            }
            morse.push_back(temp);
            //temp="";
        }
        sort(morse.begin(),morse.end());
        morse.erase(unique(morse.begin(),morse.end()),morse.end());
        return morse.size();
    }
};
