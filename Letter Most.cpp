/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n;
    cin>>s;
    unordered_map<char,int>mp;
    for(int i=0; i<s.size();i++)
    {
        mp[s[i]]++;
    }
    int max=0;
    for(auto x:mp)
    {
        if(x.second>max)
        {
            max=x.second;
        }
    }
    cout<<max;
}
