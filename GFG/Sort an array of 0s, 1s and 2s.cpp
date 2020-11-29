// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
void sort012(int[],int);

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

// } Driver Code Ends


void sort012(int a[], int n)
{
    // coode here 
    int freq1=0,freq2=0,freq0=0;
    for(int i =0;i<n;i++)
    {
        if(a[i]==1)
        {
            freq1++;
        }
        else if(a[i]==2)
        {
            freq2++;
        }
        else
        {
            freq0++;
        }
    }
    for(int i = 0;i<n;)
    {
        while(freq0--)
        {
            a[i] = 0;
            i++;
        }
        while(freq1--)
        {
            a[i] = 1;
            i++;
        }
        while(freq2--)
        {
            a[i] = 2;
            i++;
        }
    }
}
