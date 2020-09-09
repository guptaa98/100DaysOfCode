class Solution {
public:
    int compareVersion(string version1, string version2) 
    {
        vector<string> tokens1;
        vector<string> tokens2;
        stringstream check1(version1);
        stringstream check2(version2);
        string intermediate;
        while(getline(check1,intermediate,'.'))
        {
            tokens1.push_back(intermediate);
        }
        intermediate.clear();
        while(getline(check2,intermediate,'.'))
        {
            tokens2.push_back(intermediate);
        }
        if(tokens1.size()<tokens2.size())
        {
            while(tokens1.size()!=tokens2.size())
            {
                tokens1.push_back("0");
            }
        }
        if(tokens2.size()<tokens1.size())
        {
            while(tokens2.size()!=tokens1.size())
            {
                tokens2.push_back("0");
            }
        }
        for(int i=0;i<tokens1.size();i++)
        {
            if(stoi(tokens1[i]) > stoi(tokens2[i]))
            {
                return 1;
            }
            else if(stoi(tokens1[i]) < stoi(tokens2[i]))
            {
                return -1;
            }
        }
        return 0;
    }
};
