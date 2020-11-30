// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


/* Function to get minimum number of trials needed in worst 
  case with n eggs and k floors */
int eggDrop(int n, int k) 
{
    int f = max(1,2);
    cout<<f<<endl;
    if(k==1)
    {
        return k;
    }
    if(n==1)
    {
        return k;
    }
    int mn = INT_MAX;
    for(int brk = 1;brk<=k;brk++)
    {
        int temp_attempt = 1+ max(eggDrop(n-1,brk-1),eggDrop(n,k-brk));
        mn = min(mn,temp_attempt);
    }
    return mn;
}

// { Driver Code Starts.

int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;

        //calling function eggDrop()
        cout<<eggDrop(n, k)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
